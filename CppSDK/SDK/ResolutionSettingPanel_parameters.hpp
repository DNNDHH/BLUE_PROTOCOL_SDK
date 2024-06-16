#pragma once

 

// Package: ResolutionSettingPanel

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.SetupResolutionList
// 0x0048 (0x0048 - 0x0000)
struct ResolutionSettingPanel_C_SetupResolutionList final
{
public:
	struct FIntPoint                              Resolution;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_675A[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_675B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_675C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_GetDesktopResolution_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResolutionSettingPanel_C_SetupResolutionList) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_SetupResolutionList");
static_assert(sizeof(ResolutionSettingPanel_C_SetupResolutionList) == 0x000048, "Wrong size on ResolutionSettingPanel_C_SetupResolutionList");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, Resolution) == 0x000000, "Member 'ResolutionSettingPanel_C_SetupResolutionList::Resolution' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, Temp_bool_True_if_break_was_hit_Variable) == 0x000008, "Member 'ResolutionSettingPanel_C_SetupResolutionList::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'ResolutionSettingPanel_C_SetupResolutionList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'ResolutionSettingPanel_C_SetupResolutionList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_GetGameUserSettings_ReturnValue) == 0x000020, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_Array_Get_Item) == 0x000028, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_GetDesktopResolution_ReturnValue) == 0x000030, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_GetDesktopResolution_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003C, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_Less_IntInt_ReturnValue) == 0x00003D, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00003E, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_BooleanAND_ReturnValue) == 0x00003F, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_SetupResolutionList, CallFunc_BooleanAND_ReturnValue_1) == 0x000040, "Member 'ResolutionSettingPanel_C_SetupResolutionList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionByCustomSize
// 0x0088 (0x0088 - 0x0000)
struct ResolutionSettingPanel_C_AddOptionByCustomSize final
{
public:
	struct FIntPoint                              Size;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ResolutionSettingPanel_C_AddOptionByCustomSize) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_AddOptionByCustomSize");
static_assert(sizeof(ResolutionSettingPanel_C_AddOptionByCustomSize) == 0x000088, "Wrong size on ResolutionSettingPanel_C_AddOptionByCustomSize");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionByCustomSize, Size) == 0x000000, "Member 'ResolutionSettingPanel_C_AddOptionByCustomSize::Size' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionByCustomSize, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'ResolutionSettingPanel_C_AddOptionByCustomSize::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionByCustomSize, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'ResolutionSettingPanel_C_AddOptionByCustomSize::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionByCustomSize, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'ResolutionSettingPanel_C_AddOptionByCustomSize::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionByCustomSize, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000038, "Member 'ResolutionSettingPanel_C_AddOptionByCustomSize::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionByCustomSize, K2Node_MakeArray_Array) == 0x000048, "Member 'ResolutionSettingPanel_C_AddOptionByCustomSize::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionByCustomSize, CallFunc_JoinStringArray_ReturnValue) == 0x000058, "Member 'ResolutionSettingPanel_C_AddOptionByCustomSize::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionByCustomSize, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'ResolutionSettingPanel_C_AddOptionByCustomSize::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionByCustomSize, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000078, "Member 'ResolutionSettingPanel_C_AddOptionByCustomSize::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionBySize
// 0x0048 (0x0048 - 0x0000)
struct ResolutionSettingPanel_C_AddOptionBySize final
{
public:
	struct FIntPoint                              Size;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ResolutionSettingPanel_C_AddOptionBySize) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_AddOptionBySize");
