
# BLUEPROTOCOL  SDK & DLL  v1.08.000.837664 

# 祝贺 游戏关服 万代NMSL 运营三个智障！ 

- 游戏具有 Wellbia小老头- XIGNCODE3 反作弊保护
- 请自行提权注入..这里不提供内核注入方法
- UE4引擎 4.27.2版本

![390ee9d8c1a6495bb236a8b36146c64a560164e19b9240f2a3d450cc62fffe38](https://github.com/user-attachments/assets/73c55941-af3c-4b9e-98aa-6afbc6f2243f)
# 香蕉协议 - **BananaProtocol**   DLL 内部作弊 功能信息 
- 引擎绘制菜单 
- 透视 （怪物 人物 NPC Actor）
- 自瞄 （不太好用）
- 吸怪 （可调整范围半径 0-10000米）
- 全图 吸采集&吸宝箱
- 攻击 伤害加倍 1-100倍 （单刷 上级 EX 上级改 如果通关速度过快 容易被人工封号 ）
- 无限 技能 无CD
- 无限 体力
- 无敌 （可能有小bug）
- 锁定 玩家位置
- 飞天
- 遁地
- 人物 加速
- 世界 加速

# 香蕉头 外部作弊 功能信息
- 需要对游戏进行降权 或者 使用自制驱动给软件提权绕过反作弊
- 无限 体力
- 玩家 锁血
- 锁定 玩家位置
- 飞天
- 遁地
- 快速传送功能
- 自定义传送功能
- 传送坐标保存功能 


# 游戏资源解包 AES密钥

 ```console
0xEA9051DDACE1CCF98A0510F0E370BD986A75C74756E0309E6A578A47AF564255
  ```



# 部分基址偏移特征码

- NamePool = 48 8D 0D ? ? ? ? E8 ? ? ? ? C6 05 ? ? ? ? 01 0F 10 03 4C 8D 44 24 20 48 8B C8

- ObjectArray  = 48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 04 D1 EB 03  /  48 8B 1D ? ? ? ? 48 85 DB 74 3B 41 B0 01 33 D2 48 8B CB E8

- GWorld = BLUEPROTOCOL-Win64-Shipping.exe + 0x07B276D0

- GName = BLUEPROTOCOL-Win64-Shipping.exe + 0x05CF32F8

 ```console
Off::UStruct::Children: 0x48
Off::Field::Next: 0x28
Off::UStruct::SuperStruct: 0x40
Off::UStruct::Size: 0x58
Off::UStruct::MinAlignemnts: 0x5C
Off::UClass::CastFlags: 0xD0
Off::UStruct::ChildProperties: 0x50
Off::FField::Next: 0x20
Off::FField::Name: 0x28
Off::FField::Flags: 0x30
Off::UClass::ClassDefaultObject: 0x118
Off::UEnum::Names: 0x40
Off::UFunction::FunctionFlags: 0xB0
Off::UFunction::ExecFunction: 0xD8
Off::Property::ElementSize: 0x3C
Off::Property::ArrayDim: 0x38
Off::Property::Offset_Internal: 0x4C
Off::Property::PropertyFlags: 0x40

UPropertySize: 0x78

Off::ArrayProperty::Inner: 0x78
Off::SetProperty::ElementProp: 0x78
Off::MapProperty::Base: 0x78

Off::InSDK::ULevel::Actors: 0x98

Off::InSDK::UDataTable::RowMap: 0x30

PE-Offset: 0x28D0800
PE-Index: 0x44

Off::InSDK::Text::TextSize: 0x18
Off::InSDK::Text::TextDatOffset: 0x0
Off::InSDK::Text::InTextDataStringOffset: 0x28
  ```
