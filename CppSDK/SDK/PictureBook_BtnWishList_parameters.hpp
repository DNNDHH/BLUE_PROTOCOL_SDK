#pragma once

 

// Package: PictureBook_BtnWishList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.ExecuteUbergraph_PictureBook_BtnWishList
// 0x00D0 (0x00D0 - 0x0000)
struct PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DE2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DE3[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DE4[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0090(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00A8(0x0028)()
};
static_assert(alignof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList) == 0x000008, "Wrong alignment on PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList");
static_assert(sizeof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList) == 0x0000D0, "Wrong size on PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, EntryPoint) == 0x000000, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::EntryPoint' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, Temp_bool_Variable) == 0x000030, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, K2Node_Event_IsDesignTime) == 0x000031, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000048, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000068, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, K2Node_Select_Default) == 0x000090, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList, K2Node_MakeStruct_SlateColor_1) == 0x0000A8, "Member 'PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PictureBook_BtnWishList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_BtnWishList_C_PreConstruct) == 0x000001, "Wrong alignment on PictureBook_BtnWishList_C_PreConstruct");
static_assert(sizeof(PictureBook_BtnWishList_C_PreConstruct) == 0x000001, "Wrong size on PictureBook_BtnWishList_C_PreConstruct");
static_assert(offsetof(PictureBook_BtnWishList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PictureBook_BtnWishList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct PictureBook_BtnWishList_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PictureBook_BtnWishList_C_SetText) == 0x000008, "Wrong alignment on PictureBook_BtnWishList_C_SetText");
static_assert(sizeof(PictureBook_BtnWishList_C_SetText) == 0x000018, "Wrong size on PictureBook_BtnWishList_C_SetText");
static_assert(offsetof(PictureBook_BtnWishList_C_SetText, InText) == 0x000000, "Member 'PictureBook_BtnWishList_C_SetText::InText' has a wrong offset!");

// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetPressedSoundId
// 0x0002 (0x0002 - 0x0000)
struct PictureBook_BtnWishList_C_SetPressedSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_BtnWishList_C_SetPressedSoundId) == 0x000001, "Wrong alignment on PictureBook_BtnWishList_C_SetPressedSoundId");
static_assert(sizeof(PictureBook_BtnWishList_C_SetPressedSoundId) == 0x000002, "Wrong size on PictureBook_BtnWishList_C_SetPressedSoundId");
static_assert(offsetof(PictureBook_BtnWishList_C_SetPressedSoundId, InSoundId) == 0x000000, "Member 'PictureBook_BtnWishList_C_SetPressedSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_SetPressedSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'PictureBook_BtnWishList_C_SetPressedSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetHoveredSoundId
// 0x0002 (0x0002 - 0x0000)
struct PictureBook_BtnWishList_C_SetHoveredSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_BtnWishList_C_SetHoveredSoundId) == 0x000001, "Wrong alignment on PictureBook_BtnWishList_C_SetHoveredSoundId");
static_assert(sizeof(PictureBook_BtnWishList_C_SetHoveredSoundId) == 0x000002, "Wrong size on PictureBook_BtnWishList_C_SetHoveredSoundId");
static_assert(offsetof(PictureBook_BtnWishList_C_SetHoveredSoundId, InSoundId) == 0x000000, "Member 'PictureBook_BtnWishList_C_SetHoveredSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_SetHoveredSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'PictureBook_BtnWishList_C_SetHoveredSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.Set Btn
// 0x0058 (0x0058 - 0x0000)
struct PictureBook_BtnWishList_C_Set_Btn final
{
public:
	bool                                          IsRegist;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DE5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(PictureBook_BtnWishList_C_Set_Btn) == 0x000008, "Wrong alignment on PictureBook_BtnWishList_C_Set_Btn");
static_assert(sizeof(PictureBook_BtnWishList_C_Set_Btn) == 0x000058, "Wrong size on PictureBook_BtnWishList_C_Set_Btn");
static_assert(offsetof(PictureBook_BtnWishList_C_Set_Btn, IsRegist) == 0x000000, "Member 'PictureBook_BtnWishList_C_Set_Btn::IsRegist' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_Set_Btn, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'PictureBook_BtnWishList_C_Set_Btn::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_Set_Btn, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000018, "Member 'PictureBook_BtnWishList_C_Set_Btn::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_Set_Btn, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'PictureBook_BtnWishList_C_Set_Btn::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_BtnWishList_C_Set_Btn, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'PictureBook_BtnWishList_C_Set_Btn::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

