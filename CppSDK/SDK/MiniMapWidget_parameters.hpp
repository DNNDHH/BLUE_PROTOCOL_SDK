#pragma once

 

// Package: MiniMapWidget

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MiniMapWidget.MiniMapWidget_C.ExecuteUbergraph_MiniMapWidget
// 0x0128 (0x0128 - 0x0000)
struct MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6593[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6594[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6595[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6596[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6597[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6598[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 CallFunc_GetBGConfig_ReturnValue;                  // 0x0098(0x0078)(ConstParm)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_5;           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_6;           // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget) == 0x000008, "Wrong alignment on MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget");
static_assert(sizeof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget) == 0x000128, "Wrong size on MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, EntryPoint) == 0x000000, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, Temp_bool_Variable) == 0x000020, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, Temp_byte_Variable) == 0x000021, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, Temp_byte_Variable_1) == 0x000022, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_CustomEvent_Loaded) == 0x000028, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, Temp_object_Variable) == 0x000030, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_DynamicCast_AsTexture_2D) == 0x000038, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000048, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_CustomEvent_InUIType) == 0x000050, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_CustomEvent_bInVisibility) == 0x000051, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_CustomEvent_bInInstantly) == 0x000052, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000053, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_Select_Default) == 0x000054, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000058, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000060, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, K2Node_Event_IsDesignTime) == 0x000070, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000074, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000080, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000088, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000090, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_GetBGConfig_ReturnValue) == 0x000098, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_GetBGConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000110, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_SlotAsCanvasSlot_ReturnValue_5) == 0x000118, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_SlotAsCanvasSlot_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget, CallFunc_SlotAsCanvasSlot_ReturnValue_6) == 0x000120, "Member 'MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget::CallFunc_SlotAsCanvasSlot_ReturnValue_6' has a wrong offset!");

// Function MiniMapWidget.MiniMapWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MiniMapWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapWidget_C_PreConstruct) == 0x000001, "Wrong alignment on MiniMapWidget_C_PreConstruct");
static_assert(sizeof(MiniMapWidget_C_PreConstruct) == 0x000001, "Wrong size on MiniMapWidget_C_PreConstruct");
static_assert(offsetof(MiniMapWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MiniMapWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MiniMapWidget.MiniMapWidget_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function MiniMapWidget.MiniMapWidget_C.OnLoaded_DA7A4A034051FF2A21620C9351A36972
// 0x0008 (0x0008 - 0x0000)
struct MiniMapWidget_C_OnLoaded_DA7A4A034051FF2A21620C9351A36972 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapWidget_C_OnLoaded_DA7A4A034051FF2A21620C9351A36972) == 0x000008, "Wrong alignment on MiniMapWidget_C_OnLoaded_DA7A4A034051FF2A21620C9351A36972");
static_assert(sizeof(MiniMapWidget_C_OnLoaded_DA7A4A034051FF2A21620C9351A36972) == 0x000008, "Wrong size on MiniMapWidget_C_OnLoaded_DA7A4A034051FF2A21620C9351A36972");
static_assert(offsetof(MiniMapWidget_C_OnLoaded_DA7A4A034051FF2A21620C9351A36972, Loaded) == 0x000000, "Member 'MiniMapWidget_C_OnLoaded_DA7A4A034051FF2A21620C9351A36972::Loaded' has a wrong offset!");

}

