#pragma once

 

// Package: GuildTimeCBIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "GuildActiveTimes_structs.hpp"


namespace SDK::Params
{

// Function GuildTimeCBIcon.GuildTimeCBIcon_C.ExecuteUbergraph_GuildTimeCBIcon
// 0x00D8 (0x00D8 - 0x0000)
struct GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B63[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B64[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B65[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B66[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B67[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0060(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	struct FGuildActiveTimes                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0088(0x0038)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B68[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B69[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon) == 0x000008, "Wrong alignment on GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon");
static_assert(sizeof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon) == 0x0000D8, "Wrong size on GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, EntryPoint) == 0x000000, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x000030, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, Temp_int_Array_Index_Variable) == 0x000034, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, Temp_object_Variable) == 0x000040, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, K2Node_DynamicCast_AsTexture_2D) == 0x000048, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, K2Node_Event_IsDesignTime) == 0x000058, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000060, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_Array_Get_Item) == 0x000070, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000088, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_Array_Length_ReturnValue) == 0x0000C4, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_BooleanAND_ReturnValue) == 0x0000C9, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000CA, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000CB, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon, K2Node_CustomEvent_Loaded) == 0x0000D0, "Member 'GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon::K2Node_CustomEvent_Loaded' has a wrong offset!");

// Function GuildTimeCBIcon.GuildTimeCBIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildTimeCBIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildTimeCBIcon_C_PreConstruct) == 0x000001, "Wrong alignment on GuildTimeCBIcon_C_PreConstruct");
static_assert(sizeof(GuildTimeCBIcon_C_PreConstruct) == 0x000001, "Wrong size on GuildTimeCBIcon_C_PreConstruct");
static_assert(offsetof(GuildTimeCBIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildTimeCBIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildTimeCBIcon.GuildTimeCBIcon_C.OnLoaded_C91D83624D7160623CFFE1942693BDF3
// 0x0008 (0x0008 - 0x0000)
struct GuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3) == 0x000008, "Wrong alignment on GuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3");
static_assert(sizeof(GuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3) == 0x000008, "Wrong size on GuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3");
static_assert(offsetof(GuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3, Loaded) == 0x000000, "Member 'GuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3::Loaded' has a wrong offset!");

// Function GuildTimeCBIcon.GuildTimeCBIcon_C.IsCheck
// 0x0002 (0x0002 - 0x0000)
struct GuildTimeCBIcon_C_IsCheck final
{
public:
	bool                                          Param_IsCheck;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildTimeCBIcon_C_IsCheck) == 0x000001, "Wrong alignment on GuildTimeCBIcon_C_IsCheck");
static_assert(sizeof(GuildTimeCBIcon_C_IsCheck) == 0x000002, "Wrong size on GuildTimeCBIcon_C_IsCheck");
static_assert(offsetof(GuildTimeCBIcon_C_IsCheck, Param_IsCheck) == 0x000000, "Member 'GuildTimeCBIcon_C_IsCheck::Param_IsCheck' has a wrong offset!");
static_assert(offsetof(GuildTimeCBIcon_C_IsCheck, CallFunc_IsChecked_ReturnValue) == 0x000001, "Member 'GuildTimeCBIcon_C_IsCheck::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

// Function GuildTimeCBIcon.GuildTimeCBIcon_C.GetTime
// 0x0001 (0x0001 - 0x0000)
struct GuildTimeCBIcon_C_GetTime final
{
public:
	ESBGuildActivityTime                          Param_Time;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildTimeCBIcon_C_GetTime) == 0x000001, "Wrong alignment on GuildTimeCBIcon_C_GetTime");
static_assert(sizeof(GuildTimeCBIcon_C_GetTime) == 0x000001, "Wrong size on GuildTimeCBIcon_C_GetTime");
static_assert(offsetof(GuildTimeCBIcon_C_GetTime, Param_Time) == 0x000000, "Member 'GuildTimeCBIcon_C_GetTime::Param_Time' has a wrong offset!");

// Function GuildTimeCBIcon.GuildTimeCBIcon_C.Set Checked
// 0x0001 (0x0001 - 0x0000)
struct GuildTimeCBIcon_C_Set_Checked final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildTimeCBIcon_C_Set_Checked) == 0x000001, "Wrong alignment on GuildTimeCBIcon_C_Set_Checked");
static_assert(sizeof(GuildTimeCBIcon_C_Set_Checked) == 0x000001, "Wrong size on GuildTimeCBIcon_C_Set_Checked");
static_assert(offsetof(GuildTimeCBIcon_C_Set_Checked, bIsChecked) == 0x000000, "Member 'GuildTimeCBIcon_C_Set_Checked::bIsChecked' has a wrong offset!");

}

