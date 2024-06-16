#pragma once

 

// Package: LibraryMenu_TheaterDetails

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'LibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.ExecuteUbergraph_LibraryMenu_TheaterDetails
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails) == 0x000004, "Wrong alignment on LibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails");
static_assert(sizeof(LibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails) == 0x000004, "Wrong size on LibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails, EntryPoint) == 0x000000, "Member 'LibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails::EntryPoint' has a wrong offset!");

// Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetDetailsVisibility
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_TheaterDetails_C_SetDetailsVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D69[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_TheaterDetails_C_SetDetailsVisibility) == 0x000008, "Wrong alignment on LibraryMenu_TheaterDetails_C_SetDetailsVisibility");
static_assert(sizeof(LibraryMenu_TheaterDetails_C_SetDetailsVisibility) == 0x000018, "Wrong size on LibraryMenu_TheaterDetails_C_SetDetailsVisibility");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_SetDetailsVisibility, bVisible) == 0x000000, "Member 'LibraryMenu_TheaterDetails_C_SetDetailsVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_SetDetailsVisibility, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'LibraryMenu_TheaterDetails_C_SetDetailsVisibility::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_SetDetailsVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'LibraryMenu_TheaterDetails_C_SetDetailsVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_SetDetailsVisibility, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LibraryMenu_TheaterDetails_C_SetDetailsVisibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_SetDetailsVisibility, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'LibraryMenu_TheaterDetails_C_SetDetailsVisibility::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetMessage
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_TheaterDetails_C_SetMessage final
{
public:
	bool                                          Param_IsCty;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D6A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalTextId;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(LibraryMenu_TheaterDetails_C_SetMessage) == 0x000008, "Wrong alignment on LibraryMenu_TheaterDetails_C_SetMessage");
static_assert(sizeof(LibraryMenu_TheaterDetails_C_SetMessage) == 0x000030, "Wrong size on LibraryMenu_TheaterDetails_C_SetMessage");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_SetMessage, Param_IsCty) == 0x000000, "Member 'LibraryMenu_TheaterDetails_C_SetMessage::Param_IsCty' has a wrong offset!");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_SetMessage, LocalTextId) == 0x000004, "Member 'LibraryMenu_TheaterDetails_C_SetMessage::LocalTextId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_SetMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'LibraryMenu_TheaterDetails_C_SetMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_TheaterDetails_C_SetMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'LibraryMenu_TheaterDetails_C_SetMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

