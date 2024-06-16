#pragma once

 

// Package: KeyAssignSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "NeedInputType_structs.hpp"


namespace SDK
{

// UserDefinedStruct KeyAssignSet.KeyAssignSet
// 0x01E8 (0x01E8 - 0x0000)
struct FKeyAssignSet final
{
public:
	EConfig_KeyconfigItems                        KeyConfigItemType_6_28223E3E49BB973FC7A55E8401D99C1F; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            KeyboardType_12_43AE8C874412DD36A46ECC92F0974BBB;  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            PadType_13_CF3D054A4674F5B48C426291AD67CE44;       // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENeedInputType                                NeedType_9_F6CC1EAD49C34C504109C0B4036F97EC;       // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B2A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<ESBKeyConfigKeyboardKey>                 InvalidKeyboardTypes_20_9A17E06F4A725C82E28439860A5B7F7B; // 0x0008(0x0050)(Edit, BlueprintVisible)
	TSet<ESBKeyConfigGamepadKey>                  InvalidPadTypes_25_6E266C6141C40F88D14AAE83A68099C9; // 0x0058(0x0050)(Edit, BlueprintVisible)
	TSet<ESBKeyConfigMouseKey>                    InvalidMouseTypes_24_7481863D47B82070DC4E61919B9818EA; // 0x00A8(0x0050)(Edit, BlueprintVisible)
	TMap<ESBKeyConfigKeyboardKey, int32>          WarningKeyboardTypes_35_2045C42F46813470F6EBE4A972586701; // 0x00F8(0x0050)(Edit, BlueprintVisible)
	TMap<ESBKeyConfigMouseKey, int32>             WarningMouseType_44_A90DAD1447140F3DF585019B8B6C0A1B; // 0x0148(0x0050)(Edit, BlueprintVisible)
	TMap<ESBKeyConfigGamepadKey, int32>           WarningPadTypes_46_BDC01C9B465836086CE48582947B7F26; // 0x0198(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FKeyAssignSet) == 0x000008, "Wrong alignment on FKeyAssignSet");
static_assert(sizeof(FKeyAssignSet) == 0x0001E8, "Wrong size on FKeyAssignSet");
static_assert(offsetof(FKeyAssignSet, KeyConfigItemType_6_28223E3E49BB973FC7A55E8401D99C1F) == 0x000000, "Member 'FKeyAssignSet::KeyConfigItemType_6_28223E3E49BB973FC7A55E8401D99C1F' has a wrong offset!");
static_assert(offsetof(FKeyAssignSet, KeyboardType_12_43AE8C874412DD36A46ECC92F0974BBB) == 0x000001, "Member 'FKeyAssignSet::KeyboardType_12_43AE8C874412DD36A46ECC92F0974BBB' has a wrong offset!");
static_assert(offsetof(FKeyAssignSet, PadType_13_CF3D054A4674F5B48C426291AD67CE44) == 0x000002, "Member 'FKeyAssignSet::PadType_13_CF3D054A4674F5B48C426291AD67CE44' has a wrong offset!");
static_assert(offsetof(FKeyAssignSet, NeedType_9_F6CC1EAD49C34C504109C0B4036F97EC) == 0x000003, "Member 'FKeyAssignSet::NeedType_9_F6CC1EAD49C34C504109C0B4036F97EC' has a wrong offset!");
static_assert(offsetof(FKeyAssignSet, InvalidKeyboardTypes_20_9A17E06F4A725C82E28439860A5B7F7B) == 0x000008, "Member 'FKeyAssignSet::InvalidKeyboardTypes_20_9A17E06F4A725C82E28439860A5B7F7B' has a wrong offset!");
static_assert(offsetof(FKeyAssignSet, InvalidPadTypes_25_6E266C6141C40F88D14AAE83A68099C9) == 0x000058, "Member 'FKeyAssignSet::InvalidPadTypes_25_6E266C6141C40F88D14AAE83A68099C9' has a wrong offset!");
static_assert(offsetof(FKeyAssignSet, InvalidMouseTypes_24_7481863D47B82070DC4E61919B9818EA) == 0x0000A8, "Member 'FKeyAssignSet::InvalidMouseTypes_24_7481863D47B82070DC4E61919B9818EA' has a wrong offset!");
static_assert(offsetof(FKeyAssignSet, WarningKeyboardTypes_35_2045C42F46813470F6EBE4A972586701) == 0x0000F8, "Member 'FKeyAssignSet::WarningKeyboardTypes_35_2045C42F46813470F6EBE4A972586701' has a wrong offset!");
static_assert(offsetof(FKeyAssignSet, WarningMouseType_44_A90DAD1447140F3DF585019B8B6C0A1B) == 0x000148, "Member 'FKeyAssignSet::WarningMouseType_44_A90DAD1447140F3DF585019B8B6C0A1B' has a wrong offset!");
static_assert(offsetof(FKeyAssignSet, WarningPadTypes_46_BDC01C9B465836086CE48582947B7F26) == 0x000198, "Member 'FKeyAssignSet::WarningPadTypes_46_BDC01C9B465836086CE48582947B7F26' has a wrong offset!");

}

