#pragma once

 

// Package: CommonIconToolTipContent_Weapon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ExecuteUbergraph_CommonIconToolTipContent_Weapon
// 0x0008 (0x0008 - 0x0000)
struct CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon) == 0x000004, "Wrong alignment on CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon");
static_assert(sizeof(CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon) == 0x000008, "Wrong size on CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon, EntryPoint) == 0x000000, "Member 'CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonIconToolTipContent_Weapon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContent_Weapon_C_PreConstruct) == 0x000001, "Wrong alignment on CommonIconToolTipContent_Weapon_C_PreConstruct");
static_assert(sizeof(CommonIconToolTipContent_Weapon_C_PreConstruct) == 0x000001, "Wrong size on CommonIconToolTipContent_Weapon_C_PreConstruct");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonIconToolTipContent_Weapon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeapon
// 0x0238 (0x0238 - 0x0000)
struct CommonIconToolTipContent_Weapon_C_SetToolTipWeapon final
{
public:
	struct FSBWeaponMasterData                    InWeaponMasterData;                                // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InItemUniqueId;                                    // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageId;                                       // 0x00C0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x00C4(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InForceLevelSyncOff;                               // 0x00C5(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9448[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     LocalPerkList;                                     // 0x00C8(0x0010)(Edit, BlueprintVisible)
	struct FSBWeaponItemData                      LocalWeaponData;                                   // 0x00D8(0x0050)(Edit, BlueprintVisible)
	bool                                          bLocalForceLevelSyncOff;                           // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalIsEffectiveDisplay;                          // 0x0129(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9449[0x2];                                     // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalStorageNumber;                                // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWeaponMasterData                    LocalWeaponMasterData;                             // 0x0130(0x00B0)(Edit, BlueprintVisible)
	struct FSBWeaponItemData                      CallFunc_GetFindWeaponData_WeaponData;             // 0x01E0(0x0050)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Weapon_C_SetToolTipWeapon");
static_assert(sizeof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon) == 0x000238, "Wrong size on CommonIconToolTipContent_Weapon_C_SetToolTipWeapon");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, InWeaponMasterData) == 0x000000, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::InWeaponMasterData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, InItemUniqueId) == 0x0000B0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, InStorageId) == 0x0000C0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::InStorageId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, IsEffectiveDisplay) == 0x0000C4, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, InForceLevelSyncOff) == 0x0000C5, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::InForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, LocalPerkList) == 0x0000C8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::LocalPerkList' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, LocalWeaponData) == 0x0000D8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::LocalWeaponData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, bLocalForceLevelSyncOff) == 0x000128, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::bLocalForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, bLocalIsEffectiveDisplay) == 0x000129, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::bLocalIsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, LocalStorageNumber) == 0x00012C, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::LocalStorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, LocalWeaponMasterData) == 0x000130, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::LocalWeaponMasterData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, CallFunc_GetFindWeaponData_WeaponData) == 0x0001E0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::CallFunc_GetFindWeaponData_WeaponData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x000230, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetLevelSync
// 0x05A0 (0x05A0 - 0x0000)
struct CommonIconToolTipContent_Weapon_C_SetLevelSync final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBClassType                                  LocalWeaponClassType;                              // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalCurrPlayerClassType;                          // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_944A[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalFinalWeaponLevel;                             // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsWeaponInStorage;                            // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_944B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0020(0x0118)(Edit, BlueprintVisible)
	struct FSlateColor                            LocalTextColor;                                    // 0x0138(0x0028)(Edit, BlueprintVisible)
	class FString                                 TmpUniqueId;                                       // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0173(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_944C[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_944D[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_944E[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid_1;               // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_944F[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue_1;           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue; // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9450[0x2];                                     // 0x01B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1; // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9451[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01C0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x01DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9452[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9453[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid;  // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetWeaponClassTypeByUniqueId_OutClassType; // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9454[0x2];                                     // 0x0202(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_1;            // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9455[0x5];                                     // 0x020B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0210(0x0018)()
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9456[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9457[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0238(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync;       // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9458[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1;     // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2;     // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_3;     // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x026B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_4;     // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync_5;     // 0x026D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x026E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x026F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select_Default_1;                           // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9459[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue_1;        // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0282(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_945A[0x5];                                     // 0x0283(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0288(0x0118)(ConstParm)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_945B[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_945C[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_1;            // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_945D[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x03D0(0x00B0)()
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0481(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_945E[0x6];                                     // 0x0482(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0488(0x0118)(ConstParm)
};
static_assert(alignof(CommonIconToolTipContent_Weapon_C_SetLevelSync) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Weapon_C_SetLevelSync");
static_assert(sizeof(CommonIconToolTipContent_Weapon_C_SetLevelSync) == 0x0005A0, "Wrong size on CommonIconToolTipContent_Weapon_C_SetLevelSync");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, InUniqueId) == 0x000000, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, LocalWeaponClassType) == 0x000010, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::LocalWeaponClassType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, LocalCurrPlayerClassType) == 0x000011, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::LocalCurrPlayerClassType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, LocalFinalWeaponLevel) == 0x000014, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::LocalFinalWeaponLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, LocalIsWeaponInStorage) == 0x000018, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::LocalIsWeaponInStorage' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, LocalOwnItemInfo) == 0x000020, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, LocalTextColor) == 0x000138, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::LocalTextColor' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, TmpUniqueId) == 0x000160, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::TmpUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsValid_ReturnValue_1) == 0x000171, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_MakeLiteralByte_ReturnValue) == 0x000172, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000173, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetPlayerController_ReturnValue) == 0x000178, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponManager_IsValid) == 0x000180, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponManager_ReturnValue) == 0x000188, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_MakeLiteralBool_ReturnValue) == 0x000190, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetPlayerController_ReturnValue_1) == 0x000198, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponManager_IsValid_1) == 0x0001A0, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponManager_ReturnValue_1) == 0x0001A8, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue) == 0x0001B0, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsValid_ReturnValue_2) == 0x0001B4, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x0001B5, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1) == 0x0001B8, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsValid_ReturnValue_3) == 0x0001BC, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_Conv_IntToText_ReturnValue) == 0x0001C0, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0001D8, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsValid_ReturnValue_4) == 0x0001D9, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsValid_ReturnValue_5) == 0x0001DA, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001DB, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetEquipmentBag_ReturnValue) == 0x0001E0, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetClassType_ReturnValue) == 0x0001E8, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetCharacterStorage_ReturnValue) == 0x0001F0, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0001F8, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid) == 0x000200, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponClassTypeByUniqueId_OutClassType) == 0x000201, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponClassTypeByUniqueId_OutClassType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x000204, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x000208, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsValid_ReturnValue_6) == 0x000209, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_MakeLiteralBool_ReturnValue_1) == 0x00020A, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_MakeLiteralBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000210, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000228, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, Temp_bool_Variable) == 0x00022C, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetClassLevel_ReturnValue) == 0x000230, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetText_ReturnValue) == 0x000238, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_Conv_TextToString_ReturnValue) == 0x000250, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_ChangeWeaponLevelSync_bIsLevelSync) == 0x000260, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_ChangeWeaponLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_Conv_StringToInt_ReturnValue) == 0x000264, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1) == 0x000268, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2) == 0x000269, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_3) == 0x00026A, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, K2Node_Select_Default) == 0x00026B, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_4) == 0x00026C, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_ChangeWeaponLevelSync_bIsLevelSync_5) == 0x00026D, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_ChangeWeaponLevelSync_bIsLevelSync_5' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, Temp_bool_Variable_1) == 0x00026E, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00026F, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, K2Node_Select_Default_1) == 0x000270, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, Temp_bool_Variable_2) == 0x000274, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetCharacterStorage_ReturnValue_1) == 0x000278, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetCharacterStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, K2Node_Select_Default_2) == 0x000280, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsValid_ReturnValue_7) == 0x000281, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000282, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000288, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetNetworkDataCache_IsValid) == 0x0003A0, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0003A8, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetMasterDataManager_IsValid) == 0x0003B0, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetMasterDataManager_ReturnValue) == 0x0003B8, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetEquipmentBag_ReturnValue_1) == 0x0003C0, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetEquipmentBag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponMasterData_IsExists) == 0x0003C8, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0003D0, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_IsValid_ReturnValue_8) == 0x000480, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000481, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetLevelSync, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000488, "Member 'CommonIconToolTipContent_Weapon_C_SetLevelSync::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetAttributePower
// 0x0020 (0x0020 - 0x0000)
struct CommonIconToolTipContent_Weapon_C_SetAttributePower final
{
public:
	int32                                         InAttributePower;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_945F[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_Weapon_C_SetAttributePower) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Weapon_C_SetAttributePower");
static_assert(sizeof(CommonIconToolTipContent_Weapon_C_SetAttributePower) == 0x000020, "Wrong size on CommonIconToolTipContent_Weapon_C_SetAttributePower");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetAttributePower, InAttributePower) == 0x000000, "Member 'CommonIconToolTipContent_Weapon_C_SetAttributePower::InAttributePower' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetAttributePower, CallFunc_MakeLiteralBool_ReturnValue) == 0x000004, "Member 'CommonIconToolTipContent_Weapon_C_SetAttributePower::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetAttributePower, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'CommonIconToolTipContent_Weapon_C_SetAttributePower::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetAttributePower, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'CommonIconToolTipContent_Weapon_C_SetAttributePower::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ResetToDefaultTextColor
// 0x0090 (0x0090 - 0x0000)
struct CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor final
{
public:
	struct FSlateColor                            LocalTextColor;                                    // 0x0000(0x0028)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9460[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9461[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9462[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9463[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
};
static_assert(alignof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor");
static_assert(sizeof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor) == 0x000090, "Wrong size on CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, LocalTextColor) == 0x000000, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::LocalTextColor' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, Temp_int_Array_Index_Variable) == 0x000028, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, K2Node_MakeArray_Array) == 0x000038, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, CallFunc_Array_Get_Item) == 0x000050, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'CommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetPlayerProfileWeaponData
// 0x0050 (0x0050 - 0x0000)
struct CommonIconToolTipContent_Weapon_C_SetPlayerProfileWeaponData final
{
public:
	struct FSBWeaponItemData                      Param_PlayerProfileWeaponData;                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileWeaponData) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Weapon_C_SetPlayerProfileWeaponData");
static_assert(sizeof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileWeaponData) == 0x000050, "Wrong size on CommonIconToolTipContent_Weapon_C_SetPlayerProfileWeaponData");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileWeaponData, Param_PlayerProfileWeaponData) == 0x000000, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileWeaponData::Param_PlayerProfileWeaponData' has a wrong offset!");

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetPlayerProfileToolTipWeapon
// 0x05B0 (0x05B0 - 0x0000)
struct CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon final
{
public:
	struct FSBWeaponMasterData                    InWeaponMasterData;                                // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InItemUniqueId;                                    // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageId;                                       // 0x00C0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x00C4(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InForceLevelSyncOff;                               // 0x00C5(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalForceLevelSyncOff;                            // 0x00C6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9464[0x1];                                     // 0x00C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   LocalStackBWeaponParam;                            // 0x00C8(0x0030)(Edit, BlueprintVisible)
	int32                                         LocalArrayId;                                      // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9465[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  LocalValueStackBFlagArray;                         // 0x0100(0x0010)(Edit, BlueprintVisible)
	TArray<class UTextBlock*>                     LocalValueTextObjArray;                            // 0x0110(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          LocalAPStackB;                                     // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9466[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalAP;                                           // 0x0124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           LocalStackBEnableType;                             // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9467[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalStackBNum;                                    // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0130(0x0118)(Edit, BlueprintVisible)
	int32                                         StorageNumber;                                     // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsTermLimitVisible;                           // 0x024C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsWeaponAbilityVisible;                       // 0x024D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9468[0x2];                                     // 0x024E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      WeaponData;                                        // 0x0250(0x0050)(Edit, BlueprintVisible)
	struct FSBWeaponMasterData                    WeaponMasterData;                                  // 0x02A0(0x00B0)(Edit, BlueprintVisible)
	int32                                         TmpDescTextId;                                     // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpNameTextId;                                     // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TmpTextTableName;                                  // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0361(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9469[0x6];                                     // 0x0362(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBWeaponParamByWeaponId_IsValid;   // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_946A[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue; // 0x0378(0x0030)(ConstParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item;                           // 0x03AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x03AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_946B[0x1];                                     // 0x03AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_946C[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item_1;                         // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_946D[0x3];                                     // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x03D0(0x0010)(ReferenceParm)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_1;                          // 0x03E0(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStackBEnableColor_OutIsStackBEnableFull; // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x03F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x03F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponManager_IsValid_1;               // 0x03F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_946E[0x3];                                     // 0x03F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue_1;           // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_946F[0x7];                                     // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0418(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9470[0x3];                                     // 0x0431(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0434(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9471[0x3];                                     // 0x0439(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_ItembyWeaponData_Visible; // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0441(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0442(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0443(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_1;            // 0x0445(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0446(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0447(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetSlotInfo_bHasValidAbility;             // 0x044A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x044B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x044C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x044D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x044E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9472[0x1];                                     // 0x044F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0460(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0478(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0490(0x0018)()
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x04B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x04C8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x04E0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x04F8(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue; // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9473[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0540(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0550(0x0018)()
	int32                                         CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue_1; // 0x0568(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9474[0x4];                                     // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0570(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9475[0x4];                                     // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0590(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x05A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon");
static_assert(sizeof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon) == 0x0005B0, "Wrong size on CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, InWeaponMasterData) == 0x000000, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::InWeaponMasterData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, InItemUniqueId) == 0x0000B0, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, InStorageId) == 0x0000C0, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::InStorageId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, IsEffectiveDisplay) == 0x0000C4, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, InForceLevelSyncOff) == 0x0000C5, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::InForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalForceLevelSyncOff) == 0x0000C6, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalStackBWeaponParam) == 0x0000C8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalStackBWeaponParam' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalArrayId) == 0x0000F8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalArrayId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalValueStackBFlagArray) == 0x000100, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalValueStackBFlagArray' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalValueTextObjArray) == 0x000110, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalValueTextObjArray' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalAPStackB) == 0x000120, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalAPStackB' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalAP) == 0x000124, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalAP' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalStackBEnableType) == 0x000128, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalStackBEnableType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalStackBNum) == 0x00012C, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalOwnItemInfo) == 0x000130, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, StorageNumber) == 0x000248, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::StorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalIsTermLimitVisible) == 0x00024C, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalIsTermLimitVisible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, LocalIsWeaponAbilityVisible) == 0x00024D, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::LocalIsWeaponAbilityVisible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, WeaponData) == 0x000250, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::WeaponData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, WeaponMasterData) == 0x0002A0, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::WeaponMasterData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, TmpDescTextId) == 0x000350, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::TmpDescTextId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, TmpNameTextId) == 0x000354, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::TmpNameTextId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, TmpTextTableName) == 0x000358, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::TmpTextTableName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x000360, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetMasterDataManager_IsValid) == 0x000361, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetMasterDataManager_ReturnValue) == 0x000368, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetStackBWeaponParamByWeaponId_IsValid) == 0x000370, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetStackBWeaponParamByWeaponId_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue) == 0x000378, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, Temp_int_Array_Index_Variable) == 0x0003A8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Greater_IntInt_ReturnValue) == 0x0003AC, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Array_Get_Item) == 0x0003AD, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetWeaponManager_IsValid) == 0x0003AE, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetWeaponManager_ReturnValue) == 0x0003B0, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Array_Length_ReturnValue) == 0x0003B8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Array_Get_Item_1) == 0x0003C0, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Array_Length_ReturnValue_1) == 0x0003C8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_IsValid_ReturnValue) == 0x0003CC, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, K2Node_MakeArray_Array) == 0x0003D0, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, K2Node_MakeArray_Array_1) == 0x0003E0, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0003F0, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_SetStackBEnableColor_OutIsStackBEnableFull) == 0x0003F1, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_SetStackBEnableColor_OutIsStackBEnableFull' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x0003F2, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, Temp_bool_Variable) == 0x0003F3, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetWeaponManager_IsValid_1) == 0x0003F4, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetWeaponManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetWeaponManager_ReturnValue_1) == 0x0003F8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetWeaponManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_MakeLiteralBool_ReturnValue) == 0x000400, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000408, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Conv_StringToText_ReturnValue) == 0x000418, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_IsValid_ReturnValue_1) == 0x000430, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, Temp_int_Loop_Counter_Variable) == 0x000434, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x000438, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x00043C, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Set_Stack_BIcon_One_ItembyWeaponData_Visible) == 0x000440, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Set_Stack_BIcon_One_ItembyWeaponData_Visible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, Temp_bool_Variable_1) == 0x000441, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000442, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000443, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_IsValid_ReturnValue_2) == 0x000444, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_MakeLiteralBool_ReturnValue_1) == 0x000445, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_MakeLiteralBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000446, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000447, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000448, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_IsValid_ReturnValue_3) == 0x000449, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_SetSlotInfo_bHasValidAbility) == 0x00044A, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_SetSlotInfo_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00044B, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, K2Node_Select_Default) == 0x00044C, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, K2Node_Select_Default_1) == 0x00044D, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_IsValid_ReturnValue_4) == 0x00044E, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_SetSpecialEffectText_SpecialName) == 0x000450, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000460, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Conv_IntToText_ReturnValue) == 0x000478, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000490, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetClassNameText_ReturnValue) == 0x0004A8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetWeaponText_ReturnValue) == 0x0004B8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0004C8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0004E0, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, K2Node_MakeStruct_FormatArgumentData) == 0x0004F8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue) == 0x000538, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, K2Node_MakeArray_Array_2) == 0x000540, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Format_ReturnValue) == 0x000550, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue_1) == 0x000568, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000570, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000588, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000590, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0005A8, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon, CallFunc_IsValid_ReturnValue_5) == 0x0005A9, "Member 'CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeaponBase
// 0x05E0 (0x05E0 - 0x0000)
struct CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase final
{
public:
	struct FSBWeaponMasterData                    InWeaponMasterData;                                // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InItemUniqueId;                                    // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageId;                                       // 0x00C0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InPerkUnlockedNum;                                 // 0x00C4(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharacterWeaponPerkData>     InPerkList;                                        // 0x00C8(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InUsedPerkSlotNum;                                 // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSpecialPerkId;                                   // 0x00DC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSpecialPerkValue;                                // 0x00E0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStackBNum;                                       // 0x00E4(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsTermLimited;                                   // 0x00E8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9476[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              InExpiryDateTime;                                  // 0x00F0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x00F8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InForceLevelSyncOff;                               // 0x00F9(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9477[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   LocalStackBWeaponParam;                            // 0x0100(0x0030)(Edit, BlueprintVisible)
	int32                                         LocalArrayId;                                      // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9478[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  bLocalValueStackBFlagArray;                        // 0x0138(0x0010)(Edit, BlueprintVisible)
	TArray<class UTextBlock*>                     LocalValueTextObjArray;                            // 0x0148(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          bLocalAPStackB;                                    // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9479[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalAP;                                           // 0x015C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           LocalStackBEnableType;                             // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocalIsWeaponAbilityVisible;                      // 0x0161(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_947A[0x2];                                     // 0x0162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalDescTextId;                                   // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalNameTextId;                                   // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LocalTextTableName;                                // 0x016C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocalForceLevelSyncOff;                           // 0x0174(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalIsEffectiveDisplay;                          // 0x0175(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_947B[0x2];                                     // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LocalExpiryDateTime;                               // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocalIsTermLimited;                               // 0x0180(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_947C[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalStackBMax;                                    // 0x0184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBNum;                                    // 0x0188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSpecialPerkValue;                             // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSpecialPerkId;                                // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalUsedPerkSlotNum;                              // 0x0194(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharacterWeaponPerkData>     LocalPerkList;                                     // 0x0198(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalPerkUnlockedNum;                              // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStorageNumber;                                // 0x01AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWeaponMasterData                    LocalWeaponMasterData;                             // 0x01B0(0x00B0)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_947D[0x5];                                     // 0x0263(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetStackBMax_ReturnValue;              // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0275(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStackBIconOneItemBase_Visible;         // 0x0276(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0277(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_947E[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBWeaponParamByWeaponId_IsValid;   // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_947F[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue; // 0x0290(0x0030)(ConstParm)
	bool                                          Temp_bool_Variable_1;                              // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item;                           // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9480[0x1];                                     // 0x02C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x02D0(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9481[0x3];                                     // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_1;                          // 0x02E8(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9482[0x6];                                     // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9483[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0310(0x0118)(ConstParm)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9484[0x7];                                     // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9485[0x3];                                     // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue; // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponManager_IsValid_1;               // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9486[0x6];                                     // 0x044A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue_1;           // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1; // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0464(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9487[0x3];                                     // 0x0465(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0468(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0480(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9488[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0498(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9489[0x3];                                     // 0x04B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x04B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             CallFunc_Array_Get_Item_1;                         // 0x04B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStackBEnableColor_OutIsStackBEnableFull; // 0x04C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x04C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x04C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_1;            // 0x04C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x04C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x04C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetSlotInfoBase_bHasValidAbility;         // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x04C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x04CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_948A[0x5];                                     // 0x04CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x04D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x04E0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x04F8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0510(0x0018)()
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0528(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0538(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0548(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0560(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0578(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x05B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x05C8(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase");
static_assert(sizeof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase) == 0x0005E0, "Wrong size on CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InWeaponMasterData) == 0x000000, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InWeaponMasterData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InItemUniqueId) == 0x0000B0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InStorageId) == 0x0000C0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InStorageId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InPerkUnlockedNum) == 0x0000C4, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InPerkUnlockedNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InPerkList) == 0x0000C8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InPerkList' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InUsedPerkSlotNum) == 0x0000D8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InUsedPerkSlotNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InSpecialPerkId) == 0x0000DC, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InSpecialPerkId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InSpecialPerkValue) == 0x0000E0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InSpecialPerkValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InStackBNum) == 0x0000E4, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InStackBNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InIsTermLimited) == 0x0000E8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InIsTermLimited' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InExpiryDateTime) == 0x0000F0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InExpiryDateTime' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, IsEffectiveDisplay) == 0x0000F8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, InForceLevelSyncOff) == 0x0000F9, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::InForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalStackBWeaponParam) == 0x000100, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalStackBWeaponParam' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalArrayId) == 0x000130, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalArrayId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, bLocalValueStackBFlagArray) == 0x000138, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::bLocalValueStackBFlagArray' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalValueTextObjArray) == 0x000148, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalValueTextObjArray' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, bLocalAPStackB) == 0x000158, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::bLocalAPStackB' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalAP) == 0x00015C, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalAP' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalStackBEnableType) == 0x000160, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalStackBEnableType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, bLocalIsWeaponAbilityVisible) == 0x000161, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::bLocalIsWeaponAbilityVisible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalDescTextId) == 0x000164, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalDescTextId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalNameTextId) == 0x000168, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalNameTextId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalTextTableName) == 0x00016C, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalTextTableName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, bLocalForceLevelSyncOff) == 0x000174, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::bLocalForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, bLocalIsEffectiveDisplay) == 0x000175, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::bLocalIsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalExpiryDateTime) == 0x000178, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalExpiryDateTime' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, bLocalIsTermLimited) == 0x000180, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::bLocalIsTermLimited' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalStackBMax) == 0x000184, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalStackBMax' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalStackBNum) == 0x000188, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalSpecialPerkValue) == 0x00018C, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalSpecialPerkValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalSpecialPerkId) == 0x000190, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalSpecialPerkId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalUsedPerkSlotNum) == 0x000194, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalUsedPerkSlotNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalPerkList) == 0x000198, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalPerkList' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalPerkUnlockedNum) == 0x0001A8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalPerkUnlockedNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalStorageNumber) == 0x0001AC, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalStorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, LocalWeaponMasterData) == 0x0001B0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::LocalWeaponMasterData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_MakeLiteralByte_ReturnValue) == 0x000260, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, Temp_bool_Variable) == 0x000261, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetMasterDataManager_IsValid) == 0x000262, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetMasterDataManager_ReturnValue) == 0x000268, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_BP_GetStackBMax_ReturnValue) == 0x000270, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_BP_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Greater_IntInt_ReturnValue) == 0x000274, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000275, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_SetStackBIconOneItemBase_Visible) == 0x000276, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_SetStackBIconOneItemBase_Visible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Not_PreBool_ReturnValue) == 0x000277, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetMasterDataManager_IsValid_1) == 0x000278, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000280, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetStackBWeaponParamByWeaponId_IsValid) == 0x000288, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetStackBWeaponParamByWeaponId_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue) == 0x000290, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, Temp_bool_Variable_1) == 0x0002C0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Array_Get_Item) == 0x0002C1, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, Temp_bool_Variable_2) == 0x0002C2, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Array_Length_ReturnValue) == 0x0002C4, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Array_Length_ReturnValue_1) == 0x0002C8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, Temp_int_Loop_Counter_Variable) == 0x0002CC, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, K2Node_MakeArray_Array) == 0x0002D0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Less_IntInt_ReturnValue) == 0x0002E0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Add_IntInt_ReturnValue) == 0x0002E4, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, K2Node_MakeArray_Array_1) == 0x0002E8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0002F8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x0002F9, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetStorage_ReturnValue) == 0x000300, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000308, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000310, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetWeaponManager_IsValid) == 0x000428, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetWeaponManager_ReturnValue) == 0x000430, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetPlayerController_ReturnValue) == 0x000438, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, K2Node_Select_Default) == 0x000440, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue) == 0x000444, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_MakeLiteralBool_ReturnValue) == 0x000448, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetWeaponManager_IsValid_1) == 0x000449, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetWeaponManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetWeaponManager_ReturnValue_1) == 0x000450, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetWeaponManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetPlayerController_ReturnValue_1) == 0x000458, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1) == 0x000460, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000464, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Conv_IntToText_ReturnValue) == 0x000468, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000480, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Less_IntInt_ReturnValue_1) == 0x000490, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Conv_StringToText_ReturnValue) == 0x000498, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_IsValid_ReturnValue) == 0x0004B0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, Temp_int_Array_Index_Variable) == 0x0004B4, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Array_Get_Item_1) == 0x0004B8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0004C0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_SetStackBEnableColor_OutIsStackBEnableFull) == 0x0004C1, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_SetStackBEnableColor_OutIsStackBEnableFull' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_IsValid_ReturnValue_1) == 0x0004C2, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, Temp_bool_Variable_3) == 0x0004C3, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, K2Node_Select_Default_1) == 0x0004C4, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_MakeLiteralBool_ReturnValue_1) == 0x0004C5, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_MakeLiteralBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0004C6, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_IsValid_ReturnValue_2) == 0x0004C7, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_SetSlotInfoBase_bHasValidAbility) == 0x0004C8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_SetSlotInfoBase_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0004C9, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, K2Node_Select_Default_2) == 0x0004CA, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_SetSpecialEffectText_SpecialName) == 0x0004D0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_SetSpecialEffectText_SpecialValue) == 0x0004E0, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0004F8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000510, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetClassNameText_ReturnValue) == 0x000528, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_GetWeaponText_ReturnValue) == 0x000538, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000548, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000560, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, K2Node_MakeStruct_FormatArgumentData) == 0x000578, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, K2Node_MakeArray_Array_2) == 0x0005B8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase, CallFunc_Format_ReturnValue) == 0x0005C8, "Member 'CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase::CallFunc_Format_ReturnValue' has a wrong offset!");

}

