#pragma once

 

// Package: MyCharaMenu_ArmamentChange

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnChangeEquipWeaponProc__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature final
{
public:
	bool                                          ProcStart;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature, ProcStart) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature::ProcStart' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSubMenuChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong size on MyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature, Param_Index) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAchievementChangeButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature final
{
public:
	class UMyCharaMenu_AchievementList_C*         InAchievementList;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature, InAchievementList) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature::InAchievementList' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAcquiredAchievementLoaded__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature, InResult) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSelectAchievementSaved__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature, InResult) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.ExecuteUbergraph_MyCharaMenu_ArmamentChange
// 0x06E8 (0x06E8 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6725[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	struct FCharaEquipInfo                        CallFunc_GetEquipInfo_ReturnValue;                 // 0x0028(0x0010)()
	class FString                                 K2Node_CustomEvent_UniqueId_1;                     // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& UniqueId)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_ComponentBoundEvent_InEquip;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsChangeRequest;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6726[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6727[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsChangeRequest)>         K2Node_CreateDelegate_OutputDelegate_4;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6728[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InUEquipniqueId)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& UniqueId)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMG_CaptureStudio_C*                   CallFunc_Create_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_CustomEvent_EquipType;                      // 0x00C4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6729[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEquip;                        // 0x00D8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInIsExpiredStickerWeapons;     // 0x00D9(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_672A[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds; // 0x00E0(0x0010)(ConstParm, ReferenceParm)
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InExpiredEquipmentData;         // 0x00F0(0x0130)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_672B[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0228(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0238(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_672C[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_672D[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_672E[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_672F[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsThereExpiredEquipment_ReturnValue;      // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6730[0x6];                                     // 0x028A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0290(0x0028)(ConstParm)
	bool                                          CallFunc_GetWeaponItemDataByUniqueId_OutIsValid;   // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6731[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData; // 0x02C0(0x0050)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6732[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0318(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0328(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x0332(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6733[0x5];                                     // 0x0333(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSystemMessageShowingOrStandby_ReturnValue; // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShowExpiredItemNoticeSystemMessage_OutIsMessageShowed; // 0x0345(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6734[0x2];                                     // 0x0346(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCharaCostumePartsToNakedByDeletedCostumeData_OutIsCharaPartsSettedToNaked; // 0x035A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6735[0x1];                                     // 0x035B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDeletedMountData                    CallFunc_Array_Get_Item;                           // 0x0360(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6736[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x03A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6737[0x2];                                     // 0x03A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6738[0x3];                                     // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x03B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6739[0x3];                                     // 0x03B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_1;           // 0x03B8(0x0028)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_673A[0x3];                                     // 0x03E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x03E4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x03F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x03F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_673B[0x2];                                     // 0x03F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0400(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_673C[0x3];                                     // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsChangeRequest)>         K2Node_CreateDelegate_OutputDelegate_10;           // 0x0414(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& InUEquipniqueId)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x0424(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_673D[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0441(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_673E[0x6];                                     // 0x0442(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InMountImagineUniqueId;         // 0x0448(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x0458(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0468(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_673F[0x3];                                     // 0x0471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x0474(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_14;           // 0x0484(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x0494(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6740[0x3];                                     // 0x0495(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_1;            // 0x0498(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6741[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x04A8(0x0118)(ConstParm)
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x05C0(0x0060)(HasGetValueTypeHash)
	class ABP_CaptureStudioBase_C*                K2Node_CustomEvent_InConstructedCaptureStudio;     // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6742[0x3];                                     // 0x0629(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x062C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x063C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x063D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6743[0x2];                                     // 0x063E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0640(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6744[0x4];                                     // 0x0644(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDecayedWeaponData                   CallFunc_Array_Get_Item_1;                         // 0x0648(0x0038)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0681(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6745[0x2];                                     // 0x0682(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0684(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0688(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x068C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6746[0x3];                                     // 0x068D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0690(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0698(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6747[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_2;            // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6748[0x3];                                     // 0x06B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemTypeNum_ReturnValue;               // 0x06B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x06B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6749[0x3];                                     // 0x06B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio)> K2Node_CreateDelegate_OutputDelegate_16;           // 0x06BC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x06CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x06CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x06CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x06CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio)> K2Node_CreateDelegate_OutputDelegate_17;           // 0x06D0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x06E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange) == 0x000008, "Wrong alignment on MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange) == 0x0006E8, "Wrong size on MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, EntryPoint) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, Temp_bool_True_if_break_was_hit_Variable) == 0x000004, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetEquipInfo_ReturnValue) == 0x000028, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetEquipInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_UniqueId_1) == 0x000038, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_UniqueId_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_ComponentBoundEvent_InEquip) == 0x000058, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_ComponentBoundEvent_InEquip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_IsChangeRequest) == 0x000068, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_IsChangeRequest' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Not_PreBool_ReturnValue_1) == 0x000069, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue) == 0x00006A, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_3) == 0x00006C, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_1) == 0x00007C, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_4) == 0x000080, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_2) == 0x000090, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_3) == 0x000091, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_5) == 0x000094, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000A4, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_4) == 0x0000B4, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_5) == 0x0000B5, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsVisible_ReturnValue) == 0x0000B6, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000B7, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Create_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_RetCode) == 0x0000C0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_EquipType) == 0x0000C4, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_EquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_UniqueId) == 0x0000C8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_IsEquip) == 0x0000D8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_IsEquip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_bInIsExpiredStickerWeapons) == 0x0000D9, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds) == 0x0000E0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_InExpiredEquipmentData) == 0x0000F0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_InExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000220, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetSBRetMessage_ReturnValue) == 0x000228, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Conv_StringToText_ReturnValue) == 0x000238, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000250, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetEquipmentBag_ReturnValue) == 0x000258, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_6) == 0x000260, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Array_Length_ReturnValue) == 0x000264, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Greater_IntInt_ReturnValue) == 0x000268, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, Temp_int_Loop_Counter_Variable) == 0x00026C, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetSBPlayerState_ReturnValue) == 0x000270, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Add_IntInt_ReturnValue) == 0x000278, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_7) == 0x00027C, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000280, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_8) == 0x000288, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsThereExpiredEquipment_ReturnValue) == 0x000289, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsThereExpiredEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000290, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetWeaponItemDataByUniqueId_OutIsValid) == 0x0002B8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetWeaponItemDataByUniqueId_OutIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData) == 0x0002C0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Array_Length_ReturnValue_1) == 0x000310, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000314, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_7) == 0x000318, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000328, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Not_PreBool_ReturnValue_3) == 0x000330, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_BooleanOR_ReturnValue) == 0x000331, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetSystemMessageManager_IsValid) == 0x000332, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetSystemMessageManager_ReturnValue) == 0x000338, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, Temp_int_Array_Index_Variable) == 0x000340, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsSystemMessageShowingOrStandby_ReturnValue) == 0x000344, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsSystemMessageShowingOrStandby_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_ShowExpiredItemNoticeSystemMessage_OutIsMessageShowed) == 0x000345, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_ShowExpiredItemNoticeSystemMessage_OutIsMessageShowed' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000348, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_DynamicCast_AsSBCreation_Character) == 0x000350, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_DynamicCast_bSuccess) == 0x000358, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_9) == 0x000359, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_SetCharaCostumePartsToNakedByDeletedCostumeData_OutIsCharaPartsSettedToNaked) == 0x00035A, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_SetCharaCostumePartsToNakedByDeletedCostumeData_OutIsCharaPartsSettedToNaked' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Array_Length_ReturnValue_2) == 0x00035C, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Array_Get_Item) == 0x000360, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Array_Length_ReturnValue_3) == 0x000398, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Less_IntInt_ReturnValue) == 0x00039C, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Array_Length_ReturnValue_4) == 0x0003A0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_BooleanAND_ReturnValue) == 0x0003A4, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0003A5, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, Temp_int_Loop_Counter_Variable_1) == 0x0003A8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Less_IntInt_ReturnValue_1) == 0x0003AC, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Add_IntInt_ReturnValue_1) == 0x0003B0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0003B4, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetEquipItemInfo_ReturnValue_1) == 0x0003B8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetEquipItemInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Not_PreBool_ReturnValue_4) == 0x0003E0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_8) == 0x0003E4, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_10) == 0x0003F4, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_11) == 0x0003F5, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetSBPlayerController_ReturnValue) == 0x0003F8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_9) == 0x000400, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_12) == 0x000410, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_10) == 0x000414, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_11) == 0x000424, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000438, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_13) == 0x000440, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000441, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_InMountImagineUniqueId) == 0x000448, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_InMountImagineUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_12) == 0x000458, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000468, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_14) == 0x000470, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_13) == 0x000474, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_14) == 0x000484, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_15) == 0x000494, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetEquipmentBag_ReturnValue_1) == 0x000498, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetEquipmentBag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0004A0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0004A8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_MakeStruct_InventoryItemData) == 0x0005C0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CustomEvent_InConstructedCaptureStudio) == 0x000620, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CustomEvent_InConstructedCaptureStudio' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Not_PreBool_ReturnValue_5) == 0x000628, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_15) == 0x00062C, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_16) == 0x00063C, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_17) == 0x00063D, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, Temp_int_Array_Index_Variable_1) == 0x000640, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Array_Get_Item_1) == 0x000648, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000680, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_MakeLiteralByte_ReturnValue) == 0x000681, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_PlaySE_ReturnValue) == 0x000684, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000688, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00068C, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_PlayAnimation_ReturnValue) == 0x000690, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_AddChildToCanvas_ReturnValue) == 0x000698, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_18) == 0x0006A0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetEquipmentBag_ReturnValue_2) == 0x0006A8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetEquipmentBag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_19) == 0x0006B0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_GetItemTypeNum_ReturnValue) == 0x0006B4, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_GetItemTypeNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Greater_IntInt_ReturnValue_3) == 0x0006B8, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_16) == 0x0006BC, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, Temp_bool_True_if_break_was_hit_Variable_1) == 0x0006CC, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_20) == 0x0006CD, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_Not_PreBool_ReturnValue_6) == 0x0006CE, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_BooleanAND_ReturnValue_1) == 0x0006CF, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, K2Node_CreateDelegate_OutputDelegate_17) == 0x0006D0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange, CallFunc_IsValid_ReturnValue_21) == 0x0006E0, "Member 'MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnCaptureStudioConstructed
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed final
{
public:
	class ABP_CaptureStudioBase_C*                InConstructedCaptureStudio;                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed) == 0x000008, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed) == 0x000008, "Wrong size on MyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed, InConstructedCaptureStudio) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed::InConstructedCaptureStudio' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.LoadMountImagineModel
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_LoadMountImagineModel final
{
public:
	class FString                                 InMountImagineUniqueId;                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_LoadMountImagineModel) == 0x000008, "Wrong alignment on MyCharaMenu_ArmamentChange_C_LoadMountImagineModel");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_LoadMountImagineModel) == 0x000010, "Wrong size on MyCharaMenu_ArmamentChange_C_LoadMountImagineModel");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_LoadMountImagineModel, InMountImagineUniqueId) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_LoadMountImagineModel::InMountImagineUniqueId' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSaveImagineEquipDelegate
