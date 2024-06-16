#pragma once

 

// Package: DhcBattleTopWeaponInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.ExecuteUbergraph_DhcBattleTopWeaponInfo
// 0x0008 (0x0008 - 0x0000)
struct DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo) == 0x000004, "Wrong alignment on DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo");
static_assert(sizeof(DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo) == 0x000008, "Wrong size on DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo, EntryPoint) == 0x000000, "Member 'DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo, K2Node_Event_IsDesignTime) == 0x000005, "Member 'DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleTopWeaponInfo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopWeaponInfo_C_PreConstruct) == 0x000001, "Wrong alignment on DhcBattleTopWeaponInfo_C_PreConstruct");
static_assert(sizeof(DhcBattleTopWeaponInfo_C_PreConstruct) == 0x000001, "Wrong size on DhcBattleTopWeaponInfo_C_PreConstruct");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DhcBattleTopWeaponInfo_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Setup
// 0x0800 (0x0800 - 0x0000)
struct DhcBattleTopWeaponInfo_C_Setup final
{
public:
	struct FSBDhcBattlePlayerEquipWeaponInfo      InEquipWeaponInfo;                                 // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 LocalWeaponUniqueId;                               // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalWeaponId;                                     // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62B4[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalStackBTypeId;                                 // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBCharacterWeaponPerkData>     LocalPerkData;                                     // 0x0068(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalPerkUnlockNum;                                // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBMax;                                    // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBNum;                                    // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSpecialPerkValue;                             // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSpecialPerkId;                                // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62B5[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   LocalStackBWeaponParam;                            // 0x0090(0x0030)(Edit, BlueprintVisible)
	bool                                          LocalWeaponAPStackB;                               // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62B6[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalAttributePower;                               // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalWeaponAP;                                     // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           LocalStackBEnableType;                             // 0x00CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62B7[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       LocalAlertIconCanvasSlot;                          // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsAlertIconOn;                                // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  LocalClassType;                                    // 0x00D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62B8[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalLevel;                                        // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalSetupByCurrEquip;                             // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62B9[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      LocalWeaponData;                                   // 0x00E8(0x0050)(Edit, BlueprintVisible)
	class FText                                   LocalSPEffectValue;                                // 0x0138(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalSPEffectName;                                 // 0x0150(0x0018)(Edit, BlueprintVisible)
	struct FSBWeaponMasterData                    LocalWeaponMaster;                                 // 0x0168(0x00B0)(Edit, BlueprintVisible)
	class USBWeaponManager*                       LocalWeaponManager;                                // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0220(0x0118)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0348(0x0018)()
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0370(0x0018)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0398(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x03B0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62BA[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x03D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x03E0(0x0018)()
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62BB[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0400(0x00B0)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62BC[0x7];                                     // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetStackBMax_ReturnValue;              // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBWeaponParamByWeaponId_IsValid;   // 0x04C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62BD[0x3];                                     // 0x04C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue; // 0x04C8(0x0030)(ConstParm)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync;       // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1;     // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2;     // 0x04FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x04FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x04FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62BE[0x3];                                     // 0x04FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0500(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0510(0x0018)()
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0528(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0531(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0532(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62BF[0x5];                                     // 0x0533(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0538(0x0118)(ConstParm)
	class FString                                 Temp_string_Variable;                              // 0x0650(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0660(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0670(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62C0[0x7];                                     // 0x0671(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0678(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName_1;       // 0x0688(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue_1;      // 0x0698(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x06B0(0x0018)()
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62C1[0x7];                                     // 0x06C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x06D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x06E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x06E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x06E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62C2[0x5];                                     // 0x06E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x06E8(0x0118)(ConstParm)
};
static_assert(alignof(DhcBattleTopWeaponInfo_C_Setup) == 0x000008, "Wrong alignment on DhcBattleTopWeaponInfo_C_Setup");
static_assert(sizeof(DhcBattleTopWeaponInfo_C_Setup) == 0x000800, "Wrong size on DhcBattleTopWeaponInfo_C_Setup");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, InEquipWeaponInfo) == 0x000000, "Member 'DhcBattleTopWeaponInfo_C_Setup::InEquipWeaponInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalWeaponUniqueId) == 0x000040, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalWeaponId) == 0x000050, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalWeaponId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalStackBTypeId) == 0x000058, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalStackBTypeId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalPerkData) == 0x000068, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalPerkData' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalPerkUnlockNum) == 0x000078, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalPerkUnlockNum' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalStackBMax) == 0x00007C, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalStackBMax' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalStackBNum) == 0x000080, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalSpecialPerkValue) == 0x000084, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalSpecialPerkValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalSpecialPerkId) == 0x000088, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalSpecialPerkId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalStackBWeaponParam) == 0x000090, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalStackBWeaponParam' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalWeaponAPStackB) == 0x0000C0, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalWeaponAPStackB' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalAttributePower) == 0x0000C4, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalAttributePower' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalWeaponAP) == 0x0000C8, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalWeaponAP' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalStackBEnableType) == 0x0000CC, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalStackBEnableType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalAlertIconCanvasSlot) == 0x0000D0, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalAlertIconCanvasSlot' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalIsAlertIconOn) == 0x0000D8, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalIsAlertIconOn' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalClassType) == 0x0000D9, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalLevel) == 0x0000DC, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalLevel' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalSetupByCurrEquip) == 0x0000E0, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalSetupByCurrEquip' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalWeaponData) == 0x0000E8, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalWeaponData' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalSPEffectValue) == 0x000138, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalSPEffectValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalSPEffectName) == 0x000150, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalSPEffectName' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalWeaponMaster) == 0x000168, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalWeaponMaster' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, LocalWeaponManager) == 0x000218, "Member 'DhcBattleTopWeaponInfo_C_Setup::LocalWeaponManager' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, K2Node_MakeStruct_OwnItemInfo) == 0x000220, "Member 'DhcBattleTopWeaponInfo_C_Setup::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_IntToString_ReturnValue) == 0x000338, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000348, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_SetSpecialEffectText_SpecialName) == 0x000360, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000370, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetWeaponText_ReturnValue) == 0x000388, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000398, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0003B0, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0003C8, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0003D0, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0003E0, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_FindWeaponMaster_bIsValid) == 0x0003F8, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000400, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetMasterDataManager_IsValid) == 0x0004B0, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetMasterDataManager_ReturnValue) == 0x0004B8, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_BP_GetStackBMax_ReturnValue) == 0x0004C0, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_BP_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetStackBWeaponParamByWeaponId_IsValid) == 0x0004C4, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetStackBWeaponParamByWeaponId_IsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue) == 0x0004C8, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync) == 0x0004F8, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1) == 0x0004F9, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2) == 0x0004FA, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Not_PreBool_ReturnValue) == 0x0004FB, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x0004FC, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000500, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000510, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetCharacterStorage_ReturnValue) == 0x000528, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000530, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Not_PreBool_ReturnValue_1) == 0x000531, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000532, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000538, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, Temp_string_Variable) == 0x000650, "Member 'DhcBattleTopWeaponInfo_C_Setup::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_NameToString_ReturnValue) == 0x000660, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, Temp_bool_Variable) == 0x000670, "Member 'DhcBattleTopWeaponInfo_C_Setup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, K2Node_Select_Default) == 0x000678, "Member 'DhcBattleTopWeaponInfo_C_Setup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_SetSpecialEffectText_SpecialName_1) == 0x000688, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_SetSpecialEffectText_SpecialName_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_SetSpecialEffectText_SpecialValue_1) == 0x000698, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_SetSpecialEffectText_SpecialValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0006B0, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetWeaponManager_IsValid) == 0x0006C8, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetWeaponManager_ReturnValue) == 0x0006D0, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_GetEquipmentBag_ReturnValue) == 0x0006D8, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x0006E0, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0006E1, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x0006E2, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Setup, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x0006E8, "Member 'DhcBattleTopWeaponInfo_C_Setup::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");

// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetAlertIconVisibility
// 0x0007 (0x0007 - 0x0000)
struct DhcBattleTopWeaponInfo_C_SetAlertIconVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsLost;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopWeaponInfo_C_SetAlertIconVisibility) == 0x000001, "Wrong alignment on DhcBattleTopWeaponInfo_C_SetAlertIconVisibility");
static_assert(sizeof(DhcBattleTopWeaponInfo_C_SetAlertIconVisibility) == 0x000007, "Wrong size on DhcBattleTopWeaponInfo_C_SetAlertIconVisibility");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetAlertIconVisibility, InIsVisible) == 0x000000, "Member 'DhcBattleTopWeaponInfo_C_SetAlertIconVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetAlertIconVisibility, InIsLost) == 0x000001, "Member 'DhcBattleTopWeaponInfo_C_SetAlertIconVisibility::InIsLost' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetAlertIconVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000002, "Member 'DhcBattleTopWeaponInfo_C_SetAlertIconVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetAlertIconVisibility, Temp_bool_Variable) == 0x000003, "Member 'DhcBattleTopWeaponInfo_C_SetAlertIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetAlertIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'DhcBattleTopWeaponInfo_C_SetAlertIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetAlertIconVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'DhcBattleTopWeaponInfo_C_SetAlertIconVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetAlertIconVisibility, K2Node_Select_Default) == 0x000006, "Member 'DhcBattleTopWeaponInfo_C_SetAlertIconVisibility::K2Node_Select_Default' has a wrong offset!");

// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.GetIsWeaponLost
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleTopWeaponInfo_C_GetIsWeaponLost final
{
public:
	bool                                          OutIsLost;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopWeaponInfo_C_GetIsWeaponLost) == 0x000001, "Wrong alignment on DhcBattleTopWeaponInfo_C_GetIsWeaponLost");
static_assert(sizeof(DhcBattleTopWeaponInfo_C_GetIsWeaponLost) == 0x000001, "Wrong size on DhcBattleTopWeaponInfo_C_GetIsWeaponLost");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_GetIsWeaponLost, OutIsLost) == 0x000000, "Member 'DhcBattleTopWeaponInfo_C_GetIsWeaponLost::OutIsLost' has a wrong offset!");

// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetStackBIcon
// 0x0014 (0x0014 - 0x0000)
struct DhcBattleTopWeaponInfo_C_SetStackBIcon final
{
public:
	int32                                         InStackBNum;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStackBMax;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBNum;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStackBIconOneItemBase_Visible;         // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopWeaponInfo_C_SetStackBIcon) == 0x000004, "Wrong alignment on DhcBattleTopWeaponInfo_C_SetStackBIcon");
static_assert(sizeof(DhcBattleTopWeaponInfo_C_SetStackBIcon) == 0x000014, "Wrong size on DhcBattleTopWeaponInfo_C_SetStackBIcon");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetStackBIcon, InStackBNum) == 0x000000, "Member 'DhcBattleTopWeaponInfo_C_SetStackBIcon::InStackBNum' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetStackBIcon, InStackBMax) == 0x000004, "Member 'DhcBattleTopWeaponInfo_C_SetStackBIcon::InStackBMax' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetStackBIcon, LocalStackBNum) == 0x000008, "Member 'DhcBattleTopWeaponInfo_C_SetStackBIcon::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetStackBIcon, CallFunc_MakeLiteralByte_ReturnValue) == 0x00000C, "Member 'DhcBattleTopWeaponInfo_C_SetStackBIcon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetStackBIcon, Temp_bool_Variable) == 0x00000D, "Member 'DhcBattleTopWeaponInfo_C_SetStackBIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetStackBIcon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00000E, "Member 'DhcBattleTopWeaponInfo_C_SetStackBIcon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetStackBIcon, CallFunc_SetStackBIconOneItemBase_Visible) == 0x00000F, "Member 'DhcBattleTopWeaponInfo_C_SetStackBIcon::CallFunc_SetStackBIconOneItemBase_Visible' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetStackBIcon, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'DhcBattleTopWeaponInfo_C_SetStackBIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_SetStackBIcon, K2Node_Select_Default) == 0x000011, "Member 'DhcBattleTopWeaponInfo_C_SetStackBIcon::K2Node_Select_Default' has a wrong offset!");

// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.CreateToolTipWidgetifNeeded
// 0x02E8 (0x02E8 - 0x0000)
struct DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded final
{
public:
	class UCommonIconToolTipContent_Weapon_C*     OutWidget;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      LocalWeaponData;                                   // 0x0008(0x0050)(Edit, BlueprintVisible)
	class FString                                 LocalWeaponUniqueId;                               // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalStorageId;                                    // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalTooltipTypeId;                                // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62C3[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0088(0x00B0)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindWeaponMaster_bIsValid_1;              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62C4[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster_1;          // 0x0150(0x00B0)()
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62C5[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Weapon_C*     CallFunc_Create_ReturnValue;                       // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      CallFunc_GetFindWeaponData_WeaponData;             // 0x0220(0x0050)()
	struct FSBWeaponItemData                      CallFunc_GetFindWeaponData_WeaponData_1;           // 0x0270(0x0050)()
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62C6[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedToolTip_ReturnValue;             // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Weapon_C*     K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Weapon; // 0x02D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded) == 0x000008, "Wrong alignment on DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded");
static_assert(sizeof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded) == 0x0002E8, "Wrong size on DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, OutWidget) == 0x000000, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::OutWidget' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, LocalWeaponData) == 0x000008, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::LocalWeaponData' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, LocalWeaponUniqueId) == 0x000058, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::LocalWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, LocalStorageId) == 0x000068, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::LocalStorageId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, LocalTooltipTypeId) == 0x00006C, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::LocalTooltipTypeId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_NameToString_ReturnValue) == 0x000070, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_FindWeaponMaster_bIsValid) == 0x000080, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000088, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000138, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_FindWeaponMaster_bIsValid_1) == 0x000148, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_FindWeaponMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_FindWeaponMaster_WeaponMaster_1) == 0x000150, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_FindWeaponMaster_WeaponMaster_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_IsValid) == 0x000200, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_ReturnValue) == 0x000208, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_Create_ReturnValue) == 0x000210, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_MakeLiteralInt_ReturnValue) == 0x000218, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_Add_IntInt_ReturnValue) == 0x00021C, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_GetFindWeaponData_WeaponData) == 0x000220, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_GetFindWeaponData_WeaponData' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_GetFindWeaponData_WeaponData_1) == 0x000270, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_GetFindWeaponData_WeaponData_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_IsValid_1) == 0x0002C0, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_ReturnValue_1) == 0x0002C8, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_GetCachedToolTip_ReturnValue) == 0x0002D0, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_GetCachedToolTip_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Weapon) == 0x0002D8, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Weapon' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, K2Node_DynamicCast_bSuccess) == 0x0002E0, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded, CallFunc_IsValid_ReturnValue) == 0x0002E1, "Member 'DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Get_BtnForPadCursorMove_ToolTipWidget_0
// 0x0018 (0x0018 - 0x0000)
struct DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Weapon_C*     CallFunc_CreateTooltipWidgetIfNeeded_OutWidget;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0) == 0x000008, "Wrong alignment on DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0");
static_assert(sizeof(DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0) == 0x000018, "Wrong size on DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0, CallFunc_CreateTooltipWidgetIfNeeded_OutWidget) == 0x000008, "Member 'DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0::CallFunc_CreateTooltipWidgetIfNeeded_OutWidget' has a wrong offset!");
static_assert(offsetof(DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

