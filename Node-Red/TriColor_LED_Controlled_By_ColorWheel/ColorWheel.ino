[
{"id":"d5b7ac8e.978da","type":"tab","label":"Colour wheel","disabled":false,"info":""},
{"id":"49d488aa.4537d8","type":"ui_colour_picker","z":"d5b7ac8e.978da","name":"","label":"","group":"96040c14.c479e","format":"rgb","outformat":"object","showSwatch":true,"showPicker":true,"showValue":false,"showHue":true,"showAlpha":true,"showLightness":false,"square":"false","dynOutput":"false","order":1,"width":5,"height":4,"passthru":true,"topic":"","x":210,"y":320,"wires":[["def89e85.58f06","afb33d69.b6faf","61030068.ce285","ab26428a.e07b6"]]},
{"id":"def89e85.58f06","type":"ui_text","z":"d5b7ac8e.978da","d":true,"group":"96040c14.c479e","order":11,"width":9,"height":1,"name":"","label":"RGB Value","format":"
{
{msg.payload}}","layout":"col-center","x":210,"y":500,"wires":[]},
{"id":"47e3ddb1.f0fd44","type":"arduino out","z":"d5b7ac8e.978da","name":"Green","pin":"22","state":"PWM","arduino":"199cb671.8f3c2a","x":690,"y":160,"wires":[]},
{"id":"2591c609.9d924a","type":"debug","z":"d5b7ac8e.978da","name":"GREEN:","active":true,"tosidebar":true,"console":true,"tostatus":false,"complete":"payload","targetType":"msg","x":700,"y":120,"wires":[]},
{"id":"afb33d69.b6faf","type":"change","z":"d5b7ac8e.978da","name":"turn on","rules":[
{"t":"set","p":"payload","pt":"msg","to":"payload.g","tot":"msg"}],"action":"","property":"","from":"","to":"","reg":false,"x":480,"y":240,"wires":[["47e3ddb1.f0fd44","2591c609.9d924a","e447f7bc.fc8258"]]},
{"id":"61030068.ce285","type":"change","z":"d5b7ac8e.978da","name":"turn on","rules":[
{"t":"set","p":"payload","pt":"msg","to":"payload.b","tot":"msg"}],"action":"","property":"","from":"","to":"","reg":false,"x":490,"y":320,"wires":[["363ec6a2.f8255a","63a00469.d8325c","6d751862.4b6af8"]]},
{"id":"363ec6a2.f8255a","type":"arduino out","z":"d5b7ac8e.978da","name":"Blue","pin":"21","state":"PWM","arduino":"199cb671.8f3c2a","x":690,"y":340,"wires":[]},
{"id":"63a00469.d8325c","type":"debug","z":"d5b7ac8e.978da","name":"BLUE:","active":true,"tosidebar":true,"console":true,"tostatus":false,"complete":"payload","targetType":"msg","x":690,"y":300,"wires":[]},
{"id":"ab26428a.e07b6","type":"change","z":"d5b7ac8e.978da","name":"turn on","rules":[
{"t":"set","p":"payload","pt":"msg","to":"payload.r","tot":"msg"}],"action":"","property":"","from":"","to":"","reg":false,"x":500,"y":480,"wires":[["1b0b8b5f.759e95","858fd46b.befb78","a2b04676.0e9198"]]},
{"id":"1b0b8b5f.759e95","type":"arduino out","z":"d5b7ac8e.978da","name":"Red","pin":"20","state":"PWM","arduino":"199cb671.8f3c2a","x":700,"y":500,"wires":[]},
{"id":"858fd46b.befb78","type":"debug","z":"d5b7ac8e.978da","name":"RED:","active":true,"tosidebar":true,"console":true,"tostatus":false,"complete":"payload","targetType":"msg","x":700,"y":460,"wires":[]},
{"id":"e447f7bc.fc8258","type":"ui_text","z":"d5b7ac8e.978da","group":"97012090.15142","order":3,"width":5,"height":1,"name":"","label":"Green:","format":"
{
{msg.payload}}","layout":"row-spread","x":700,"y":200,"wires":[]},
{"id":"6d751862.4b6af8","type":"ui_text","z":"d5b7ac8e.978da","group":"97012090.15142","order":5,"width":5,"height":1,"name":"","label":"Blue:","format":"
{
{msg.payload}}","layout":"row-spread","x":690,"y":380,"wires":[]},
{"id":"a2b04676.0e9198","type":"ui_text","z":"d5b7ac8e.978da","group":"97012090.15142","order":1,"width":5,"height":1,"name":"","label":"Red:","format":"
{
{msg.payload}}","layout":"row-spread","x":690,"y":540,"wires":[]},
{"id":"ad771675.5824d8","type":"comment","z":"d5b7ac8e.978da","name":"Curtis Spence, Spen0203@algonquinlive.com, 040 855 320, Hybrid 2 Colour Wheel","info":"Lab 8 Toggle tricolor LED","x":290,"y":60,"wires":[]},
{"id":"96040c14.c479e","type":"ui_group","z":"","name":"Tri-Colour LED (Analog)","tab":"5464c3a3.83d12c","disp":true,"width":"9","collapse":false},
{"id":"199cb671.8f3c2a","type":"arduino-board","z":"","device":"COM5"},
{"id":"97012090.15142","type":"ui_group","z":"","name":"RGB Values","tab":"5464c3a3.83d12c","order":2,"disp":true,"width":"6","collapse":true},
{"id":"5464c3a3.83d12c","type":"ui_tab","z":"","name":"Colour Wheel","icon":"dashboard","disabled":false,"hidden":false}]