// 0x0160 (0x0160 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             EquipType;                                         // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_674A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsEquip;                                           // 0x0018(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInIsExpiredStickerWeapons;                        // 0x0019(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_674B[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InExpiredStickerWeaponUniqueIds;                   // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBExpiredEquipmentData                InExpiredEquipmentData;                            // 0x0030(0x0130)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate) == 0x000008, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate) == 0x000160, "Wrong size on MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate, RetCode) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate::RetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate, EquipType) == 0x000004, "Member 'MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate::EquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate, UniqueId) == 0x000008, "Member 'MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate::UniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate, IsEquip) == 0x000018, "Member 'MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate::IsEquip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate, bInIsExpiredStickerWeapons) == 0x000019, "Member 'MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate::bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate, InExpiredStickerWeaponUniqueIds) == 0x000020, "Member 'MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate::InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate, InExpiredEquipmentData) == 0x000030, "Member 'MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate::InExpiredEquipmentData' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineHideWindowFin
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin final
{
public:
	bool                                          IsChangeRequest;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin) == 0x000001, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin) == 0x000001, "Wrong size on MyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin, IsChangeRequest) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin::IsChangeRequest' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeClick
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick final
{
public:
	class FString                                 InEquip;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick) == 0x000008, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick) == 0x000010, "Wrong size on MyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick, InEquip) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick::InEquip' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeRequest
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest) == 0x000008, "Wrong alignment on MyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest) == 0x000010, "Wrong size on MyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest, UniqueId) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest::UniqueId' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupEquipMountImagine
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_SetupEquipMountImagine final
{
public:
	bool                                          TmpIsSkipHidden;                                   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_SetupEquipMountImagine) == 0x000001, "Wrong alignment on MyCharaMenu_ArmamentChange_C_SetupEquipMountImagine");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_SetupEquipMountImagine) == 0x000002, "Wrong size on MyCharaMenu_ArmamentChange_C_SetupEquipMountImagine");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupEquipMountImagine, TmpIsSkipHidden) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_SetupEquipMountImagine::TmpIsSkipHidden' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupEquipMountImagine, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MyCharaMenu_ArmamentChange_C_SetupEquipMountImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.CheckIfWeaponDecayed
