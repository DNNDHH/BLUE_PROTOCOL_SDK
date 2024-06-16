#pragma once

 

// Package: PictureBook_MakeListItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.ExecuteUbergraph_PictureBook_MakeListItem
// 0x0130 (0x0130 - 0x0000)
struct PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_4;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_5;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_6;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_7;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_8;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_557C[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_557D[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBWishListType                               K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_557E[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData;                  // 0x0054(0x000C)(NoDestructor)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList; // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckAdventurerRank_Result;               // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_557F[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0068(0x0088)()
	bool                                          CallFunc_FindImagineRecipeMaster_bIsValid;         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5580[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster; // 0x00F8(0x0038)()
};
static_assert(alignof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem) == 0x000008, "Wrong alignment on PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem");
static_assert(sizeof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem) == 0x000130, "Wrong size on PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, EntryPoint) == 0x000000, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, Temp_byte_Variable) == 0x000004, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, Temp_byte_Variable_1) == 0x000005, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, Temp_byte_Variable_2) == 0x000006, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, Temp_byte_Variable_3) == 0x000007, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, Temp_byte_Variable_4) == 0x000008, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, Temp_byte_Variable_5) == 0x000009, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, Temp_byte_Variable_6) == 0x00000A, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, Temp_byte_Variable_7) == 0x00000B, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, Temp_byte_Variable_8) == 0x00000C, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x000020, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, K2Node_ComponentBoundEvent_bIsChecked) == 0x000024, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_GetCharacterId_ReturnValue_1) == 0x000040, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, K2Node_Select_Default) == 0x000050, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, K2Node_MakeStruct_SBWishListData) == 0x000054, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::K2Node_MakeStruct_SBWishListData' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_IsRegistedWishlist_ReturnValue) == 0x000060, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_IsRegistedWishlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList) == 0x000061, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_CheckAdventurerRank_Result) == 0x000062, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_CheckAdventurerRank_Result' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_Not_PreBool_ReturnValue) == 0x000063, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_FindCraftMaster_bIsValid) == 0x000064, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_FindCraftMaster_CraftMaster) == 0x000068, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_FindImagineRecipeMaster_bIsValid) == 0x0000F0, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_FindImagineRecipeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem, CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster) == 0x0000F8, "Member 'PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem::CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster' has a wrong offset!");

// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on PictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(PictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on PictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(PictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'PictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetName
// 0x0018 (0x0018 - 0x0000)
struct PictureBook_MakeListItem_C_SetName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PictureBook_MakeListItem_C_SetName) == 0x000008, "Wrong alignment on PictureBook_MakeListItem_C_SetName");
static_assert(sizeof(PictureBook_MakeListItem_C_SetName) == 0x000018, "Wrong size on PictureBook_MakeListItem_C_SetName");
static_assert(offsetof(PictureBook_MakeListItem_C_SetName, InText) == 0x000000, "Member 'PictureBook_MakeListItem_C_SetName::InText' has a wrong offset!");

// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetSecret
// 0x0010 (0x0010 - 0x0000)
struct PictureBook_MakeListItem_C_SetSecret final
{
public:
	bool                                          Param_IsSecret;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5581[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PictureBook_MakeListItem_C_SetSecret) == 0x000004, "Wrong alignment on PictureBook_MakeListItem_C_SetSecret");
static_assert(sizeof(PictureBook_MakeListItem_C_SetSecret) == 0x000010, "Wrong size on PictureBook_MakeListItem_C_SetSecret");
static_assert(offsetof(PictureBook_MakeListItem_C_SetSecret, Param_IsSecret) == 0x000000, "Member 'PictureBook_MakeListItem_C_SetSecret::Param_IsSecret' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetSecret, Temp_bool_Variable) == 0x000001, "Member 'PictureBook_MakeListItem_C_SetSecret::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetSecret, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'PictureBook_MakeListItem_C_SetSecret::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetSecret, Temp_int_Variable) == 0x000004, "Member 'PictureBook_MakeListItem_C_SetSecret::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetSecret, Temp_int_Variable_1) == 0x000008, "Member 'PictureBook_MakeListItem_C_SetSecret::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetSecret, K2Node_Select_Default) == 0x00000C, "Member 'PictureBook_MakeListItem_C_SetSecret::K2Node_Select_Default' has a wrong offset!");

// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetNew
// 0x0004 (0x0004 - 0x0000)
struct PictureBook_MakeListItem_C_SetNew final
{
public:
	bool                                          IsRead;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAddRead;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_MakeListItem_C_SetNew) == 0x000001, "Wrong alignment on PictureBook_MakeListItem_C_SetNew");
