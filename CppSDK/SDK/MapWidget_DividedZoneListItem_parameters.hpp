#pragma once

 

// Package: MapWidget_DividedZoneListItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.OnClicked__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature final
{
public:
	class UMapWidget_DividedZoneListItem_C*       InSelf;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InDividedZoneId;                                   // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature");
static_assert(sizeof(MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature) == 0x000018, "Wrong size on MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature, InSelf) == 0x000000, "Member 'MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature::InSelf' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature, InDividedZoneId) == 0x000008, "Member 'MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature::InDividedZoneId' has a wrong offset!");

// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.ExecuteUbergraph_MapWidget_DividedZoneListItem
// 0x0068 (0x0068 - 0x0000)
struct MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F80[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F81[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem) == 0x000008, "Wrong alignment on MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem");
static_assert(sizeof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem) == 0x000068, "Wrong size on MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem, EntryPoint) == 0x000000, "Member 'MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem, K2Node_Event_IsDesignTime) == 0x000008, "Member 'MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem, CallFunc_Not_PreBool_ReturnValue) == 0x000060, "Member 'MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x000061, "Member 'MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x000062, "Member 'MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem, CallFunc_PlaySE_ReturnValue_1) == 0x000064, "Member 'MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");

// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_DividedZoneListItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_DividedZoneListItem_C_PreConstruct) == 0x000001, "Wrong alignment on MapWidget_DividedZoneListItem_C_PreConstruct");
static_assert(sizeof(MapWidget_DividedZoneListItem_C_PreConstruct) == 0x000001, "Wrong size on MapWidget_DividedZoneListItem_C_PreConstruct");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MapWidget_DividedZoneListItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.Setup
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_DividedZoneListItem_C_Setup final
{
public:
	class FString                                 InDividedZoneId;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetZoneShortNameByZoneId_ReturnValue;     // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(MapWidget_DividedZoneListItem_C_Setup) == 0x000008, "Wrong alignment on MapWidget_DividedZoneListItem_C_Setup");
static_assert(sizeof(MapWidget_DividedZoneListItem_C_Setup) == 0x000040, "Wrong size on MapWidget_DividedZoneListItem_C_Setup");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_Setup, InDividedZoneId) == 0x000000, "Member 'MapWidget_DividedZoneListItem_C_Setup::InDividedZoneId' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_Setup, CallFunc_Conv_StringToName_ReturnValue) == 0x000010, "Member 'MapWidget_DividedZoneListItem_C_Setup::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_Setup, CallFunc_GetZoneShortNameByZoneId_ReturnValue) == 0x000018, "Member 'MapWidget_DividedZoneListItem_C_Setup::CallFunc_GetZoneShortNameByZoneId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'MapWidget_DividedZoneListItem_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.SetIsEnable
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_DividedZoneListItem_C_SetIsEnable final
{
public:
	bool                                          InIsSelectable;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_DividedZoneListItem_C_SetIsEnable) == 0x000001, "Wrong alignment on MapWidget_DividedZoneListItem_C_SetIsEnable");
static_assert(sizeof(MapWidget_DividedZoneListItem_C_SetIsEnable) == 0x000001, "Wrong size on MapWidget_DividedZoneListItem_C_SetIsEnable");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetIsEnable, InIsSelectable) == 0x000000, "Member 'MapWidget_DividedZoneListItem_C_SetIsEnable::InIsSelectable' has a wrong offset!");

// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.SetSelected
// 0x0710 (0x0710 - 0x0000)
struct MapWidget_DividedZoneListItem_C_SetSelected final
{
public:
	bool                                          InIsSelected;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F82[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            TmpPressedButtonStyle;                             // 0x0008(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            TmpHoveredButtonStyle;                             // 0x0090(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            TmpNormalButtonStyle;                              // 0x0118(0x0088)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F83[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x01A8(0x0278)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0420(0x0278)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0698(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x06C0(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x06E8(0x0028)()
};
static_assert(alignof(MapWidget_DividedZoneListItem_C_SetSelected) == 0x000008, "Wrong alignment on MapWidget_DividedZoneListItem_C_SetSelected");
static_assert(sizeof(MapWidget_DividedZoneListItem_C_SetSelected) == 0x000710, "Wrong size on MapWidget_DividedZoneListItem_C_SetSelected");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, InIsSelected) == 0x000000, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::InIsSelected' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, TmpPressedButtonStyle) == 0x000008, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::TmpPressedButtonStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, TmpHoveredButtonStyle) == 0x000090, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::TmpHoveredButtonStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, TmpNormalButtonStyle) == 0x000118, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::TmpNormalButtonStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, Temp_bool_Variable) == 0x0001A0, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, K2Node_MakeStruct_ButtonStyle) == 0x0001A8, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x000420, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, K2Node_MakeStruct_SlateColor) == 0x000698, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, K2Node_MakeStruct_SlateColor_1) == 0x0006C0, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneListItem_C_SetSelected, K2Node_Select_Default) == 0x0006E8, "Member 'MapWidget_DividedZoneListItem_C_SetSelected::K2Node_Select_Default' has a wrong offset!");

}

