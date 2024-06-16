#pragma once

 

// Package: WeaponInfoForBattleSetTop

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.ExecuteUbergraph_WeaponInfoForBattleSetTop
// 0x0010 (0x0010 - 0x0000)
struct WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_822C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_ComponentBoundEvent_SelectItem;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop) == 0x000008, "Wrong alignment on WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop");
static_assert(sizeof(WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop) == 0x000010, "Wrong size on WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop, EntryPoint) == 0x000000, "Member 'WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop, K2Node_ComponentBoundEvent_SelectItem) == 0x000008, "Member 'WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");

// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on WeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature");
static_assert(sizeof(WeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature) == 0x000008, "Wrong size on WeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature, SelectItem) == 0x000000, "Member 'WeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature::SelectItem' has a wrong offset!");

// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.Setup
// 0x0770 (0x0770 - 0x0000)
struct WeaponInfoForBattleSetTop_C_Setup final
{
public:
	struct FSBStackBWeaponParam                   LocalStackBWeaponParam;                            // 0x0000(0x0030)(Edit, BlueprintVisible)
	bool                                          LocalAPStackB;                                     // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStackBEnableType                           LocalStackBEnableType;                             // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_822D[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalAttributePower;                               // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalWeaponAP;                                     // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevel;                                        // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsLevelSync;                                  // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_822E[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0048(0x0118)(Edit, BlueprintVisible)
	struct FSBWeaponItemData                      LocalWeaponData;                                   // 0x0160(0x0050)(Edit, BlueprintVisible)
	class FText                                   LocalSPEffectValue;                                // 0x01B0(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalSPEffectName;                                 // 0x01C8(0x0018)(Edit, BlueprintVisible)
	struct FSBWeaponMasterData                    LocalWeaponMaster;                                 // 0x01E0(0x00B0)(Edit, BlueprintVisible)
	class USBWeaponManager*                       LocalWeaponManager;                                // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_822F[0x3];                                     // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBWeaponParamByWeaponId_IsValid;   // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8230[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue; // 0x02C0(0x0030)(ConstParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02F0(0x0018)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStackBEnableColor_OutIsStackBEnableFull; // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x030A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8231[0x5];                                     // 0x030B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8232[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0328(0x0018)()
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8233[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0348(0x00B0)()
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCommonIcon_IsValid;                    // 0x03FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8234[0x3];                                     // 0x03FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          CallFunc_GetCommonIcon_OutCommonIcon;              // 0x0400(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue; // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8235[0x4];                                     // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0418(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0428(0x0018)()
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x044C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x044D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8236[0x2];                                     // 0x044E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0450(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync;       // 0x04E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8237[0x6];                                     // 0x04EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      K2Node_MakeStruct_SBWeaponItemData;                // 0x04F0(0x0050)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0542(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8238[0x5];                                     // 0x0543(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0548(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0558(0x0018)()
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0570(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0580(0x0018)()
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName_1;       // 0x0598(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue_1;      // 0x05A8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x05C0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x05D8(0x0018)()
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1;     // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2;     // 0x05F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_3;     // 0x05F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_4;     // 0x05F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x05F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8239[0x3];                                     // 0x05F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_5;     // 0x0600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_823A[0x7];                                     // 0x0601(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_823B[0x3];                                     // 0x0611(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1; // 0x0614(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_823C[0x7];                                     // 0x0619(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0620(0x0028)(ConstParm)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0648(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0651(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0652(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_823D[0x5];                                     // 0x0653(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0658(0x0118)(ConstParm)
};
static_assert(alignof(WeaponInfoForBattleSetTop_C_Setup) == 0x000008, "Wrong alignment on WeaponInfoForBattleSetTop_C_Setup");
static_assert(sizeof(WeaponInfoForBattleSetTop_C_Setup) == 0x000770, "Wrong size on WeaponInfoForBattleSetTop_C_Setup");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalStackBWeaponParam) == 0x000000, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalStackBWeaponParam' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalAPStackB) == 0x000030, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalAPStackB' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalStackBEnableType) == 0x000031, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalStackBEnableType' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalAttributePower) == 0x000034, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalAttributePower' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalWeaponAP) == 0x000038, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalWeaponAP' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalLevel) == 0x00003C, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalLevel' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalIsLevelSync) == 0x000040, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalIsLevelSync' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalOwnItemInfo) == 0x000048, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalWeaponData) == 0x000160, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalWeaponData' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalSPEffectValue) == 0x0001B0, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalSPEffectValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalSPEffectName) == 0x0001C8, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalSPEffectName' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalWeaponMaster) == 0x0001E0, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalWeaponMaster' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, LocalWeaponManager) == 0x000290, "Member 'WeaponInfoForBattleSetTop_C_Setup::LocalWeaponManager' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetStackBNum_ReturnValue) == 0x000298, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetMasterDataManager_IsValid) == 0x00029C, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002A0, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Conv_IntToString_ReturnValue) == 0x0002A8, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetStackBWeaponParamByWeaponId_IsValid) == 0x0002B8, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetStackBWeaponParamByWeaponId_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue) == 0x0002C0, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x0002F0, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000308, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_SetStackBEnableColor_OutIsStackBEnableFull) == 0x000309, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_SetStackBEnableColor_OutIsStackBEnableFull' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_BooleanAND_ReturnValue) == 0x00030A, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000310, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x000320, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000328, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_FindWeaponMaster_bIsValid) == 0x000340, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000348, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetClassLevel_ReturnValue) == 0x0003F8, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetCommonIcon_IsValid) == 0x0003FC, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetCommonIcon_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetCommonIcon_OutCommonIcon) == 0x000400, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetCommonIcon_OutCommonIcon' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetPlayerController_ReturnValue) == 0x000408, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue) == 0x000410, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000418, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000428, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000440, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x000448, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x00044C, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_IsValid_ReturnValue) == 0x00044D, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_CreateInventoryData_InventoryData) == 0x000450, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_CreateInventoryData_IsSuccess) == 0x0004E8, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync) == 0x0004E9, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, K2Node_MakeStruct_SBWeaponItemData) == 0x0004F0, "Member 'WeaponInfoForBattleSetTop_C_Setup::K2Node_MakeStruct_SBWeaponItemData' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000540, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000541, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000542, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetWeaponText_ReturnValue) == 0x000548, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000558, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_SetSpecialEffectText_SpecialName) == 0x000570, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000580, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_SetSpecialEffectText_SpecialName_1) == 0x000598, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_SetSpecialEffectText_SpecialName_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_SetSpecialEffectText_SpecialValue_1) == 0x0005A8, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_SetSpecialEffectText_SpecialValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0005C0, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0005D8, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1) == 0x0005F0, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2) == 0x0005F1, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_3) == 0x0005F2, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_3' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_4) == 0x0005F3, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_4' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetWeaponManager_IsValid) == 0x0005F4, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetWeaponManager_ReturnValue) == 0x0005F8, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_5) == 0x000600, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_5' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetPlayerController_ReturnValue_1) == 0x000608, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_Not_PreBool_ReturnValue) == 0x000610, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1) == 0x000614, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_BooleanAND_ReturnValue_1) == 0x000618, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000620, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_GetEquipmentBag_ReturnValue) == 0x000648, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000650, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_IsValid_ReturnValue_3) == 0x000651, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000652, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_Setup, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000658, "Member 'WeaponInfoForBattleSetTop_C_Setup::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");

// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.SetStackBIconByOwnItemInfo
// 0x0128 (0x0128 - 0x0000)
struct WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         LocalStackBNum;                                    // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x011E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x011F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo) == 0x000008, "Wrong alignment on WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo");
static_assert(sizeof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo) == 0x000128, "Wrong size on WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo, InOwnItemInfo) == 0x000000, "Member 'WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo, LocalStackBNum) == 0x000118, "Member 'WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo, Temp_bool_Variable) == 0x00011C, "Member 'WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x00011D, "Member 'WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00011E, "Member 'WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x00011F, "Member 'WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo, K2Node_Select_Default) == 0x000120, "Member 'WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x000121, "Member 'WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