// 0x00A0 (0x00A0 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBDecayedWeaponData>           InDecayedWeaponDatas;                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          OutIsDecayed;                                      // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_674C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBDecayedWeaponData>           TmpDecayedWeaponDatas;                             // 0x0028(0x0010)(Edit, BlueprintVisible)
	class FString                                 TmpWeaponUniqueId;                                 // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_674D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDecayedWeaponData                   CallFunc_Array_Get_Item;                           // 0x0060(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed) == 0x000008, "Wrong alignment on MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed) == 0x0000A0, "Wrong size on MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, InWeaponUniqueId) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, InDecayedWeaponDatas) == 0x000010, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::InDecayedWeaponDatas' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, OutIsDecayed) == 0x000020, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::OutIsDecayed' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, TmpDecayedWeaponDatas) == 0x000028, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::TmpDecayedWeaponDatas' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, TmpWeaponUniqueId) == 0x000038, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::TmpWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, Temp_int_Array_Index_Variable) == 0x000048, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, CallFunc_Array_Get_Item) == 0x000060, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00009D, "Member 'MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupMountImagineModel
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_SetupMountImagineModel final
{
public:
	class FString                                 InMountImagineUniqueId;                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          LocalIsMountImagineNotEquipped;                    // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_674E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalMountImagineUniqueId;                         // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel) == 0x000008, "Wrong alignment on MyCharaMenu_ArmamentChange_C_SetupMountImagineModel");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel) == 0x000038, "Wrong size on MyCharaMenu_ArmamentChange_C_SetupMountImagineModel");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, InMountImagineUniqueId) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::InMountImagineUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, LocalIsMountImagineNotEquipped) == 0x000010, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::LocalIsMountImagineNotEquipped' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, LocalMountImagineUniqueId) == 0x000018, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::LocalMountImagineUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, Temp_byte_Variable) == 0x000028, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, Temp_byte_Variable_1) == 0x000029, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, Temp_bool_Variable) == 0x00002A, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, Temp_byte_Variable_2) == 0x00002B, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, Temp_byte_Variable_3) == 0x00002C, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, Temp_bool_Variable_1) == 0x00002D, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, CallFunc_Not_PreBool_ReturnValue) == 0x00002E, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, CallFunc_Not_PreBool_ReturnValue_1) == 0x00002F, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000031, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, K2Node_Select_Default) == 0x000032, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetupMountImagineModel, K2Node_Select_Default_1) == 0x000033, "Member 'MyCharaMenu_ArmamentChange_C_SetupMountImagineModel::K2Node_Select_Default_1' has a wrong offset!");

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetCaptureStudioVisibility
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility");
static_assert(sizeof(MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility) == 0x000002, "Wrong size on MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

