#pragma once

 

// Package: RmShopMenu_MenuItem3

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function RmShopMenu_MenuItem3.RmShopMenu_MenuItem3_C.ExecuteUbergraph_RmShopMenu_MenuItem3
// 0x00D0 (0x00D0 - 0x0000)
struct RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5638[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5639[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0060(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_563A[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00B8(0x0018)()
};
static_assert(alignof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3) == 0x000008, "Wrong alignment on RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3");
static_assert(sizeof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3) == 0x0000D0, "Wrong size on RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, EntryPoint) == 0x000000, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::EntryPoint' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, Temp_bool_Variable) == 0x000004, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, K2Node_Event_IsDesignTime) == 0x000030, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, K2Node_MakeStruct_SlateColor_1) == 0x000060, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, CallFunc_GetTextFromAsset_ReturnValue) == 0x000088, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000B0, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3, K2Node_Select_Default) == 0x0000B8, "Member 'RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3::K2Node_Select_Default' has a wrong offset!");

// Function RmShopMenu_MenuItem3.RmShopMenu_MenuItem3_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_MenuItem3_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_MenuItem3_C_PreConstruct) == 0x000001, "Wrong alignment on RmShopMenu_MenuItem3_C_PreConstruct");
static_assert(sizeof(RmShopMenu_MenuItem3_C_PreConstruct) == 0x000001, "Wrong size on RmShopMenu_MenuItem3_C_PreConstruct");
static_assert(offsetof(RmShopMenu_MenuItem3_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'RmShopMenu_MenuItem3_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

