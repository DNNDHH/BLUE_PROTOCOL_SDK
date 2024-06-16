#pragma once

 

// Package: GuildAttributeCBIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "GuildAttributes_structs.hpp"


namespace SDK::Params
{

// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.ExecuteUbergraph_GuildAttributeCBIcon
// 0x00C8 (0x00C8 - 0x0000)
struct GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4772[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4773[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4774[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4775[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0060(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	struct FGuildAttributes                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0088(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4776[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon) == 0x000008, "Wrong alignment on GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon");
static_assert(sizeof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon) == 0x0000C8, "Wrong size on GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, EntryPoint) == 0x000000, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, Temp_object_Variable) == 0x000020, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, K2Node_DynamicCast_AsTexture_2D) == 0x000040, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x000049, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000050, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, K2Node_Event_IsDesignTime) == 0x00005C, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000060, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_Array_Get_Item) == 0x000070, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000088, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B8, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_Array_Length_ReturnValue) == 0x0000BC, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_Less_IntInt_ReturnValue) == 0x0000C0, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_BooleanAND_ReturnValue) == 0x0000C1, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C2, "Member 'GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildAttributeCBIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildAttributeCBIcon_C_PreConstruct) == 0x000001, "Wrong alignment on GuildAttributeCBIcon_C_PreConstruct");
static_assert(sizeof(GuildAttributeCBIcon_C_PreConstruct) == 0x000001, "Wrong size on GuildAttributeCBIcon_C_PreConstruct");
static_assert(offsetof(GuildAttributeCBIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildAttributeCBIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1
// 0x0008 (0x0008 - 0x0000)
struct GuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1) == 0x000008, "Wrong alignment on GuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1");
static_assert(sizeof(GuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1) == 0x000008, "Wrong size on GuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1");
static_assert(offsetof(GuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1, Loaded) == 0x000000, "Member 'GuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1::Loaded' has a wrong offset!");

// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.IsCheck
// 0x0002 (0x0002 - 0x0000)
struct GuildAttributeCBIcon_C_IsCheck final
{
public:
	bool                                          Param_IsCheck;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildAttributeCBIcon_C_IsCheck) == 0x000001, "Wrong alignment on GuildAttributeCBIcon_C_IsCheck");
static_assert(sizeof(GuildAttributeCBIcon_C_IsCheck) == 0x000002, "Wrong size on GuildAttributeCBIcon_C_IsCheck");
static_assert(offsetof(GuildAttributeCBIcon_C_IsCheck, Param_IsCheck) == 0x000000, "Member 'GuildAttributeCBIcon_C_IsCheck::Param_IsCheck' has a wrong offset!");
static_assert(offsetof(GuildAttributeCBIcon_C_IsCheck, CallFunc_IsChecked_ReturnValue) == 0x000001, "Member 'GuildAttributeCBIcon_C_IsCheck::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.GetAttrib
// 0x0001 (0x0001 - 0x0000)
struct GuildAttributeCBIcon_C_GetAttrib final
{
public:
	EGuildAttribute                               Param_Attribute;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildAttributeCBIcon_C_GetAttrib) == 0x000001, "Wrong alignment on GuildAttributeCBIcon_C_GetAttrib");
static_assert(sizeof(GuildAttributeCBIcon_C_GetAttrib) == 0x000001, "Wrong size on GuildAttributeCBIcon_C_GetAttrib");
static_assert(offsetof(GuildAttributeCBIcon_C_GetAttrib, Param_Attribute) == 0x000000, "Member 'GuildAttributeCBIcon_C_GetAttrib::Param_Attribute' has a wrong offset!");

// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.SetChecked
// 0x0001 (0x0001 - 0x0000)
struct GuildAttributeCBIcon_C_SetChecked final
{
public:
	bool                                          bIsCheck;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildAttributeCBIcon_C_SetChecked) == 0x000001, "Wrong alignment on GuildAttributeCBIcon_C_SetChecked");
static_assert(sizeof(GuildAttributeCBIcon_C_SetChecked) == 0x000001, "Wrong size on GuildAttributeCBIcon_C_SetChecked");
static_assert(offsetof(GuildAttributeCBIcon_C_SetChecked, bIsCheck) == 0x000000, "Member 'GuildAttributeCBIcon_C_SetChecked::bIsCheck' has a wrong offset!");

}

