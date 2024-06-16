#pragma once

 

// Package: WeaponInfoForBattleCordeEdit

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"


namespace SDK::Params
{

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.ExecuteUbergraph_WeaponInfoForBattleCordeEdit
// 0x0008 (0x0008 - 0x0000)
struct WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit) == 0x000004, "Wrong alignment on WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit");
static_assert(sizeof(WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit) == 0x000008, "Wrong size on WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit, EntryPoint) == 0x000000, "Member 'WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WeaponInfoForBattleCordeEdit_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponInfoForBattleCordeEdit_C_PreConstruct) == 0x000001, "Wrong alignment on WeaponInfoForBattleCordeEdit_C_PreConstruct");
static_assert(sizeof(WeaponInfoForBattleCordeEdit_C_PreConstruct) == 0x000001, "Wrong size on WeaponInfoForBattleCordeEdit_C_PreConstruct");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WeaponInfoForBattleCordeEdit_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Setup
// 0x0940 (0x0940 - 0x0000)
struct WeaponInfoForBattleCordeEdit_C_Setup final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8253[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InWeaponUniqueId;                                  // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InSetupByCurrEquip;                                // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassType;                                       // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8254[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   LocalStackBWeaponParam;                            // 0x0020(0x0030)(Edit, BlueprintVisible)
	bool                                          LocalWeaponAPStackB;                               // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8255[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalAttributePower;                               // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalWeaponAP;                                     // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           LocalStackBEnableType;                             // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8256[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       LocalAlertIconCanvasSlot;                          // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsAlertIconOn;                                // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  LocalClassType;                                    // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8257[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSyncedLevel;                                  // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevel;                                        // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsLevelSync;                                  // 0x0074(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsDecayed;                                    // 0x0075(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalSetupByCurrEquip;                             // 0x0076(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8258[0x1];                                     // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0078(0x0118)(Edit, BlueprintVisible)
	struct FSBWeaponItemData                      LocalWeaponData;                                   // 0x0190(0x0050)(Edit, BlueprintVisible)
	class FText                                   LocalSPEffectValue;                                // 0x01E0(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalSPEffectName;                                 // 0x01F8(0x0018)(Edit, BlueprintVisible)
	struct FSBWeaponMasterData                    LocalWeaponMaster;                                 // 0x0210(0x00B0)(Edit, BlueprintVisible)
	class USBWeaponManager*                       LocalWeaponManager;                                // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8259[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBWeaponParamByWeaponId_IsValid;   // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_825A[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue; // 0x02E0(0x0030)(ConstParm)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync;       // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0312(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSyncByWeaponId_bIsLevelSync; // 0x0313(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_825B[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0328(0x0018)()
	bool                                          CallFunc_SetStackBEnableColor_OutIsStackBEnableFull; // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1;     // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0342(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSyncByWeaponId_bIsLevelSync_1; // 0x0343(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x0345(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_825C[0x2];                                     // 0x0346(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0358(0x0018)()
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0381(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0382(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_825D[0x5];                                     // 0x0383(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByWeaponIDWithLevelSync_ReturnValue; // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ChangeWeaponLevelSyncByWeaponId_bIsLevelSync_2; // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_825E[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x03B0(0x0018)()
	int32                                         CallFunc_GetWeaponLevelStatusByWeaponIDWithLevelSync_ReturnValue_1; // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_825F[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x03D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x03E0(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue; // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8260[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0418(0x0018)()
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x0430(0x0078)(HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x04A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x04B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x04B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2;     // 0x04B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x04B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8261[0x2];                                     // 0x04B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x04B8(0x00B0)()
	class FString                                 Temp_string_Variable;                              // 0x0568(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8262[0x7];                                     // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0580(0x0118)(ConstParm)
	bool                                          Temp_bool_Variable_1;                              // 0x0698(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8263[0x7];                                     // 0x0699(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x06A0(0x0028)(ConstParm)
	class FString                                 K2Node_Select_Default;                             // 0x06C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x06D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      K2Node_MakeStruct_SBWeaponItemData;                // 0x06E8(0x0050)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0738(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8264[0x3];                                     // 0x0739(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x073C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0740(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0741(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0742(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8265[0x1];                                     // 0x0743(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x0744(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0748(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0758(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0770(0x0018)()
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName_1;       // 0x0788(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue_1;      // 0x0798(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x07B0(0x0018)()
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_3;     // 0x07C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_4;     // 0x07C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_5;     // 0x07CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8266[0x5];                                     // 0x07CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_4;           // 0x07D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x07E0(0x0018)()
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x07F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8267[0x7];                                     // 0x07F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0800(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0808(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1; // 0x0810(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8268[0x4];                                     // 0x0814(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0818(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0820(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0821(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0822(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8269[0x5];                                     // 0x0823(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0828(0x0118)(ConstParm)
};
static_assert(alignof(WeaponInfoForBattleCordeEdit_C_Setup) == 0x000008, "Wrong alignment on WeaponInfoForBattleCordeEdit_C_Setup");
static_assert(sizeof(WeaponInfoForBattleCordeEdit_C_Setup) == 0x000940, "Wrong size on WeaponInfoForBattleCordeEdit_C_Setup");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, InWeaponID) == 0x000000, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::InWeaponID' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, InWeaponUniqueId) == 0x000008, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, InSetupByCurrEquip) == 0x000018, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::InSetupByCurrEquip' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, InClassType) == 0x000019, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::InClassType' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalStackBWeaponParam) == 0x000020, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalStackBWeaponParam' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalWeaponAPStackB) == 0x000050, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalWeaponAPStackB' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalAttributePower) == 0x000054, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalAttributePower' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalWeaponAP) == 0x000058, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalWeaponAP' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalStackBEnableType) == 0x00005C, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalStackBEnableType' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalAlertIconCanvasSlot) == 0x000060, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalAlertIconCanvasSlot' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalIsAlertIconOn) == 0x000068, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalIsAlertIconOn' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalClassType) == 0x000069, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalClassType' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalSyncedLevel) == 0x00006C, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalSyncedLevel' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalLevel) == 0x000070, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalLevel' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalIsLevelSync) == 0x000074, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalIsLevelSync' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalIsDecayed) == 0x000075, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalIsDecayed' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalSetupByCurrEquip) == 0x000076, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalSetupByCurrEquip' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalOwnItemInfo) == 0x000078, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalWeaponData) == 0x000190, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalWeaponData' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalSPEffectValue) == 0x0001E0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalSPEffectValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalSPEffectName) == 0x0001F8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalSPEffectName' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalWeaponMaster) == 0x000210, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalWeaponMaster' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, LocalWeaponManager) == 0x0002C0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::LocalWeaponManager' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetStackBNum_ReturnValue) == 0x0002C8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetMasterDataManager_IsValid) == 0x0002CC, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002D0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetStackBWeaponParamByWeaponId_IsValid) == 0x0002D8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetStackBWeaponParamByWeaponId_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue) == 0x0002E0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync) == 0x000310, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000311, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_BooleanAND_ReturnValue) == 0x000312, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_ChangeWeaponLevelSyncByWeaponId_bIsLevelSync) == 0x000313, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_ChangeWeaponLevelSyncByWeaponId_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_IntToString_ReturnValue) == 0x000318, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000328, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_SetStackBEnableColor_OutIsStackBEnableFull) == 0x000340, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_SetStackBEnableColor_OutIsStackBEnableFull' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1) == 0x000341, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Not_PreBool_ReturnValue) == 0x000342, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_ChangeWeaponLevelSyncByWeaponId_bIsLevelSync_1) == 0x000343, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_ChangeWeaponLevelSyncByWeaponId_bIsLevelSync_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_BooleanAND_ReturnValue_1) == 0x000344, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x000345, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000348, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000358, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000370, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000378, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x00037C, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x000380, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000381, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Not_PreBool_ReturnValue_1) == 0x000382, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetPlayerController_ReturnValue) == 0x000388, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetPlayerController_ReturnValue_1) == 0x000390, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetWeaponLevelStatusByWeaponIDWithLevelSync_ReturnValue) == 0x000398, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetWeaponLevelStatusByWeaponIDWithLevelSync_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_ChangeWeaponLevelSyncByWeaponId_bIsLevelSync_2) == 0x00039C, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_ChangeWeaponLevelSyncByWeaponId_bIsLevelSync_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_IntToString_ReturnValue_2) == 0x0003A0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0003B0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetWeaponLevelStatusByWeaponIDWithLevelSync_ReturnValue_1) == 0x0003C8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetWeaponLevelStatusByWeaponIDWithLevelSync_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_IntToString_ReturnValue_3) == 0x0003D0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0003E0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetPlayerController_ReturnValue_2) == 0x0003F8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue) == 0x000400, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetWeaponText_ReturnValue) == 0x000408, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000418, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, K2Node_MakeStruct_ST_ToolTipInfo) == 0x000430, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetCharacterStorage_ReturnValue) == 0x0004A8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x0004B0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Not_PreBool_ReturnValue_2) == 0x0004B1, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Not_PreBool_ReturnValue_3) == 0x0004B2, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, Temp_bool_Variable) == 0x0004B3, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2) == 0x0004B4, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_FindWeaponMaster_bIsValid) == 0x0004B5, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_FindWeaponMaster_WeaponMaster) == 0x0004B8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, Temp_string_Variable) == 0x000568, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000578, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000580, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, Temp_bool_Variable_1) == 0x000698, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetEquipItemInfo_ReturnValue) == 0x0006A0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, K2Node_Select_Default) == 0x0006C8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, K2Node_Select_Default_1) == 0x0006D8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, K2Node_MakeStruct_SBWeaponItemData) == 0x0006E8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::K2Node_MakeStruct_SBWeaponItemData' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000738, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, Temp_int_Variable) == 0x00073C, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000740, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_IsValid_ReturnValue_3) == 0x000741, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, Temp_bool_Variable_2) == 0x000742, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, K2Node_Select_Default_2) == 0x000744, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_SetSpecialEffectText_SpecialName) == 0x000748, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000758, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000770, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_SetSpecialEffectText_SpecialName_1) == 0x000788, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_SetSpecialEffectText_SpecialName_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_SetSpecialEffectText_SpecialValue_1) == 0x000798, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_SetSpecialEffectText_SpecialValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0007B0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_3) == 0x0007C8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_3' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_4) == 0x0007C9, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_4' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_5) == 0x0007CA, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_5' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_IntToString_ReturnValue_4) == 0x0007D0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_IntToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0007E0, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetWeaponManager_IsValid) == 0x0007F8, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetWeaponManager_ReturnValue) == 0x000800, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetPlayerController_ReturnValue_3) == 0x000808, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1) == 0x000810, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_GetEquipmentBag_ReturnValue) == 0x000818, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_IsValid_ReturnValue_4) == 0x000820, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000821, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000822, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Setup, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000828, "Member 'WeaponInfoForBattleCordeEdit_C_Setup::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetAlertIconVisibility
// 0x0007 (0x0007 - 0x0000)
struct WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsLost;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility) == 0x000001, "Wrong alignment on WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility");
static_assert(sizeof(WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility) == 0x000007, "Wrong size on WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility, InIsVisible) == 0x000000, "Member 'WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility, InIsLost) == 0x000001, "Member 'WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility::InIsLost' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility, Temp_byte_Variable) == 0x000002, "Member 'WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility, Temp_bool_Variable) == 0x000004, "Member 'WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility, K2Node_Select_Default) == 0x000006, "Member 'WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStorageMode
// 0x0001 (0x0001 - 0x0000)
struct WeaponInfoForBattleCordeEdit_C_SetStorageMode final
{
public:
	bool                                          InIsStorageMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponInfoForBattleCordeEdit_C_SetStorageMode) == 0x000001, "Wrong alignment on WeaponInfoForBattleCordeEdit_C_SetStorageMode");