static_assert(sizeof(PictureBook_MakeListItem_C_SetNew) == 0x000004, "Wrong size on PictureBook_MakeListItem_C_SetNew");
static_assert(offsetof(PictureBook_MakeListItem_C_SetNew, IsRead) == 0x000000, "Member 'PictureBook_MakeListItem_C_SetNew::IsRead' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetNew, IsAddRead) == 0x000001, "Member 'PictureBook_MakeListItem_C_SetNew::IsAddRead' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetNew, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'PictureBook_MakeListItem_C_SetNew::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetNew, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'PictureBook_MakeListItem_C_SetNew::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetWishlistBtnEnable
// 0x0038 (0x0038 - 0x0000)
struct PictureBook_MakeListItem_C_SetWishlistBtnEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_5;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_6;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_7;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable_8;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5582[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBWishListType                               K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5583[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData;                  // 0x0024(0x000C)(NoDestructor)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_MakeListItem_C_SetWishlistBtnEnable) == 0x000008, "Wrong alignment on PictureBook_MakeListItem_C_SetWishlistBtnEnable");
static_assert(sizeof(PictureBook_MakeListItem_C_SetWishlistBtnEnable) == 0x000038, "Wrong size on PictureBook_MakeListItem_C_SetWishlistBtnEnable");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, IsEnable) == 0x000000, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, Temp_byte_Variable) == 0x000001, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, Temp_byte_Variable_1) == 0x000002, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, Temp_byte_Variable_2) == 0x000003, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, Temp_byte_Variable_3) == 0x000004, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, Temp_byte_Variable_4) == 0x000005, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, Temp_byte_Variable_5) == 0x000006, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, Temp_byte_Variable_6) == 0x000007, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, Temp_byte_Variable_7) == 0x000008, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, Temp_byte_Variable_8) == 0x000009, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, K2Node_Select_Default) == 0x000020, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, K2Node_MakeStruct_SBWishListData) == 0x000024, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::K2Node_MakeStruct_SBWishListData' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, CallFunc_IsRegistedWishlist_ReturnValue) == 0x000030, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::CallFunc_IsRegistedWishlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetWishlistBtnEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'PictureBook_MakeListItem_C_SetWishlistBtnEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.CheckAdventurerRank
// 0x00E0 (0x00E0 - 0x0000)
struct PictureBook_MakeListItem_C_CheckAdventurerRank final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5584[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue_1;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineRecipeMaster_bIsValid;         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5585[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster; // 0x0010(0x0038)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5586[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0050(0x0088)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_MakeListItem_C_CheckAdventurerRank) == 0x000008, "Wrong alignment on PictureBook_MakeListItem_C_CheckAdventurerRank");
static_assert(sizeof(PictureBook_MakeListItem_C_CheckAdventurerRank) == 0x0000E0, "Wrong size on PictureBook_MakeListItem_C_CheckAdventurerRank");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, Result) == 0x000000, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::Result' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_GetAdventurerRank_ReturnValue) == 0x000004, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_GetAdventurerRank_ReturnValue_1) == 0x000008, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_GetAdventurerRank_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_FindImagineRecipeMaster_bIsValid) == 0x00000C, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_FindImagineRecipeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster) == 0x000010, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000048, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000049, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00004A, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_BooleanOR_ReturnValue) == 0x00004B, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_FindCraftMaster_bIsValid) == 0x00004C, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_FindCraftMaster_CraftMaster) == 0x000050, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_CheckAdventurerRank, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000D8, "Member 'PictureBook_MakeListItem_C_CheckAdventurerRank::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetTermId
// 0x0038 (0x0038 - 0x0000)
struct PictureBook_MakeListItem_C_SetTermId final
{
public:
	class FString                                 TermId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5587[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermNoneLimmit_ReturnValue;        // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_MakeListItem_C_SetTermId) == 0x000008, "Wrong alignment on PictureBook_MakeListItem_C_SetTermId");
static_assert(sizeof(PictureBook_MakeListItem_C_SetTermId) == 0x000038, "Wrong size on PictureBook_MakeListItem_C_SetTermId");
static_assert(offsetof(PictureBook_MakeListItem_C_SetTermId, TermId) == 0x000000, "Member 'PictureBook_MakeListItem_C_SetTermId::TermId' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetTermId, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'PictureBook_MakeListItem_C_SetTermId::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetTermId, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000018, "Member 'PictureBook_MakeListItem_C_SetTermId::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetTermId, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000020, "Member 'PictureBook_MakeListItem_C_SetTermId::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetTermId, CallFunc_Create_ReturnValue) == 0x000028, "Member 'PictureBook_MakeListItem_C_SetTermId::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetTermId, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000030, "Member 'PictureBook_MakeListItem_C_SetTermId::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetTermId, CallFunc_IsEventTermActive_ReturnValue) == 0x000031, "Member 'PictureBook_MakeListItem_C_SetTermId::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetTermId, CallFunc_IsEventTermNoneLimmit_ReturnValue) == 0x000032, "Member 'PictureBook_MakeListItem_C_SetTermId::CallFunc_IsEventTermNoneLimmit_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_MakeListItem_C_SetTermId, CallFunc_Not_PreBool_ReturnValue) == 0x000033, "Member 'PictureBook_MakeListItem_C_SetTermId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

