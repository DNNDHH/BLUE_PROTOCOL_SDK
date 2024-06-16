#pragma once

 

// Package: ProbabilityDisplay_ImagineCraftListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem
// 0x0128 (0x0128 - 0x0000)
struct ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44A3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_ImagineCraftEffectItem_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44A4[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44A5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PerkId;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Rate;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetAbilityEffectMasterData_IsExists;   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44A6[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_BP_GetAbilityEffectMasterData_ReturnValue; // 0x0054(0x0024)(NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityMasterData_IsExists;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44A7[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_GetAbilityMasterData_ReturnValue;         // 0x00B8(0x0048)()
	class FString                                 CallFunc_GetPerkName_ReturnValue;                  // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
};
static_assert(alignof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem) == 0x000008, "Wrong alignment on ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem");
static_assert(sizeof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem) == 0x000128, "Wrong size on ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, EntryPoint) == 0x000000, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_GetMasterDataManager_IsValid) == 0x000010, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000020, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_GetMasterDataManager_IsValid_1) == 0x000028, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000030, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, K2Node_CustomEvent_PerkId) == 0x000038, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::K2Node_CustomEvent_PerkId' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, K2Node_CustomEvent_Rate) == 0x00003C, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::K2Node_CustomEvent_Rate' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_Conv_FloatToString_ReturnValue) == 0x000040, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_BP_GetAbilityEffectMasterData_IsExists) == 0x000050, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_BP_GetAbilityEffectMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_BP_GetAbilityEffectMasterData_ReturnValue) == 0x000054, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_BP_GetAbilityEffectMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_Concat_StrStr_ReturnValue) == 0x000078, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0000A0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_GetAbilityMasterData_IsExists) == 0x0000B0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_GetAbilityMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_GetAbilityMasterData_ReturnValue) == 0x0000B8, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_GetAbilityMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_GetPerkName_ReturnValue) == 0x000100, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_GetPerkName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.SetupA
// 0x0008 (0x0008 - 0x0000)
struct ProbabilityDisplay_ImagineCraftListItem_C_SetupA final
{
public:
	int32                                         PerkId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProbabilityDisplay_ImagineCraftListItem_C_SetupA) == 0x000004, "Wrong alignment on ProbabilityDisplay_ImagineCraftListItem_C_SetupA");
static_assert(sizeof(ProbabilityDisplay_ImagineCraftListItem_C_SetupA) == 0x000008, "Wrong size on ProbabilityDisplay_ImagineCraftListItem_C_SetupA");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_SetupA, PerkId) == 0x000000, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_SetupA::PerkId' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_SetupA, Rate) == 0x000004, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_SetupA::Rate' has a wrong offset!");

// Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.Setup
// 0x0258 (0x0258 - 0x0000)
struct ProbabilityDisplay_ImagineCraftListItem_C_Setup final
{
public:
	int32                                         PickId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalEffectValue;                                  // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStatusAilmentIconType                      LocalIconType;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44A8[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempIndex;                                         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44A9[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0028(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBAbilityTextData                     CallFunc_GetAbilityTextDataCollection_ReturnValue; // 0x0050(0x0050)(ConstParm)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44AA[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x00D0(0x0048)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid; // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44AB[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig; // 0x0120(0x0038)()
	float                                         CallFunc_ComvertAddElementResistRate_ReturnValue;  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1; // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44AC[0x6];                                     // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1; // 0x0168(0x0038)()
	class UProbabilityDisplay_ImagineCraftEffectItem_C* CallFunc_Create_ReturnValue;                       // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsAbilityDBIconTypeAttributeResist_ReturnValue; // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44AD[0x2];                                     // 0x01AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ComvertAddElementResistRate_ReturnValue_1; // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsAbilityDBIconTypeAttributeResist_ReturnValue_1; // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44AE[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_ImagineCraftEffectItem_C* CallFunc_Create_ReturnValue_1;                     // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44AF[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetAbilityEffectMasterData_IsExists;   // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44B0[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_BP_GetAbilityEffectMasterData_ReturnValue; // 0x020C(0x0024)(NoDestructor)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0240(0x0018)()
};
static_assert(alignof(ProbabilityDisplay_ImagineCraftListItem_C_Setup) == 0x000008, "Wrong alignment on ProbabilityDisplay_ImagineCraftListItem_C_Setup");
static_assert(sizeof(ProbabilityDisplay_ImagineCraftListItem_C_Setup) == 0x000258, "Wrong size on ProbabilityDisplay_ImagineCraftListItem_C_Setup");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, PickId) == 0x000000, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::PickId' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, Rate) == 0x000004, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::Rate' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, Param_Index) == 0x000008, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::Param_Index' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, Num) == 0x00000C, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::Num' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, LocalEffectValue) == 0x000010, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::LocalEffectValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, LocalIconType) == 0x000014, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::LocalIconType' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, TempIndex) == 0x000018, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::TempIndex' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Percent_IntInt_ReturnValue) == 0x00001C, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000020, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Conv_FloatToText_ReturnValue) == 0x000028, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetAbilityTextDataCollection_ReturnValue) == 0x000050, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetAbilityTextDataCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_FindAbilityMaster_bIsValid) == 0x0000C8, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_FindAbilityMaster_AbilityMaster) == 0x0000D0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000118, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid) == 0x00011C, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig) == 0x000120, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_ComvertAddElementResistRate_ReturnValue) == 0x000158, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_ComvertAddElementResistRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_FTrunc_ReturnValue) == 0x00015C, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000160, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1) == 0x000161, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1) == 0x000168, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Create_ReturnValue) == 0x0001A0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0001A8, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetIsAbilityDBIconTypeAttributeResist_ReturnValue) == 0x0001A9, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetIsAbilityDBIconTypeAttributeResist_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0001AC, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_ComvertAddElementResistRate_ReturnValue_1) == 0x0001B0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_ComvertAddElementResistRate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_FTrunc_ReturnValue_1) == 0x0001B4, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, K2Node_MakeStruct_Margin) == 0x0001B8, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetIsAbilityDBIconTypeAttributeResist_ReturnValue_1) == 0x0001C8, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetIsAbilityDBIconTypeAttributeResist_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Create_ReturnValue_1) == 0x0001D0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0001D8, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, K2Node_MakeStruct_LinearColor) == 0x0001E0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetMasterDataManager_IsValid) == 0x0001F0, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001F8, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x000200, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_BP_GetAbilityEffectMasterData_IsExists) == 0x000208, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_BP_GetAbilityEffectMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_BP_GetAbilityEffectMasterData_ReturnValue) == 0x00020C, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_BP_GetAbilityEffectMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000230, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_ImagineCraftListItem_C_Setup, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000240, "Member 'ProbabilityDisplay_ImagineCraftListItem_C_Setup::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

