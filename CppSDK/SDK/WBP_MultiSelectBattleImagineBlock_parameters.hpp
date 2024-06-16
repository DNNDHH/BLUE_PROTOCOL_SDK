#pragma once

 

// Package: WBP_MultiSelectBattleImagineBlock

#include "Basic.hpp"

#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     Param_InventoryData;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature, Param_InventoryData) == 0x000000, "Member 'WBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature::Param_InventoryData' has a wrong offset!");

// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock
// 0x0558 (0x0558 - 0x0000)
struct WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54F7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54F8[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54F9[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54FA[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FImagineParameter                      CallFunc_CalcImagineParam_ReturnValue;             // 0x0034(0x006C)(NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00B8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x00D0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x00E8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0100(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x0118(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_6;             // 0x0130(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_7;             // 0x0148(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54FB[0x6];                                     // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_CustomEvent_InventoryItemData;              // 0x0168(0x0060)(ConstParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54FC[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_EffectID;                       // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54FD[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x01D4(0x0024)(NoDestructor)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54FE[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0218(0x0018)()
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54FF[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_8;             // 0x0238(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5500[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0270(0x0018)()
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5501[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0290(0x00B0)()
	class FText                                   K2Node_Select_Default;                             // 0x0340(0x0018)()
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x035A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x035B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x035C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x035D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5502[0x2];                                     // 0x035E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5503[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0370(0x0118)(ConstParm)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x0489(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMasterImagineData_IsExists_1;         // 0x048A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5504[0x5];                                     // 0x048B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue_1;      // 0x0490(0x00B0)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBImagineSkillInfo*              CallFunc_GetImagineSkillInfo_BP_ReturnValue;       // 0x0548(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0551(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0552(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock) == 0x000008, "Wrong alignment on WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock");
static_assert(sizeof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock) == 0x000558, "Wrong size on WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, EntryPoint) == 0x000000, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetPlayerManager_ReturnValue) == 0x000008, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetNetworkDataCache_IsValid) == 0x000010, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000018, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_CalcImagineParam_ReturnValue) == 0x000034, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_CalcImagineParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_IntToText_ReturnValue) == 0x0000A0, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000B8, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0000D0, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0000E8, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000100, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_IntToText_ReturnValue_5) == 0x000118, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_IntToText_ReturnValue_6) == 0x000130, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_IntToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_IntToText_ReturnValue_7) == 0x000148, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_IntToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000160, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_IsValid_ReturnValue) == 0x000161, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, K2Node_CustomEvent_InventoryItemData) == 0x000168, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, Temp_bool_Variable) == 0x0001C8, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, K2Node_CustomEvent_EffectID) == 0x0001CC, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::K2Node_CustomEvent_EffectID' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x0001D0, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x0001D4, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetStorage_ReturnValue) == 0x0001F8, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000200, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_IsItemLock_ReturnValue) == 0x000210, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_StringToText_ReturnValue) == 0x000218, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000230, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_IntToText_ReturnValue_8) == 0x000238, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_IntToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000250, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetMasterDataManager_IsValid_1) == 0x000260, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000268, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000270, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_FindMasterImagineData_IsExists) == 0x000288, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_FindMasterImagineData_ReturnValue) == 0x000290, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, K2Node_Select_Default) == 0x000340, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_IsUsedItem_bUse) == 0x000358, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000359, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, K2Node_Event_IsDesignTime) == 0x00035A, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00035B, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, Temp_bool_Variable_1) == 0x00035C, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, Temp_bool_Variable_2) == 0x00035D, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetStorage_ReturnValue_1) == 0x000360, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000368, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000370, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, K2Node_Select_Default_1) == 0x000488, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x000489, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_FindMasterImagineData_IsExists_1) == 0x00048A, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_FindMasterImagineData_IsExists_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_FindMasterImagineData_ReturnValue_1) == 0x000490, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_FindMasterImagineData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Conv_StringToName_ReturnValue) == 0x000540, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_GetImagineSkillInfo_BP_ReturnValue) == 0x000548, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_GetImagineSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_IsValid_ReturnValue_1) == 0x000550, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000551, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock, K2Node_Select_Default_2) == 0x000552, "Member 'WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_MultiSelectBattleImagineBlock_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MultiSelectBattleImagineBlock_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_MultiSelectBattleImagineBlock_C_PreConstruct");
static_assert(sizeof(WBP_MultiSelectBattleImagineBlock_C_PreConstruct) == 0x000001, "Wrong size on WBP_MultiSelectBattleImagineBlock_C_PreConstruct");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_MultiSelectBattleImagineBlock_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.Set Perk Data
// 0x0004 (0x0004 - 0x0000)
struct WBP_MultiSelectBattleImagineBlock_C_Set_Perk_Data final
{
public:
	int32                                         EffectId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectBattleImagineBlock_C_Set_Perk_Data) == 0x000004, "Wrong alignment on WBP_MultiSelectBattleImagineBlock_C_Set_Perk_Data");
static_assert(sizeof(WBP_MultiSelectBattleImagineBlock_C_Set_Perk_Data) == 0x000004, "Wrong size on WBP_MultiSelectBattleImagineBlock_C_Set_Perk_Data");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_Set_Perk_Data, EffectId) == 0x000000, "Member 'WBP_MultiSelectBattleImagineBlock_C_Set_Perk_Data::EffectId' has a wrong offset!");

// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetOneItem
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectBattleImagineBlock_C_SetOneItem final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectBattleImagineBlock_C_SetOneItem) == 0x000008, "Wrong alignment on WBP_MultiSelectBattleImagineBlock_C_SetOneItem");
static_assert(sizeof(WBP_MultiSelectBattleImagineBlock_C_SetOneItem) == 0x000060, "Wrong size on WBP_MultiSelectBattleImagineBlock_C_SetOneItem");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_SetOneItem, InventoryItemData) == 0x000000, "Member 'WBP_MultiSelectBattleImagineBlock_C_SetOneItem::InventoryItemData' has a wrong offset!");

// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.GetPrice
// 0x0014 (0x0014 - 0x0000)
struct WBP_MultiSelectBattleImagineBlock_C_GetPrice final
{
public:
	int32                                         Price;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5505[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectBattleImagineBlock_C_GetPrice) == 0x000004, "Wrong alignment on WBP_MultiSelectBattleImagineBlock_C_GetPrice");
static_assert(sizeof(WBP_MultiSelectBattleImagineBlock_C_GetPrice) == 0x000014, "Wrong size on WBP_MultiSelectBattleImagineBlock_C_GetPrice");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_GetPrice, Price) == 0x000000, "Member 'WBP_MultiSelectBattleImagineBlock_C_GetPrice::Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000004, "Member 'WBP_MultiSelectBattleImagineBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_GetPrice, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MultiSelectBattleImagineBlock_C_GetPrice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x00000C, "Member 'WBP_MultiSelectBattleImagineBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectBattleImagineBlock_C_GetPrice, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MultiSelectBattleImagineBlock_C_GetPrice::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

}

