#pragma once

 

// Package: KeyConfigType

#include "Basic.hpp"

#include "Config_KeyConfigItemType_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "RadioButtonData_structs.hpp"


namespace SDK
{

// UserDefinedStruct KeyConfigType.KeyConfigType
// 0x0020 (0x0020 - 0x0000)
struct FKeyConfigType final
{
public:
	EConfig_KeyConfigItemType                     ItemType_7_DD2CE5EA4CA84F2F4127619B80A4F8B0;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        InputType_6_1671F6DF49D57653C71C59B842112D42;      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B5[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         YOffset_13_A71A1FFF421A54D2109E7CAF7EEB1E6F;       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextId_12_D6CB286B4BF811A086EEB483DCAAC369;        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisablePad_15_80F2CDCE487899DDE12AC08649A3CA64;    // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DisableKeyMouse_17_BF42852B4CCABB494DDFF8870AE5A15C; // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41B6[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRadioButtonData>               RadioButtonDatas_21_E2F05150482EAE873D78B49F1FD09286; // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FKeyConfigType) == 0x000008, "Wrong alignment on FKeyConfigType");
static_assert(sizeof(FKeyConfigType) == 0x000020, "Wrong size on FKeyConfigType");
static_assert(offsetof(FKeyConfigType, ItemType_7_DD2CE5EA4CA84F2F4127619B80A4F8B0) == 0x000000, "Member 'FKeyConfigType::ItemType_7_DD2CE5EA4CA84F2F4127619B80A4F8B0' has a wrong offset!");
static_assert(offsetof(FKeyConfigType, InputType_6_1671F6DF49D57653C71C59B842112D42) == 0x000001, "Member 'FKeyConfigType::InputType_6_1671F6DF49D57653C71C59B842112D42' has a wrong offset!");
static_assert(offsetof(FKeyConfigType, YOffset_13_A71A1FFF421A54D2109E7CAF7EEB1E6F) == 0x000004, "Member 'FKeyConfigType::YOffset_13_A71A1FFF421A54D2109E7CAF7EEB1E6F' has a wrong offset!");
static_assert(offsetof(FKeyConfigType, TextId_12_D6CB286B4BF811A086EEB483DCAAC369) == 0x000008, "Member 'FKeyConfigType::TextId_12_D6CB286B4BF811A086EEB483DCAAC369' has a wrong offset!");
static_assert(offsetof(FKeyConfigType, DisablePad_15_80F2CDCE487899DDE12AC08649A3CA64) == 0x00000C, "Member 'FKeyConfigType::DisablePad_15_80F2CDCE487899DDE12AC08649A3CA64' has a wrong offset!");
static_assert(offsetof(FKeyConfigType, DisableKeyMouse_17_BF42852B4CCABB494DDFF8870AE5A15C) == 0x00000D, "Member 'FKeyConfigType::DisableKeyMouse_17_BF42852B4CCABB494DDFF8870AE5A15C' has a wrong offset!");
static_assert(offsetof(FKeyConfigType, RadioButtonDatas_21_E2F05150482EAE873D78B49F1FD09286) == 0x000010, "Member 'FKeyConfigType::RadioButtonDatas_21_E2F05150482EAE873D78B49F1FD09286' has a wrong offset!");

}