static_assert(sizeof(ResolutionSettingPanel_C_AddOptionBySize) == 0x000048, "Wrong size on ResolutionSettingPanel_C_AddOptionBySize");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionBySize, Size) == 0x000000, "Member 'ResolutionSettingPanel_C_AddOptionBySize::Size' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionBySize, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'ResolutionSettingPanel_C_AddOptionBySize::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionBySize, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000018, "Member 'ResolutionSettingPanel_C_AddOptionBySize::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionBySize, K2Node_MakeArray_Array) == 0x000028, "Member 'ResolutionSettingPanel_C_AddOptionBySize::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_AddOptionBySize, CallFunc_JoinStringArray_ReturnValue) == 0x000038, "Member 'ResolutionSettingPanel_C_AddOptionBySize::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.FindNearySupportedPoint
// 0x0098 (0x0098 - 0x0000)
struct ResolutionSettingPanel_C_FindNearySupportedPoint final
{
public:
	struct FIntPoint                              Resolutions;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              Finded;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              TmpResplution;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, int32>                            Position;                                          // 0x0018(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_675D[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FIntPoint>                      CallFunc_GetFilteredResolutions_FilterdResolutions; // 0x0078(0x0010)(ReferenceParm)
	struct FIntPoint                              CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResolutionSettingPanel_C_FindNearySupportedPoint) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_FindNearySupportedPoint");
