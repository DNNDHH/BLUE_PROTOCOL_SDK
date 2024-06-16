#pragma once

 

// Package: AdventureCardSwitchTab

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedEquipList__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature final
{
public:
	int32                                         OutItemId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9037[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature");
static_assert(sizeof(AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature) == 0x000018, "Wrong size on AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature");
static_assert(offsetof(AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature, OutItemId) == 0x000000, "Member 'AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature::OutItemId' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature, OutUniqueId) == 0x000008, "Member 'AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnCliked_PhotoLikeBtn__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature final
{
public:
	TArray<int32>                                 OutLikeCountList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                  OutLikeBtnEnableList;                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature");
static_assert(sizeof(AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature) == 0x000020, "Wrong size on AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature");
static_assert(offsetof(AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature, OutLikeCountList) == 0x000000, "Member 'AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature::OutLikeCountList' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature, OutLikeBtnEnableList) == 0x000010, "Member 'AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature::OutLikeBtnEnableList' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.ExecuteUbergraph_AdventureCardSwitchTab
// 0x0070 (0x0070 - 0x0000)
struct AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9038[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_ComponentBoundEvent_outLikeCountList;       // 0x0008(0x0010)(ReferenceParm)
	TArray<bool>                                  K2Node_ComponentBoundEvent_outLikeBtnEnableList;   // 0x0018(0x0010)(ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_ComponentBoundEvent_outItemId;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9039[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab");
static_assert(sizeof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab) == 0x000070, "Wrong size on AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab");
static_assert(offsetof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab, EntryPoint) == 0x000000, "Member 'AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab, K2Node_ComponentBoundEvent_outLikeCountList) == 0x000008, "Member 'AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab::K2Node_ComponentBoundEvent_outLikeCountList' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab, K2Node_ComponentBoundEvent_outLikeBtnEnableList) == 0x000018, "Member 'AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab::K2Node_ComponentBoundEvent_outLikeBtnEnableList' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab, K2Node_ComponentBoundEvent_outItemId) == 0x000058, "Member 'AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab::K2Node_ComponentBoundEvent_outItemId' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab, K2Node_ComponentBoundEvent_outUniqueId) == 0x000060, "Member 'AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab::K2Node_ComponentBoundEvent_outUniqueId' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature final
{
public:
	TArray<int32>                                 OutLikeCountList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                  OutLikeBtnEnableList;                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature");
static_assert(sizeof(AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature) == 0x000020, "Wrong size on AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature");
static_assert(offsetof(AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature, OutLikeCountList) == 0x000000, "Member 'AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature::OutLikeCountList' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature, OutLikeBtnEnableList) == 0x000010, "Member 'AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature::OutLikeBtnEnableList' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature final
{
public:
	int32                                         OutItemId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_903A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature");
static_assert(sizeof(AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature) == 0x000018, "Wrong size on AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature");
static_assert(offsetof(AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature, OutItemId) == 0x000000, "Member 'AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature::OutItemId' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature, OutUniqueId) == 0x000008, "Member 'AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.GetThumbnailTexture
// 0x0020 (0x0020 - 0x0000)
struct AdventureCardSwitchTab_C_GetThumbnailTexture final
{
public:
	class FString                                 URL_Thumbnail;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetThumbnailURL_ReturnValue;              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_GetThumbnailTexture) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_GetThumbnailTexture");
static_assert(sizeof(AdventureCardSwitchTab_C_GetThumbnailTexture) == 0x000020, "Wrong size on AdventureCardSwitchTab_C_GetThumbnailTexture");
static_assert(offsetof(AdventureCardSwitchTab_C_GetThumbnailTexture, URL_Thumbnail) == 0x000000, "Member 'AdventureCardSwitchTab_C_GetThumbnailTexture::URL_Thumbnail' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_GetThumbnailTexture, CallFunc_GetThumbnailURL_ReturnValue) == 0x000010, "Member 'AdventureCardSwitchTab_C_GetThumbnailTexture::CallFunc_GetThumbnailURL_ReturnValue' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetEquipListData
// 0x03F8 (0x03F8 - 0x0000)
struct AdventureCardSwitchTab_C_SetEquipListData final
{
public:
	bool                                          InToolTipsEnable;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_903B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           InMountImagine;                                    // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FOwnItemInfo>                   TmpAccesoriesItemInfoList;                         // 0x0120(0x0010)(Edit, BlueprintVisible)
	TArray<struct FOwnItemInfo>                   TmpUnderWearItemInfoList;                          // 0x0130(0x0010)(Edit, BlueprintVisible)
	TArray<struct FOwnItemInfo>                   TmpCostumeItemInfoList;                            // 0x0140(0x0010)(Edit, BlueprintVisible)
	struct FOwnItemInfo                           TmpWeaponItemInfo;                                 // 0x0150(0x0118)(Edit, BlueprintVisible)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_903C[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x027D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x027E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x027F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_903D[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0288(0x0028)(ConstParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_903E[0x6];                                     // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_903F[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x02D0(0x0118)(ConstParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_SetEquipListData) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_SetEquipListData");
static_assert(sizeof(AdventureCardSwitchTab_C_SetEquipListData) == 0x0003F8, "Wrong size on AdventureCardSwitchTab_C_SetEquipListData");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, InToolTipsEnable) == 0x000000, "Member 'AdventureCardSwitchTab_C_SetEquipListData::InToolTipsEnable' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, InMountImagine) == 0x000008, "Member 'AdventureCardSwitchTab_C_SetEquipListData::InMountImagine' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, TmpAccesoriesItemInfoList) == 0x000120, "Member 'AdventureCardSwitchTab_C_SetEquipListData::TmpAccesoriesItemInfoList' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, TmpUnderWearItemInfoList) == 0x000130, "Member 'AdventureCardSwitchTab_C_SetEquipListData::TmpUnderWearItemInfoList' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, TmpCostumeItemInfoList) == 0x000140, "Member 'AdventureCardSwitchTab_C_SetEquipListData::TmpCostumeItemInfoList' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, TmpWeaponItemInfo) == 0x000150, "Member 'AdventureCardSwitchTab_C_SetEquipListData::TmpWeaponItemInfo' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_MakeLiteralInt_ReturnValue) == 0x000268, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, Temp_int_Variable) == 0x00026C, "Member 'AdventureCardSwitchTab_C_SetEquipListData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, Temp_int_Variable_1) == 0x000270, "Member 'AdventureCardSwitchTab_C_SetEquipListData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_Conv_IntToByte_ReturnValue) == 0x000274, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_Add_IntInt_ReturnValue) == 0x000278, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_GetValidValue_ReturnValue) == 0x00027C, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00027D, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00027E, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00027F, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000280, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, K2Node_SwitchEnum_CmpSuccess) == 0x000284, "Member 'AdventureCardSwitchTab_C_SetEquipListData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000288, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_Less_IntInt_ReturnValue) == 0x0002B0, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_GetNetworkDataCache_IsValid) == 0x0002B1, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0002B8, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_GetEquipmentBag_ReturnValue) == 0x0002C0, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0002C8, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0002D0, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_Array_Add_ReturnValue) == 0x0003E8, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_Array_Add_ReturnValue_1) == 0x0003EC, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetEquipListData, CallFunc_Array_Add_ReturnValue_2) == 0x0003F0, "Member 'AdventureCardSwitchTab_C_SetEquipListData::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoListData
// 0x0078 (0x0078 - 0x0000)
struct AdventureCardSwitchTab_C_SetPhotoListData final
{
public:
	TArray<struct FPlayerProfilePhotoTrimmingInfo> PhotoTrimmingInfoList;                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9040[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfilePhotoTrimmingInfo        CallFunc_Array_Get_Item;                           // 0x0020(0x0050)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9041[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_SetPhotoListData) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_SetPhotoListData");
static_assert(sizeof(AdventureCardSwitchTab_C_SetPhotoListData) == 0x000078, "Wrong size on AdventureCardSwitchTab_C_SetPhotoListData");
static_assert(offsetof(AdventureCardSwitchTab_C_SetPhotoListData, PhotoTrimmingInfoList) == 0x000000, "Member 'AdventureCardSwitchTab_C_SetPhotoListData::PhotoTrimmingInfoList' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetPhotoListData, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'AdventureCardSwitchTab_C_SetPhotoListData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetPhotoListData, Temp_int_Array_Index_Variable) == 0x000014, "Member 'AdventureCardSwitchTab_C_SetPhotoListData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetPhotoListData, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'AdventureCardSwitchTab_C_SetPhotoListData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetPhotoListData, CallFunc_Array_Get_Item) == 0x000020, "Member 'AdventureCardSwitchTab_C_SetPhotoListData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetPhotoListData, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'AdventureCardSwitchTab_C_SetPhotoListData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetPhotoListData, K2Node_SwitchEnum_CmpSuccess) == 0x000071, "Member 'AdventureCardSwitchTab_C_SetPhotoListData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetPhotoListData, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'AdventureCardSwitchTab_C_SetPhotoListData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.IsActivePhoto
// 0x0018 (0x0018 - 0x0000)
struct AdventureCardSwitchTab_C_IsActivePhoto final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9042[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AdventureCardSwitchTab_C_IsActivePhoto) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_IsActivePhoto");
static_assert(sizeof(AdventureCardSwitchTab_C_IsActivePhoto) == 0x000018, "Wrong size on AdventureCardSwitchTab_C_IsActivePhoto");
static_assert(offsetof(AdventureCardSwitchTab_C_IsActivePhoto, ReturnValue) == 0x000000, "Member 'AdventureCardSwitchTab_C_IsActivePhoto::ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_IsActivePhoto, CallFunc_GetActiveWidget_ReturnValue) == 0x000008, "Member 'AdventureCardSwitchTab_C_IsActivePhoto::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_IsActivePhoto, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'AdventureCardSwitchTab_C_IsActivePhoto::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Button Selected
// 0x0008 (0x0008 - 0x0000)
struct AdventureCardSwitchTab_C_Set_Button_Selected final
{
public:
	bool                                          OnPhotoButton;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OnCostumeButton;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OnWeaponButton;                                    // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OnMilitaryRecordButton;                            // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         TmpButtonId;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_Set_Button_Selected) == 0x000004, "Wrong alignment on AdventureCardSwitchTab_C_Set_Button_Selected");
static_assert(sizeof(AdventureCardSwitchTab_C_Set_Button_Selected) == 0x000008, "Wrong size on AdventureCardSwitchTab_C_Set_Button_Selected");
static_assert(offsetof(AdventureCardSwitchTab_C_Set_Button_Selected, OnPhotoButton) == 0x000000, "Member 'AdventureCardSwitchTab_C_Set_Button_Selected::OnPhotoButton' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_Set_Button_Selected, OnCostumeButton) == 0x000001, "Member 'AdventureCardSwitchTab_C_Set_Button_Selected::OnCostumeButton' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_Set_Button_Selected, OnWeaponButton) == 0x000002, "Member 'AdventureCardSwitchTab_C_Set_Button_Selected::OnWeaponButton' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_Set_Button_Selected, OnMilitaryRecordButton) == 0x000003, "Member 'AdventureCardSwitchTab_C_Set_Button_Selected::OnMilitaryRecordButton' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_Set_Button_Selected, TmpButtonId) == 0x000004, "Member 'AdventureCardSwitchTab_C_Set_Button_Selected::TmpButtonId' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Reset
// 0x0003 (0x0003 - 0x0000)
struct AdventureCardSwitchTab_C_Reset final
{
public:
	bool                                          Thumbnail1;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Thumbnail2;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Thumbnail3;                                        // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AdventureCardSwitchTab_C_Reset) == 0x000001, "Wrong alignment on AdventureCardSwitchTab_C_Reset");
static_assert(sizeof(AdventureCardSwitchTab_C_Reset) == 0x000003, "Wrong size on AdventureCardSwitchTab_C_Reset");
static_assert(offsetof(AdventureCardSwitchTab_C_Reset, Thumbnail1) == 0x000000, "Member 'AdventureCardSwitchTab_C_Reset::Thumbnail1' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_Reset, Thumbnail2) == 0x000001, "Member 'AdventureCardSwitchTab_C_Reset::Thumbnail2' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_Reset, Thumbnail3) == 0x000002, "Member 'AdventureCardSwitchTab_C_Reset::Thumbnail3' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto1
// 0x0038 (0x0038 - 0x0000)
struct AdventureCardSwitchTab_C_SetUserPhoto1 final
{
public:
	float                                         InScale;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9043[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 URL;                                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InLikeCount;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsEnableLikeCount;                               // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9044[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPhotoModeImageId;                                // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_SetUserPhoto1) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_SetUserPhoto1");
static_assert(sizeof(AdventureCardSwitchTab_C_SetUserPhoto1) == 0x000038, "Wrong size on AdventureCardSwitchTab_C_SetUserPhoto1");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto1, InScale) == 0x000000, "Member 'AdventureCardSwitchTab_C_SetUserPhoto1::InScale' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto1, InPosition) == 0x000004, "Member 'AdventureCardSwitchTab_C_SetUserPhoto1::InPosition' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto1, URL) == 0x000010, "Member 'AdventureCardSwitchTab_C_SetUserPhoto1::URL' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto1, InLikeCount) == 0x000020, "Member 'AdventureCardSwitchTab_C_SetUserPhoto1::InLikeCount' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto1, InIsEnableLikeCount) == 0x000024, "Member 'AdventureCardSwitchTab_C_SetUserPhoto1::InIsEnableLikeCount' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto1, InPhotoModeImageId) == 0x000028, "Member 'AdventureCardSwitchTab_C_SetUserPhoto1::InPhotoModeImageId' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto2
// 0x0038 (0x0038 - 0x0000)
struct AdventureCardSwitchTab_C_SetUserPhoto2 final
{
public:
	float                                         InScale;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9045[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 URL;                                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InLikeCount;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsLikeEnableCount;                               // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9046[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPhotoModeImageId;                                // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_SetUserPhoto2) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_SetUserPhoto2");
static_assert(sizeof(AdventureCardSwitchTab_C_SetUserPhoto2) == 0x000038, "Wrong size on AdventureCardSwitchTab_C_SetUserPhoto2");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto2, InScale) == 0x000000, "Member 'AdventureCardSwitchTab_C_SetUserPhoto2::InScale' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto2, InPosition) == 0x000004, "Member 'AdventureCardSwitchTab_C_SetUserPhoto2::InPosition' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto2, URL) == 0x000010, "Member 'AdventureCardSwitchTab_C_SetUserPhoto2::URL' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto2, InLikeCount) == 0x000020, "Member 'AdventureCardSwitchTab_C_SetUserPhoto2::InLikeCount' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto2, InIsLikeEnableCount) == 0x000024, "Member 'AdventureCardSwitchTab_C_SetUserPhoto2::InIsLikeEnableCount' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto2, InPhotoModeImageId) == 0x000028, "Member 'AdventureCardSwitchTab_C_SetUserPhoto2::InPhotoModeImageId' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto3
// 0x0038 (0x0038 - 0x0000)
struct AdventureCardSwitchTab_C_SetUserPhoto3 final
{
public:
	float                                         InScale;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9047[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 URL;                                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InLikeCount;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsLikeEnableCount;                               // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9048[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPhotoModeImageId;                                // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_SetUserPhoto3) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_SetUserPhoto3");
static_assert(sizeof(AdventureCardSwitchTab_C_SetUserPhoto3) == 0x000038, "Wrong size on AdventureCardSwitchTab_C_SetUserPhoto3");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto3, InScale) == 0x000000, "Member 'AdventureCardSwitchTab_C_SetUserPhoto3::InScale' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto3, InPosition) == 0x000004, "Member 'AdventureCardSwitchTab_C_SetUserPhoto3::InPosition' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto3, URL) == 0x000010, "Member 'AdventureCardSwitchTab_C_SetUserPhoto3::URL' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto3, InLikeCount) == 0x000020, "Member 'AdventureCardSwitchTab_C_SetUserPhoto3::InLikeCount' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto3, InIsLikeEnableCount) == 0x000024, "Member 'AdventureCardSwitchTab_C_SetUserPhoto3::InIsLikeEnableCount' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetUserPhoto3, InPhotoModeImageId) == 0x000028, "Member 'AdventureCardSwitchTab_C_SetUserPhoto3::InPhotoModeImageId' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoBtnEnable
// 0x0001 (0x0001 - 0x0000)
struct AdventureCardSwitchTab_C_SetPhotoBtnEnable final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AdventureCardSwitchTab_C_SetPhotoBtnEnable) == 0x000001, "Wrong alignment on AdventureCardSwitchTab_C_SetPhotoBtnEnable");
static_assert(sizeof(AdventureCardSwitchTab_C_SetPhotoBtnEnable) == 0x000001, "Wrong size on AdventureCardSwitchTab_C_SetPhotoBtnEnable");
static_assert(offsetof(AdventureCardSwitchTab_C_SetPhotoBtnEnable, bInIsEnabled) == 0x000000, "Member 'AdventureCardSwitchTab_C_SetPhotoBtnEnable::bInIsEnabled' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Init
// 0x0028 (0x0028 - 0x0000)
struct AdventureCardSwitchTab_C_Init final
{
public:
	bool                                          InIsMe;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9049[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPlayerId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InCharacterId;                                     // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventureCardSwitchTab_C_Init) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_Init");
static_assert(sizeof(AdventureCardSwitchTab_C_Init) == 0x000028, "Wrong size on AdventureCardSwitchTab_C_Init");
static_assert(offsetof(AdventureCardSwitchTab_C_Init, InIsMe) == 0x000000, "Member 'AdventureCardSwitchTab_C_Init::InIsMe' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_Init, InPlayerId) == 0x000008, "Member 'AdventureCardSwitchTab_C_Init::InPlayerId' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_Init, InCharacterId) == 0x000018, "Member 'AdventureCardSwitchTab_C_Init::InCharacterId' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Military Record List
// 0x0018 (0x0018 - 0x0000)
struct AdventureCardSwitchTab_C_Set_Military_Record_List final
{
public:
	TArray<struct FMilitaryRecordData>            InMilitaryRecordList;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          InIsMilitalyRecordOpen;                            // 0x0010(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AdventureCardSwitchTab_C_Set_Military_Record_List) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_Set_Military_Record_List");
static_assert(sizeof(AdventureCardSwitchTab_C_Set_Military_Record_List) == 0x000018, "Wrong size on AdventureCardSwitchTab_C_Set_Military_Record_List");
static_assert(offsetof(AdventureCardSwitchTab_C_Set_Military_Record_List, InMilitaryRecordList) == 0x000000, "Member 'AdventureCardSwitchTab_C_Set_Military_Record_List::InMilitaryRecordList' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_Set_Military_Record_List, InIsMilitalyRecordOpen) == 0x000010, "Member 'AdventureCardSwitchTab_C_Set_Military_Record_List::InIsMilitalyRecordOpen' has a wrong offset!");

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetOtherPCEquipData
// 0x07F8 (0x07F8 - 0x0000)
struct AdventureCardSwitchTab_C_SetOtherPCEquipData final
{
public:
	struct FPlayerProfileMenuDetailData           InData;                                            // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPlayerProfileMenuDetailData           LocalData;                                         // 0x03F8(0x03F8)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x07F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x07F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AdventureCardSwitchTab_C_SetOtherPCEquipData) == 0x000008, "Wrong alignment on AdventureCardSwitchTab_C_SetOtherPCEquipData");
static_assert(sizeof(AdventureCardSwitchTab_C_SetOtherPCEquipData) == 0x0007F8, "Wrong size on AdventureCardSwitchTab_C_SetOtherPCEquipData");
static_assert(offsetof(AdventureCardSwitchTab_C_SetOtherPCEquipData, InData) == 0x000000, "Member 'AdventureCardSwitchTab_C_SetOtherPCEquipData::InData' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetOtherPCEquipData, LocalData) == 0x0003F8, "Member 'AdventureCardSwitchTab_C_SetOtherPCEquipData::LocalData' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetOtherPCEquipData, CallFunc_IsValid_ReturnValue) == 0x0007F0, "Member 'AdventureCardSwitchTab_C_SetOtherPCEquipData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventureCardSwitchTab_C_SetOtherPCEquipData, CallFunc_IsValid_ReturnValue_1) == 0x0007F1, "Member 'AdventureCardSwitchTab_C_SetOtherPCEquipData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

