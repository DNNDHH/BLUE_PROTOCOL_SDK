#pragma once

 

// Package: AestheShop_TicketListItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.OnSelected__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct AestheShop_TicketListItem_C_OnSelected__DelegateSignature final
{
public:
	int32                                         InCourseId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTicketTokenId;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InHoldTicketTokenAmount;                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketListItem_C_OnSelected__DelegateSignature) == 0x000004, "Wrong alignment on AestheShop_TicketListItem_C_OnSelected__DelegateSignature");
static_assert(sizeof(AestheShop_TicketListItem_C_OnSelected__DelegateSignature) == 0x00000C, "Wrong size on AestheShop_TicketListItem_C_OnSelected__DelegateSignature");
static_assert(offsetof(AestheShop_TicketListItem_C_OnSelected__DelegateSignature, InCourseId) == 0x000000, "Member 'AestheShop_TicketListItem_C_OnSelected__DelegateSignature::InCourseId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_OnSelected__DelegateSignature, InTicketTokenId) == 0x000004, "Member 'AestheShop_TicketListItem_C_OnSelected__DelegateSignature::InTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_OnSelected__DelegateSignature, InHoldTicketTokenAmount) == 0x000008, "Member 'AestheShop_TicketListItem_C_OnSelected__DelegateSignature::InHoldTicketTokenAmount' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.ExecuteUbergraph_AestheShop_TicketListItem
// 0x0004 (0x0004 - 0x0000)
struct AestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem) == 0x000004, "Wrong alignment on AestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem");
static_assert(sizeof(AestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem) == 0x000004, "Wrong size on AestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem");
static_assert(offsetof(AestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem, EntryPoint) == 0x000000, "Member 'AestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem::EntryPoint' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetupCourseListItem
// 0x0150 (0x0150 - 0x0000)
struct AestheShop_TicketListItem_C_SetupCourseListItem final
{
public:
	int32                                         InCourseId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InHoldTicketTokenAmount;                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCourseId;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindAestheShopCourseMaster_IsExists;   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B5E[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCourseMasterData          CallFunc_BP_FindAestheShopCourseMaster_ReturnValue; // 0x0018(0x0050)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B5F[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B60[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0080(0x0058)()
	class FString                                 CallFunc_GetAestheShopCourseText_ReturnValue;      // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E8(0x0018)()
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetAestheCourseIconTexture_OutIconTexture; // 0x0128(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketListItem_C_SetupCourseListItem) == 0x000008, "Wrong alignment on AestheShop_TicketListItem_C_SetupCourseListItem");
static_assert(sizeof(AestheShop_TicketListItem_C_SetupCourseListItem) == 0x000150, "Wrong size on AestheShop_TicketListItem_C_SetupCourseListItem");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, InCourseId) == 0x000000, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::InCourseId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, InHoldTicketTokenAmount) == 0x000004, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::InHoldTicketTokenAmount' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, TmpMasterDataManager) == 0x000008, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, TmpCourseId) == 0x000010, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::TmpCourseId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_BP_FindAestheShopCourseMaster_IsExists) == 0x000014, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_BP_FindAestheShopCourseMaster_IsExists' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_BP_FindAestheShopCourseMaster_ReturnValue) == 0x000018, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_BP_FindAestheShopCourseMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_GetMasterDataManager_IsValid) == 0x000068, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_BP_FindMasterToken_bIsValid) == 0x000078, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000080, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_GetAestheShopCourseText_ReturnValue) == 0x0000D8, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_GetAestheShopCourseText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E8, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_GetMasterTokenText_ReturnValue) == 0x000100, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetupCourseListItem, CallFunc_GetAestheCourseIconTexture_OutIconTexture) == 0x000128, "Member 'AestheShop_TicketListItem_C_SetupCourseListItem::CallFunc_GetAestheCourseIconTexture_OutIconTexture' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseIcon
// 0x0030 (0x0030 - 0x0000)
struct AestheShop_TicketListItem_C_SetCourseIcon final
{
public:
	TSoftObjectPtr<class UTexture2D>              InIconTexture;                                     // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_TicketListItem_C_SetCourseIcon) == 0x000008, "Wrong alignment on AestheShop_TicketListItem_C_SetCourseIcon");
static_assert(sizeof(AestheShop_TicketListItem_C_SetCourseIcon) == 0x000030, "Wrong size on AestheShop_TicketListItem_C_SetCourseIcon");
static_assert(offsetof(AestheShop_TicketListItem_C_SetCourseIcon, InIconTexture) == 0x000000, "Member 'AestheShop_TicketListItem_C_SetCourseIcon::InIconTexture' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetCourseIcon, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000028, "Member 'AestheShop_TicketListItem_C_SetCourseIcon::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseName
// 0x0038 (0x0038 - 0x0000)
struct AestheShop_TicketListItem_C_SetCourseName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_TicketListItem_C_SetCourseName) == 0x000008, "Wrong alignment on AestheShop_TicketListItem_C_SetCourseName");
static_assert(sizeof(AestheShop_TicketListItem_C_SetCourseName) == 0x000038, "Wrong size on AestheShop_TicketListItem_C_SetCourseName");
static_assert(offsetof(AestheShop_TicketListItem_C_SetCourseName, InText) == 0x000000, "Member 'AestheShop_TicketListItem_C_SetCourseName::InText' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetCourseName, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'AestheShop_TicketListItem_C_SetCourseName::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetCourseName, CallFunc_NotEqual_TextText_ReturnValue) == 0x000030, "Member 'AestheShop_TicketListItem_C_SetCourseName::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketName
// 0x0038 (0x0038 - 0x0000)
struct AestheShop_TicketListItem_C_SetTicketName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_TicketListItem_C_SetTicketName) == 0x000008, "Wrong alignment on AestheShop_TicketListItem_C_SetTicketName");
static_assert(sizeof(AestheShop_TicketListItem_C_SetTicketName) == 0x000038, "Wrong size on AestheShop_TicketListItem_C_SetTicketName");
static_assert(offsetof(AestheShop_TicketListItem_C_SetTicketName, InText) == 0x000000, "Member 'AestheShop_TicketListItem_C_SetTicketName::InText' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetTicketName, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'AestheShop_TicketListItem_C_SetTicketName::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetTicketName, CallFunc_NotEqual_TextText_ReturnValue) == 0x000030, "Member 'AestheShop_TicketListItem_C_SetTicketName::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketAmount
// 0x0048 (0x0048 - 0x0000)
struct AestheShop_TicketListItem_C_SetTicketAmount final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpTicketAmount;                                   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B61[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0028(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_TicketListItem_C_SetTicketAmount) == 0x000008, "Wrong alignment on AestheShop_TicketListItem_C_SetTicketAmount");
static_assert(sizeof(AestheShop_TicketListItem_C_SetTicketAmount) == 0x000048, "Wrong size on AestheShop_TicketListItem_C_SetTicketAmount");
static_assert(offsetof(AestheShop_TicketListItem_C_SetTicketAmount, InAmount) == 0x000000, "Member 'AestheShop_TicketListItem_C_SetTicketAmount::InAmount' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetTicketAmount, TmpTicketAmount) == 0x000004, "Member 'AestheShop_TicketListItem_C_SetTicketAmount::TmpTicketAmount' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetTicketAmount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'AestheShop_TicketListItem_C_SetTicketAmount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetTicketAmount, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'AestheShop_TicketListItem_C_SetTicketAmount::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetTicketAmount, CallFunc_GetText_ReturnValue) == 0x000028, "Member 'AestheShop_TicketListItem_C_SetTicketAmount::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetTicketAmount, CallFunc_NotEqual_TextText_ReturnValue) == 0x000040, "Member 'AestheShop_TicketListItem_C_SetTicketAmount::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetListItemSelected
// 0x0768 (0x0768 - 0x0000)
struct AestheShop_TicketListItem_C_SetListItemSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B62[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0090(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00B8(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00E0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0168(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x01F0(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0468(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x04F0(0x0278)()
};
static_assert(alignof(AestheShop_TicketListItem_C_SetListItemSelected) == 0x000008, "Wrong alignment on AestheShop_TicketListItem_C_SetListItemSelected");
static_assert(sizeof(AestheShop_TicketListItem_C_SetListItemSelected) == 0x000768, "Wrong size on AestheShop_TicketListItem_C_SetListItemSelected");
static_assert(offsetof(AestheShop_TicketListItem_C_SetListItemSelected, IsSelected) == 0x000000, "Member 'AestheShop_TicketListItem_C_SetListItemSelected::IsSelected' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetListItemSelected, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'AestheShop_TicketListItem_C_SetListItemSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetListItemSelected, K2Node_MakeStruct_SlateColor) == 0x000090, "Member 'AestheShop_TicketListItem_C_SetListItemSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetListItemSelected, K2Node_MakeStruct_SlateColor_1) == 0x0000B8, "Member 'AestheShop_TicketListItem_C_SetListItemSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetListItemSelected, K2Node_MakeStruct_SlateBrush_1) == 0x0000E0, "Member 'AestheShop_TicketListItem_C_SetListItemSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetListItemSelected, K2Node_MakeStruct_SlateBrush_2) == 0x000168, "Member 'AestheShop_TicketListItem_C_SetListItemSelected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetListItemSelected, K2Node_MakeStruct_ButtonStyle) == 0x0001F0, "Member 'AestheShop_TicketListItem_C_SetListItemSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetListItemSelected, K2Node_MakeStruct_SlateBrush_3) == 0x000468, "Member 'AestheShop_TicketListItem_C_SetListItemSelected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketListItem_C_SetListItemSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x0004F0, "Member 'AestheShop_TicketListItem_C_SetListItemSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetTicketTokenId
// 0x0004 (0x0004 - 0x0000)
struct AestheShop_TicketListItem_C_GetTicketTokenId final
{
public:
	int32                                         OutTIcketTokenId;                                  // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketListItem_C_GetTicketTokenId) == 0x000004, "Wrong alignment on AestheShop_TicketListItem_C_GetTicketTokenId");
static_assert(sizeof(AestheShop_TicketListItem_C_GetTicketTokenId) == 0x000004, "Wrong size on AestheShop_TicketListItem_C_GetTicketTokenId");
static_assert(offsetof(AestheShop_TicketListItem_C_GetTicketTokenId, OutTIcketTokenId) == 0x000000, "Member 'AestheShop_TicketListItem_C_GetTicketTokenId::OutTIcketTokenId' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetHoldTicketTokenAmount
// 0x0004 (0x0004 - 0x0000)
struct AestheShop_TicketListItem_C_GetHoldTicketTokenAmount final
{
public:
	int32                                         OutAmount;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketListItem_C_GetHoldTicketTokenAmount) == 0x000004, "Wrong alignment on AestheShop_TicketListItem_C_GetHoldTicketTokenAmount");
static_assert(sizeof(AestheShop_TicketListItem_C_GetHoldTicketTokenAmount) == 0x000004, "Wrong size on AestheShop_TicketListItem_C_GetHoldTicketTokenAmount");
static_assert(offsetof(AestheShop_TicketListItem_C_GetHoldTicketTokenAmount, OutAmount) == 0x000000, "Member 'AestheShop_TicketListItem_C_GetHoldTicketTokenAmount::OutAmount' has a wrong offset!");

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetCourseId
// 0x0004 (0x0004 - 0x0000)
struct AestheShop_TicketListItem_C_GetCourseId final
{
public:
	int32                                         OutCourseId;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketListItem_C_GetCourseId) == 0x000004, "Wrong alignment on AestheShop_TicketListItem_C_GetCourseId");
static_assert(sizeof(AestheShop_TicketListItem_C_GetCourseId) == 0x000004, "Wrong size on AestheShop_TicketListItem_C_GetCourseId");
static_assert(offsetof(AestheShop_TicketListItem_C_GetCourseId, OutCourseId) == 0x000000, "Member 'AestheShop_TicketListItem_C_GetCourseId::OutCourseId' has a wrong offset!");

}

