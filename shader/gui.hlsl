cbuffer cbChangesPerFrame : register(b0) {
	float4 screenDimension;
	matrix wvp;
};

struct GUIItem {
	float2 position;
	float4 textureRect;
	float2 scaling;
	float4 color;
};

StructuredBuffer<GUIItem> ItemsRO : register(t1);

struct PS_Input {
	float4 pos  : SV_POSITION;
	float2 tex0 : TEXCOORD0;
	float4 color : COLOR0;
};

PS_Input VS_Main(uint id:SV_VERTEXID) {
	PS_Input vsOut = (PS_Input)0;
	uint itemIndex = id / 4;
	uint vertexIndex = id % 4;	
	float2 t[4];
	float4 ret = ItemsRO[itemIndex].textureRect;
	float u1 = ret.x / screenDimension.z;
	float v1 = ret.y / screenDimension.w;
	float width = ret.z / screenDimension.z;
	float height = ret.w / screenDimension.w;
	float u2 = u1 + width;
	float v2 = v1 + height;
	t[0] = float2(u1, v1);
	t[1] = float2(u2, v1);
	t[2] = float2(u1, v2);
	t[3] = float2(u2, v2);

	float3 position;
	position.x = (vertexIndex % 2) ? 0.5 : -0.5;
	position.y = (vertexIndex & 2) ? -0.5 : 0.5;
	position.z = 0.0;

	position.x *= ret.z;
	position.y *= ret.w;

	float sx = position.x * ItemsRO[itemIndex].scaling.x;
	float sy = position.y * ItemsRO[itemIndex].scaling.y;

	float3 sp = float3(ItemsRO[itemIndex].position, 0.0);

	sp.x -= screenDimension.x;
	sp.y -= screenDimension.y;

	vsOut.pos = mul(float4(sp.x + sx, sp.y + sy, 0.0, 1.0f), wvp);
	vsOut.pos.z = 1.0;
	vsOut.tex0 = t[vertexIndex];
	vsOut.color = ItemsRO[itemIndex].color;
	return vsOut;
}

Texture2D colorMap : register(t0);
SamplerState colorSampler : register(s0);

float4 PS_Main(PS_Input frag) : SV_TARGET{
	float4 c = colorMap.Sample(colorSampler, frag.tex0) * frag.color;
	return c;
}
