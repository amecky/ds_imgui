# ds_imgui

# How to use

First of all include the header in the main class:
```
#define DS_IMGUI_IMPLEMENTATION
#include <ds_imgui.h>
```

During intialisation you need to intialize im_gui:
```
gui::init();
```

When your application is done you need to clean up:
```
gui::shutdown();
```

Very simple dialog
```
p2i p(20, 710);
gui::start(&p, 500);
gui::begin("Basic elements", 0);
gui::Button("Button");
gui::end();
```