static_assert(sizeof(ResolutionSettingPanel_C_FindNearySupportedPoint) == 0x000098, "Wrong size on ResolutionSettingPanel_C_FindNearySupportedPoint");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, Resolutions) == 0x000000, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::Resolutions' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, Finded) == 0x000008, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::Finded' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, TmpResplution) == 0x000010, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::TmpResplution' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, Position) == 0x000018, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::Position' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, Temp_int_Array_Index_Variable) == 0x000068, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, Temp_int_Loop_Counter_Variable) == 0x00006C, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, CallFunc_GetFilteredResolutions_FilterdResolutions) == 0x000078, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::CallFunc_GetFilteredResolutions_FilterdResolutions' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, CallFunc_Array_Get_Item) == 0x000088, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, CallFunc_Greater_IntInt_ReturnValue) == 0x000094, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_FindNearySupportedPoint, CallFunc_Less_IntInt_ReturnValue) == 0x000095, "Member 'ResolutionSettingPanel_C_FindNearySupportedPoint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.GetFilteredResolutions
// 0x0070 (0x0070 - 0x0000)
struct ResolutionSettingPanel_C_GetFilteredResolutions final
{
public:
	TArray<struct FIntPoint>                      FilterdResolutions;                                // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FIntPoint>                      Supported;                                         // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<struct FIntPoint>                      SupportedResolutions;                              // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_675E[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FIntPoint>                      CallFunc_GetSupportedFullscreenResolutions_Resolutions; // 0x0040(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetSupportedFullscreenResolutions_ReturnValue; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_675F[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6760[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResolutionSettingPanel_C_GetFilteredResolutions) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_GetFilteredResolutions");
static_assert(sizeof(ResolutionSettingPanel_C_GetFilteredResolutions) == 0x000070, "Wrong size on ResolutionSettingPanel_C_GetFilteredResolutions");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, FilterdResolutions) == 0x000000, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::FilterdResolutions' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, Supported) == 0x000010, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::Supported' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, SupportedResolutions) == 0x000020, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::SupportedResolutions' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, Temp_int_Array_Index_Variable) == 0x000030, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, CallFunc_GetSupportedFullscreenResolutions_Resolutions) == 0x000040, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::CallFunc_GetSupportedFullscreenResolutions_Resolutions' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, CallFunc_GetSupportedFullscreenResolutions_ReturnValue) == 0x000050, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::CallFunc_GetSupportedFullscreenResolutions_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, CallFunc_Array_Get_Item) == 0x000058, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, CallFunc_Array_Add_ReturnValue) == 0x000064, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_GetFilteredResolutions, CallFunc_Array_Contains_ReturnValue) == 0x000068, "Member 'ResolutionSettingPanel_C_GetFilteredResolutions::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.On_Cmb_Resolution_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0");
static_assert(sizeof(ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0) == 0x000038, "Wrong size on ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0");
static_assert(offsetof(ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0, Item) == 0x000000, "Member 'ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteResolution Point
// 0x0058 (0x0058 - 0x0000)
struct ResolutionSettingPanel_C_ExecuteResolution_Point final
{
public:
	struct FIntPoint                              Size;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CandidateResolution;                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6761[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              K2Node_MakeStruct_IntPoint;                        // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6762[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              CallFunc_Add_IntPointIntPoint_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_FindNearySupportedPoint_Finded;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntPoint>                      CallFunc_GetFilteredResolutions_FilterdResolutions; // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6763[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResolutionSettingPanel_C_ExecuteResolution_Point) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_ExecuteResolution_Point");
static_assert(sizeof(ResolutionSettingPanel_C_ExecuteResolution_Point) == 0x000058, "Wrong size on ResolutionSettingPanel_C_ExecuteResolution_Point");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, Size) == 0x000000, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::Size' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CandidateResolution) == 0x000008, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CandidateResolution' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_IsEditor_ReturnValue) == 0x000011, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, K2Node_MakeStruct_IntPoint) == 0x000014, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::K2Node_MakeStruct_IntPoint' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, Temp_bool_Variable) == 0x00001C, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_Add_IntPointIntPoint_ReturnValue) == 0x000020, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_Add_IntPointIntPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, K2Node_Select_Default) == 0x000028, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_FindNearySupportedPoint_Finded) == 0x000030, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_FindNearySupportedPoint_Finded' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_GetFilteredResolutions_FilterdResolutions) == 0x000038, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_GetFilteredResolutions_FilterdResolutions' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_Array_Contains_ReturnValue) == 0x000048, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000049, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_Not_PreBool_ReturnValue) == 0x00004A, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteResolution_Point, CallFunc_GetGameUserSettings_ReturnValue) == 0x000050, "Member 'ResolutionSettingPanel_C_ExecuteResolution_Point::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.Execure Resolution Str
// 0x0048 (0x0048 - 0x0000)
struct ResolutionSettingPanel_C_Execure_Resolution_Str final
{
public:
	class FString                                 ResStr;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6764[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              K2Node_MakeStruct_IntPoint;                        // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResolutionSettingPanel_C_Execure_Resolution_Str) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_Execure_Resolution_Str");
static_assert(sizeof(ResolutionSettingPanel_C_Execure_Resolution_Str) == 0x000048, "Wrong size on ResolutionSettingPanel_C_Execure_Resolution_Str");
static_assert(offsetof(ResolutionSettingPanel_C_Execure_Resolution_Str, ResStr) == 0x000000, "Member 'ResolutionSettingPanel_C_Execure_Resolution_Str::ResStr' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_Execure_Resolution_Str, CallFunc_Split_LeftS) == 0x000010, "Member 'ResolutionSettingPanel_C_Execure_Resolution_Str::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_Execure_Resolution_Str, CallFunc_Split_RightS) == 0x000020, "Member 'ResolutionSettingPanel_C_Execure_Resolution_Str::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_Execure_Resolution_Str, CallFunc_Split_ReturnValue) == 0x000030, "Member 'ResolutionSettingPanel_C_Execure_Resolution_Str::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_Execure_Resolution_Str, CallFunc_Conv_StringToInt_ReturnValue) == 0x000034, "Member 'ResolutionSettingPanel_C_Execure_Resolution_Str::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_Execure_Resolution_Str, CallFunc_Conv_StringToInt_ReturnValue_1) == 0x000038, "Member 'ResolutionSettingPanel_C_Execure_Resolution_Str::CallFunc_Conv_StringToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_Execure_Resolution_Str, K2Node_MakeStruct_IntPoint) == 0x00003C, "Member 'ResolutionSettingPanel_C_Execure_Resolution_Str::K2Node_MakeStruct_IntPoint' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ResolutionSettingPanel_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResolutionSettingPanel_C_PreConstruct) == 0x000001, "Wrong alignment on ResolutionSettingPanel_C_PreConstruct");
static_assert(sizeof(ResolutionSettingPanel_C_PreConstruct) == 0x000001, "Wrong size on ResolutionSettingPanel_C_PreConstruct");
static_assert(offsetof(ResolutionSettingPanel_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ResolutionSettingPanel_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.OnSelectionChanged
// 0x0018 (0x0018 - 0x0000)
struct ResolutionSettingPanel_C_OnSelectionChanged final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResolutionSettingPanel_C_OnSelectionChanged) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_OnSelectionChanged");
static_assert(sizeof(ResolutionSettingPanel_C_OnSelectionChanged) == 0x000018, "Wrong size on ResolutionSettingPanel_C_OnSelectionChanged");
static_assert(offsetof(ResolutionSettingPanel_C_OnSelectionChanged, SelectedItem) == 0x000000, "Member 'ResolutionSettingPanel_C_OnSelectionChanged::SelectedItem' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_OnSelectionChanged, SelectionType) == 0x000010, "Member 'ResolutionSettingPanel_C_OnSelectionChanged::SelectionType' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.WindowMode
// 0x0018 (0x0018 - 0x0000)
struct ResolutionSettingPanel_C_WindowMode final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6765[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResolutionSettingPanel_C_WindowMode) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_WindowMode");
static_assert(sizeof(ResolutionSettingPanel_C_WindowMode) == 0x000018, "Wrong size on ResolutionSettingPanel_C_WindowMode");
static_assert(offsetof(ResolutionSettingPanel_C_WindowMode, IsChecked) == 0x000000, "Member 'ResolutionSettingPanel_C_WindowMode::IsChecked' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_WindowMode, RadioButton) == 0x000008, "Member 'ResolutionSettingPanel_C_WindowMode::RadioButton' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_WindowMode, Param_Index) == 0x000010, "Member 'ResolutionSettingPanel_C_WindowMode::Param_Index' has a wrong offset!");

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteUbergraph_ResolutionSettingPanel
// 0x02F8 (0x02F8 - 0x0000)
struct ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   Temp_byte_Variable_4;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6766[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EWindowMode                                   Temp_byte_Variable_5;                              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EWindowMode                                   Temp_byte_Variable_6;                              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6767[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6768[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6769[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsChecked, class URadioButton_C* RadioButton, int32 Index)> K2Node_CreateDelegate_OutputDelegate;              // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_4;                               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_676A[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x00C0(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable_6;                               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_676B[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EWindowMode                                   Temp_byte_Variable_7;                              // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_676C[0x1];                                     // 0x00FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0100(0x0040)(HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0150(0x0010)(ReferenceParm)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0168(0x0018)()
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           K2Node_DynamicCast_AsBP_Dialog;                    // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_676D[0x5];                                     // 0x0193(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_SelectedItem;                   // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_CustomEvent_SelectionType;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_676E[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x01AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_676F[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FIntPoint                              K2Node_MakeStruct_IntPoint;                        // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array_3;                          // 0x01F0(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& SelectedItem, ESelectInfo SelectionType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0224(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0236(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6770[0x1];                                     // 0x0237(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_7;                               // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6771[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6772[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array_4;                          // 0x0268(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue_1;            // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   CallFunc_GetFullscreenMode_ReturnValue;            // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isChecked;                      // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6773[0x6];                                     // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         K2Node_CustomEvent_RadioButton;                    // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   K2Node_Select_Default_2;                           // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6774[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6775[0x2];                                     // 0x02B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_Map_Find_Value;                           // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6776[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02D8(0x0018)()
	bool                                          K2Node_Select_Default_3;                           // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_4;                           // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_5;                           // 0x02F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel) == 0x000008, "Wrong alignment on ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel");
static_assert(sizeof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel) == 0x0002F8, "Wrong size on ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, EntryPoint) == 0x000000, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_byte_Variable) == 0x000004, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_byte_Variable_1) == 0x000005, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_byte_Variable_2) == 0x000006, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_byte_Variable_3) == 0x000007, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_int_Variable) == 0x000008, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_int_Variable_1) == 0x00000C, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_int_Variable_2) == 0x000010, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_byte_Variable_4) == 0x000014, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_Select_Default) == 0x000018, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_bool_Variable) == 0x00001C, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_bool_Variable_1) == 0x00001D, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_bool_Variable_2) == 0x00001E, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_byte_Variable_5) == 0x00001F, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_bool_Variable_3) == 0x000020, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_bool_Variable_4) == 0x000021, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_bool_Variable_5) == 0x000022, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_byte_Variable_6) == 0x000023, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_bool_Variable_6) == 0x000024, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_bool_Variable_7) == 0x000025, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_bool_Variable_8) == 0x000026, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_MakeLiteralByte_ReturnValue) == 0x000027, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_int_Variable_3) == 0x000028, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000070, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_MakeArray_Array) == 0x000078, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Format_ReturnValue) == 0x000088, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000A0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_CreateDelegate_OutputDelegate) == 0x0000A4, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_int_Variable_4) == 0x0000B4, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_int_Variable_5) == 0x0000B8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_MakeArray_Array_1) == 0x0000C0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_int_Variable_6) == 0x0000D0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000E0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_GetDisplayName_ReturnValue) == 0x0000E8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_IsEmpty_ReturnValue) == 0x0000F8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_byte_Variable_7) == 0x0000F9, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000FA, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_Select_Default_1) == 0x0000FC, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_MakeStruct_FormatArgumentData_1) == 0x000100, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_CreateDelegate_OutputDelegate_1) == 0x000140, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_MakeArray_Array_2) == 0x000150, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000160, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Format_ReturnValue_1) == 0x000168, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x000180, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_DynamicCast_AsBP_Dialog) == 0x000188, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_DynamicCast_AsBP_Dialog' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000191, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_Event_IsDesignTime) == 0x000192, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_CustomEvent_SelectedItem) == 0x000198, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_CustomEvent_SelectionType) == 0x0001A8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_CustomEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_GetViewportSize_ReturnValue) == 0x0001AC, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_SwitchEnum_CmpSuccess) == 0x0001B4, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_BreakVector2D_X) == 0x0001B8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_BreakVector2D_Y) == 0x0001BC, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_FTrunc_ReturnValue) == 0x0001C0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_FTrunc_ReturnValue_1) == 0x0001C4, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Conv_IntToString_ReturnValue) == 0x0001C8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0001D8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_MakeStruct_IntPoint) == 0x0001E8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_MakeStruct_IntPoint' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_MakeArray_Array_3) == 0x0001F0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_JoinStringArray_ReturnValue) == 0x000200, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Concat_StrStr_ReturnValue) == 0x000210, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Subtract_IntInt_ReturnValue) == 0x000220, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_CreateDelegate_OutputDelegate_2) == 0x000224, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000234, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_IsValid_ReturnValue) == 0x000235, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000236, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, Temp_int_Variable_7) == 0x000238, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_IsValid_ReturnValue_1) == 0x00023C, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000240, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Conv_IntToString_ReturnValue_3) == 0x000250, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_K2_IsValidTimerHandle_ReturnValue_1) == 0x000260, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_K2_IsValidTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_MakeArray_Array_4) == 0x000268, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_JoinStringArray_ReturnValue_1) == 0x000278, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_JoinStringArray_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_GetGameUserSettings_ReturnValue) == 0x000288, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_GetFullscreenMode_ReturnValue) == 0x000290, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_GetFullscreenMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_CustomEvent_isChecked) == 0x000291, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_CustomEvent_isChecked' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_CustomEvent_RadioButton) == 0x000298, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_CustomEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_CustomEvent_Index) == 0x0002A0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_Select_Default_2) == 0x0002A4, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_GetGameUserSettings_ReturnValue_1) == 0x0002A8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_GetGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Array_Contains_ReturnValue) == 0x0002B0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Array_Contains_ReturnValue_1) == 0x0002B1, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_PlaySE_ReturnValue) == 0x0002B4, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Map_Find_Value) == 0x0002B8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Map_Find_ReturnValue) == 0x0002C0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_GetTextFromAsset_ReturnValue) == 0x0002C8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, CallFunc_Conv_StringToText_ReturnValue) == 0x0002D8, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_Select_Default_3) == 0x0002F0, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_Select_Default_4) == 0x0002F1, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel, K2Node_Select_Default_5) == 0x0002F2, "Member 'ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel::K2Node_Select_Default_5' has a wrong offset!");

}