static_assert(sizeof(WeaponInfoForBattleCordeEdit_C_SetStorageMode) == 0x000001, "Wrong size on WeaponInfoForBattleCordeEdit_C_SetStorageMode");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetStorageMode, InIsStorageMode) == 0x000000, "Member 'WeaponInfoForBattleCordeEdit_C_SetStorageMode::InIsStorageMode' has a wrong offset!");

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.GetIsWeaponLost
// 0x0001 (0x0001 - 0x0000)
struct WeaponInfoForBattleCordeEdit_C_GetIsWeaponLost final
{
public:
	bool                                          OutIsLost;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponInfoForBattleCordeEdit_C_GetIsWeaponLost) == 0x000001, "Wrong alignment on WeaponInfoForBattleCordeEdit_C_GetIsWeaponLost");
static_assert(sizeof(WeaponInfoForBattleCordeEdit_C_GetIsWeaponLost) == 0x000001, "Wrong size on WeaponInfoForBattleCordeEdit_C_GetIsWeaponLost");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_GetIsWeaponLost, OutIsLost) == 0x000000, "Member 'WeaponInfoForBattleCordeEdit_C_GetIsWeaponLost::OutIsLost' has a wrong offset!");

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStackBIconByOwnItemInfo
// 0x0120 (0x0120 - 0x0000)
struct WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo) == 0x000008, "Wrong alignment on WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo");
static_assert(sizeof(WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo) == 0x000120, "Wrong size on WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo, InOwnItemInfo) == 0x000000, "Member 'WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo, Temp_bool_Variable) == 0x000118, "Member 'WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x000119, "Member 'WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00011A, "Member 'WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x00011B, "Member 'WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo, K2Node_Select_Default) == 0x00011C, "Member 'WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x00011D, "Member 'WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.CreateToolTipWidgetifNeeded
// 0x0050 (0x0050 - 0x0000)
struct WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded final
{
public:
	class UCommonIconToolTip_C*                   OutWidget;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalTooltipTypeId;                                // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_826A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_826B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedToolTip_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_826C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTip_C*                   K2Node_DynamicCast_AsCommon_Icon_Tool_Tip;         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_826D[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTip_C*                   CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded) == 0x000008, "Wrong alignment on WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded");
static_assert(sizeof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded) == 0x000050, "Wrong size on WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, OutWidget) == 0x000000, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::OutWidget' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, LocalTooltipTypeId) == 0x000008, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::LocalTooltipTypeId' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_IsValid) == 0x00000C, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_ReturnValue) == 0x000010, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_IsValid_1) == 0x000018, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_ReturnValue_1) == 0x000020, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, CallFunc_GetCachedToolTip_ReturnValue) == 0x000028, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::CallFunc_GetCachedToolTip_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000030, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip) == 0x000038, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded, CallFunc_Create_ReturnValue) == 0x000048, "Member 'WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Get_BtnForPadCursorMove_ToolTipWidget_0
// 0x0020 (0x0020 - 0x0000)
struct WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_826E[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTip_C*                   CallFunc_CreateTooltipWidgetIfNeeded_OutWidget;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0) == 0x000008, "Wrong alignment on WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0");
static_assert(sizeof(WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0) == 0x000020, "Wrong size on WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0, Temp_byte_Variable) == 0x000008, "Member 'WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0, Temp_byte_Variable_1) == 0x000009, "Member 'WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0, Temp_bool_Variable) == 0x00000A, "Member 'WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0, CallFunc_CreateTooltipWidgetIfNeeded_OutWidget) == 0x000010, "Member 'WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0::CallFunc_CreateTooltipWidgetIfNeeded_OutWidget' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0, K2Node_Select_Default) == 0x000019, "Member 'WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0::K2Node_Select_Default' has a wrong offset!");

}

