#pragma once

 

// Package: FLIB_ShopMenuDetails

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetAbilityName
// 0x03E0 (0x03E0 - 0x0000)
struct FLIB_ShopMenuDetails_C_GetAbilityName final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBRewardItemType                             OriginalRewardType;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9252[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OriginalItemIndex;                                 // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasValidAbility;                                  // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9253[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AbilityName;                                       // 0x0028(0x0018)(Parm, OutParm)
	int32                                         PerkId;                                            // 0x0040(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowRateButton;                                   // 0x0044(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9254[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ParkList;                                          // 0x0048(0x0010)(Edit, BlueprintVisible)
	int32                                         ImagineId;                                         // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9255[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetUnknownAbilityText_ReturnValue;        // 0x0070(0x0018)()
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMasterByRewardData_bIsValid;   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9256[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMasterByRewardData_ImagineMaster; // 0x00A0(0x00B0)()
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9257[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9258[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItemByAllStorage_bOutExist;        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9259[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItemByAllStorage_ReturnValue;      // 0x0188(0x0118)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_925A[0x2];                                     // 0x02A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x02A4(0x0024)(NoDestructor)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02D8(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_925B[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x02F8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_925C[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0318(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x0320(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0330(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0348(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0350(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_3;                    // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0361(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_925D[0x6];                                     // 0x0362(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterImaginePerkTable                CallFunc_FindMasterImaginePerk_ReturnValue;        // 0x0370(0x0048)()
	bool                                          CallFunc_GetAbilityName_Internal_bHasValidAbility; // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_925E[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetAbilityName_Internal_AbilityName;      // 0x03C0(0x0018)()
	int32                                         CallFunc_GetAbilityName_Internal_PerkId;           // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityName_Internal_bShowRateButton;  // 0x03DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_ShopMenuDetails_C_GetAbilityName) == 0x000008, "Wrong alignment on FLIB_ShopMenuDetails_C_GetAbilityName");
static_assert(sizeof(FLIB_ShopMenuDetails_C_GetAbilityName) == 0x0003E0, "Wrong size on FLIB_ShopMenuDetails_C_GetAbilityName");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, UniqueId) == 0x000000, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::UniqueId' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, OriginalRewardType) == 0x000010, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::OriginalRewardType' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, OriginalItemIndex) == 0x000014, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::OriginalItemIndex' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, __WorldContext) == 0x000018, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, bHasValidAbility) == 0x000020, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::bHasValidAbility' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, AbilityName) == 0x000028, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::AbilityName' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, PerkId) == 0x000040, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::PerkId' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, bShowRateButton) == 0x000044, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::bShowRateButton' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, ParkList) == 0x000048, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::ParkList' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, ImagineId) == 0x000058, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::ImagineId' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, K2Node_MakeArray_Array) == 0x000060, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetUnknownAbilityText_ReturnValue) == 0x000070, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetUnknownAbilityText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_Array_Get_Item) == 0x000088, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000090, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_FindImagineMasterByRewardData_bIsValid) == 0x000098, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_FindImagineMasterByRewardData_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_FindImagineMasterByRewardData_ImagineMaster) == 0x0000A0, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_FindImagineMasterByRewardData_ImagineMaster' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetDisplayName_ReturnValue) == 0x000150, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetNetworkDataCache_IsValid) == 0x000160, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000168, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000170, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetOwnItemList_ReturnValue) == 0x000178, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_BP_FindItemByAllStorage_bOutExist) == 0x000180, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_BP_FindItemByAllStorage_bOutExist' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_BP_FindItemByAllStorage_ReturnValue) == 0x000188, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_BP_FindItemByAllStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_IsEmpty_ReturnValue) == 0x0002A0, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x0002A1, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x0002A4, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0002C8, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_Conv_StringToText_ReturnValue) == 0x0002D8, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_IsEmpty_ReturnValue_1) == 0x0002F0, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, K2Node_MakeArray_Array_1) == 0x0002F8, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_IsEmpty_ReturnValue_2) == 0x000308, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_Array_Get_Item_1) == 0x000310, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000318, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, K2Node_MakeArray_Array_2) == 0x000320, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetDisplayName_ReturnValue_1) == 0x000330, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_Array_Get_Item_2) == 0x000340, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000348, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetDisplayName_ReturnValue_2) == 0x000350, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_IsEmpty_ReturnValue_3) == 0x000360, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_IsEmpty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetMasterDataManager_IsValid) == 0x000361, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000368, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_FindMasterImaginePerk_ReturnValue) == 0x000370, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_FindMasterImaginePerk_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetAbilityName_Internal_bHasValidAbility) == 0x0003B8, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetAbilityName_Internal_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetAbilityName_Internal_AbilityName) == 0x0003C0, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetAbilityName_Internal_AbilityName' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetAbilityName_Internal_PerkId) == 0x0003D8, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetAbilityName_Internal_PerkId' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName, CallFunc_GetAbilityName_Internal_bShowRateButton) == 0x0003DC, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName::CallFunc_GetAbilityName_Internal_bShowRateButton' has a wrong offset!");

// Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetAbilityName_Internal
// 0x0140 (0x0140 - 0x0000)
struct FLIB_ShopMenuDetails_C_GetAbilityName_Internal final
{
public:
	struct FMasterImaginePerkTable                MasterImaginePerkTable;                            // 0x0000(0x0048)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasValidAbility;                                  // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_925F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AbilityName;                                       // 0x0058(0x0018)(Parm, OutParm)
	int32                                         PerkId;                                            // 0x0070(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowRateButton;                                   // 0x0074(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9260[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ParkList;                                          // 0x0078(0x0010)(Edit, BlueprintVisible)
	int32                                         ImagineId;                                         // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9261[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x0090(0x0024)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9262[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9263[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0128(0x0018)()
};
static_assert(alignof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal) == 0x000008, "Wrong alignment on FLIB_ShopMenuDetails_C_GetAbilityName_Internal");
static_assert(sizeof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal) == 0x000140, "Wrong size on FLIB_ShopMenuDetails_C_GetAbilityName_Internal");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, MasterImaginePerkTable) == 0x000000, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::MasterImaginePerkTable' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, __WorldContext) == 0x000048, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, bHasValidAbility) == 0x000050, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::bHasValidAbility' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, AbilityName) == 0x000058, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::AbilityName' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, PerkId) == 0x000070, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::PerkId' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, bShowRateButton) == 0x000074, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::bShowRateButton' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, ParkList) == 0x000078, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::ParkList' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, ImagineId) == 0x000088, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::ImagineId' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x00008C, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x000090, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_Array_Length_ReturnValue) == 0x0000B4, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B8, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0000C0, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000E8, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000F0, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000100, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetAbilityName_Internal, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000128, "Member 'FLIB_ShopMenuDetails_C_GetAbilityName_Internal::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetUnknownAbilityText
// 0x0048 (0x0048 - 0x0000)
struct FLIB_ShopMenuDetails_C_GetUnknownAbilityText final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(FLIB_ShopMenuDetails_C_GetUnknownAbilityText) == 0x000008, "Wrong alignment on FLIB_ShopMenuDetails_C_GetUnknownAbilityText");
static_assert(sizeof(FLIB_ShopMenuDetails_C_GetUnknownAbilityText) == 0x000048, "Wrong size on FLIB_ShopMenuDetails_C_GetUnknownAbilityText");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetUnknownAbilityText, __WorldContext) == 0x000000, "Member 'FLIB_ShopMenuDetails_C_GetUnknownAbilityText::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetUnknownAbilityText, ReturnValue) == 0x000008, "Member 'FLIB_ShopMenuDetails_C_GetUnknownAbilityText::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetUnknownAbilityText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000020, "Member 'FLIB_ShopMenuDetails_C_GetUnknownAbilityText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ShopMenuDetails_C_GetUnknownAbilityText, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'FLIB_ShopMenuDetails_C_GetUnknownAbilityText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

