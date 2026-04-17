topic "GUI Scaling";
[i448;a25;kKO9;2 $$1,0#37138531426314131252341829483380:class]
[l288;2 $$2,2#27521748481378242620020725143825:desc]
[0 $$3,0#96390100711032703541132217272105:end]
[H6;0 $$4,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$5,0#37138531426314131252341829483370:item]
[l288;a4;*@5;1 $$6,6#70004532496200323422659154056402:requirement]
[l288;i1121;b17;O9;~~~.1408;2 $$7,0#10431211400427159095818037425705:param]
[i448;b42;O9;2 $$8,8#61672508125594000341940100500538:tparam]
[b42;2 $$9,9#13035079074754324216151401829390:normal]
[2 $$0,0#00000000000000000000000000000000:Default]
[{_} 
[ {{10000@(113.42.0) [s0;%% [*@7;4 GUI Scaling]]}}&]
[s0;i448;a25;kKO9;@(0.0.255) &]
[ {{10000F(128)G(128)@1 [s0;%% [* Function List]]}}&]
[s0;%% &]
[s3; &]
[s4; &]
[s5;:Upp`:`:DPI`(const Upp`:`:Image`&`): [_^Upp`:`:Image^ Image]_[* DPI]([@(0.0.255) const]_
[_^Upp`:`:Image^ Image][@(0.0.255) `&]_[*@3 img])&]
[s2;%% Eventually upscales or downscales [%-*@3 img] based on its UHD 
flag and current mode. Standard images are upscaled 2x in UHD 
mode, UHD images are downscaled 2x in standard mode.&]
[s3;%% &]
[s4; &]
[s5;:Upp`:`:DPI`(int`): [@(0.0.255) int]_[* DPI]([@(0.0.255) int]_[*@3 a])&]
[s2;%% Returns 2 `* [%-*@3 a] if UHD is active and [%-*@3 a] otherwise.&]
[s3;%% &]
[s4; &]
[s5;:Upp`:`:DPI`(Upp`:`:Size`): [_^Upp`:`:Size^ Size]_[* DPI]([_^Upp`:`:Size^ Size]_[*@3 sz])
&]
[s2;%% Returns 2 `* [%-*@3 sz] if UHD is active and [%-*@3 sz] otherwise.&]
[s3;%% &]
[s0;%% ]]