#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
//   fxc /nologo gui.hlsl /Tvs_4_0 /Zi /Zpc /Qstrip_reflect /Qstrip_debug
//    /EVS_Main /Fhgui_VS_Main.h /Vngui_VS_Main
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_VERTEXID              0   x           0   VERTID   uint   x   
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_POSITION              0   xyzw        0      POS  float   xyzw
// TEXCOORD                 0   xy          1     NONE  float   xy  
// COLOR                    0   xyzw        2     NONE  float   xyzw
//
vs_4_0
dcl_globalFlags refactoringAllowed | enableRawAndStructuredBuffers
dcl_constantbuffer cb0[5], immediateIndexed
dcl_resource_structured t1, 48 
dcl_input_sgv v0.x, vertex_id
dcl_output_siv o0.xyzw, position
dcl_output o1.xy
dcl_output o2.xyzw
dcl_temps 4
dcl_indexableTemp x0[4], 4
ushr r0.x, v0.x, l(2)
ld_structured r1.xyzw, r0.x, l(8), t1.xyzw
div r2.xyzw, r1.xyzw, cb0[0].zwzw
mov x0[0].xy, r2.xyxx
mov r3.zw, r2.yyyx
add r3.xy, r2.zwzz, r2.xyxx
mov x0[1].xy, r3.xzxx
mov x0[2].xy, r3.wyww
mov x0[3].xy, r3.xyxx
ld_structured r2.xy, r0.x, l(0), t1.xyxx
add r0.yz, r2.xxyx, -cb0[0].xxyx
and r2.xyz, v0.xxxx, l(3, 1, 2, 0)
movc r1.xy, r2.yzyy, l(0.500000,-0.500000,0,0), l(-0.500000,0.500000,0,0)
mov o1.xy, x0[r2.x + 0].xyxx
mul r1.xy, r1.zwzz, r1.xyxx
ld_structured r2.xyzw, r0.x, l(24), t1.xyzw
ld_structured r3.xy, r0.x, l(40), t1.xyxx
mad r0.xy, r1.xyxx, r2.xyxx, r0.yzyy
mov r3.zw, r2.zzzw
mov o2.xyzw, r3.zwxy
mov r0.z, l(1.000000)
dp3 o0.x, r0.xyzx, cb0[1].xywx
dp3 o0.y, r0.xyzx, cb0[2].xywx
dp3 o0.w, r0.xyzx, cb0[4].xywx
mov o0.z, l(1.000000)
ret 
// Approximately 0 instruction slots used
#endif

const BYTE gui_VS_Main[] =
{
     68,  88,  66,  67, 173, 242, 
    138, 111, 190, 246, 106,  57, 
    137, 180,  96, 109, 233, 181, 
     39,  76,   1,   0,   0,   0, 
     96,   4,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    100,   0,   0,   0, 216,   0, 
      0,   0,  80,   4,   0,   0, 
     73,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      6,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   1,   0,   0,  83,  86, 
     95,  86,  69,  82,  84,  69, 
     88,  73,  68,   0,  79,  83, 
     71,  78, 108,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  92,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,  12, 
      0,   0, 101,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,  15,   0, 
      0,   0,  83,  86,  95,  80, 
     79,  83,  73,  84,  73,  79, 
     78,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0,  67, 
     79,  76,  79,  82,   0, 171, 
     83,  72,  69,  88, 112,   3, 
      0,   0,  64,   0,   1,   0, 
    220,   0,   0,   0, 106,  72, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
    162,   0,   0,   4,   0, 112, 
     16,   0,   1,   0,   0,   0, 
     48,   0,   0,   0,  96,   0, 
      0,   4,  18,  16,  16,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
    101,   0,   0,   3,  50,  32, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   2,   0,   0,   0, 
    104,   0,   0,   2,   4,   0, 
      0,   0, 105,   0,   0,   4, 
      0,   0,   0,   0,   4,   0, 
      0,   0,   4,   0,   0,   0, 
     85,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,  16,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0, 167,   0, 
      0,   9, 242,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   8,   0, 
      0,   0,  70, 126,  16,   0, 
      1,   0,   0,   0,  14,   0, 
      0,   8, 242,   0,  16,   0, 
      2,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
    230, 142,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     54,   0,   0,   6,  50,  48, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  70,   0, 
     16,   0,   2,   0,   0,   0, 
     54,   0,   0,   5, 194,   0, 
     16,   0,   3,   0,   0,   0, 
     86,   1,  16,   0,   2,   0, 
      0,   0,   0,   0,   0,   7, 
     50,   0,  16,   0,   3,   0, 
      0,   0, 230,  10,  16,   0, 
      2,   0,   0,   0,  70,   0, 
     16,   0,   2,   0,   0,   0, 
     54,   0,   0,   6,  50,  48, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0, 134,   0, 
     16,   0,   3,   0,   0,   0, 
     54,   0,   0,   6,  50,  48, 
     32,   0,   0,   0,   0,   0, 
      2,   0,   0,   0, 118,  15, 
     16,   0,   3,   0,   0,   0, 
     54,   0,   0,   6,  50,  48, 
     32,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  70,   0, 
     16,   0,   3,   0,   0,   0, 
    167,   0,   0,   9,  50,   0, 
     16,   0,   2,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  70, 112, 
     16,   0,   1,   0,   0,   0, 
      0,   0,   0,   9,  98,   0, 
     16,   0,   0,   0,   0,   0, 
      6,   1,  16,   0,   2,   0, 
      0,   0,   6, 129,  32, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,  10, 114,   0, 
     16,   0,   2,   0,   0,   0, 
      6,  16,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,  55,   0, 
      0,  15,  50,   0,  16,   0, 
      1,   0,   0,   0, 150,   5, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,  63,   0,   0,   0, 191, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0, 191,   0,   0, 
      0,  63,   0,   0,   0,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   7,  50,  32,  16,   0, 
      1,   0,   0,   0,  70,  48, 
     32,   4,   0,   0,   0,   0, 
     10,   0,  16,   0,   2,   0, 
      0,   0,  56,   0,   0,   7, 
     50,   0,  16,   0,   1,   0, 
      0,   0, 230,  10,  16,   0, 
      1,   0,   0,   0,  70,   0, 
     16,   0,   1,   0,   0,   0, 
    167,   0,   0,   9, 242,   0, 
     16,   0,   2,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
     24,   0,   0,   0,  70, 126, 
     16,   0,   1,   0,   0,   0, 
    167,   0,   0,   9,  50,   0, 
     16,   0,   3,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
     40,   0,   0,   0,  70, 112, 
     16,   0,   1,   0,   0,   0, 
     50,   0,   0,   9,  50,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   0,  16,   0,   1,   0, 
      0,   0,  70,   0,  16,   0, 
      2,   0,   0,   0, 150,   5, 
     16,   0,   0,   0,   0,   0, 
     54,   0,   0,   5, 194,   0, 
     16,   0,   3,   0,   0,   0, 
    166,  14,  16,   0,   2,   0, 
      0,   0,  54,   0,   0,   5, 
    242,  32,  16,   0,   2,   0, 
      0,   0, 230,   4,  16,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   5,  66,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     16,   0,   0,   8,  18,  32, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70, 131,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  16,   0,   0,   8, 
     34,  32,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70, 131, 
     32,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,  16,   0, 
      0,   8, 130,  32,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     70, 131,  32,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     54,   0,   0,   5,  66,  32, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  62,   0,   0,   1, 
     83,  70,  73,  48,   8,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0
};
