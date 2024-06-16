#pragma once

 

// Package: WholeMapWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WholeMapWidget.WholeMapWidget_C.ExecuteUbergraph_WholeMapWidget
// 0x0298 (0x0298 - 0x0000)
struct WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_744F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7450[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7451[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7452[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7453[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7454[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0090(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7455[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Zoom;                           // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value_1;                        // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetEditZoom_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetEditOpacity_ReturnValue;               // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7456[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Value;                          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Number;                         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetEditIconSizeScale_ReturnValue;         // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetEditWindowSizeScaleIndex_ReturnValue;  // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7457[0x1];                                     // 0x00B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetEditOpacity_ReturnValue;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEditZoom_ReturnValue;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEditIconSizeScale_ReturnValue;         // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEditPinVisible_ReturnValue;            // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isChecked;                      // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetEditPinVisible_ReturnValue;            // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7458[0x1];                                     // 0x00D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float Value)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Value)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Value)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Number)>                 K2Node_CreateDelegate_OutputDelegate_6;            // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0138(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsOn)>                    K2Node_CreateDelegate_OutputDelegate_10;           // 0x0148(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x0168(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Value)>                  K2Node_CreateDelegate_OutputDelegate_13;           // 0x0178(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Value)>                  K2Node_CreateDelegate_OutputDelegate_14;           // 0x0188(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Value)>                  K2Node_CreateDelegate_OutputDelegate_15;           // 0x0198(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Number)>                 K2Node_CreateDelegate_OutputDelegate_16;           // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsOn)>                    K2Node_CreateDelegate_OutputDelegate_17;           // 0x01B8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_18;           // 0x01C8(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isEditWholeMap_ReturnValue;               // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7459[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_2;       // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isEditWholeMap_ReturnValue_1;             // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_745A[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_3;       // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ResetEditParam_ReturnValue;               // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_745B[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEditWindowSizeScaleIndex_ReturnValue;  // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0210(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 CallFunc_GetBGConfig_ReturnValue;                  // 0x0218(0x0078)(ConstParm)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget) == 0x000008, "Wrong alignment on WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget");
static_assert(sizeof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget) == 0x000298, "Wrong size on WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, EntryPoint) == 0x000000, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, Temp_bool_Variable) == 0x000004, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, Temp_byte_Variable) == 0x000018, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, Temp_byte_Variable_1) == 0x000019, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_Loaded) == 0x000020, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, Temp_object_Variable) == 0x000028, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_DynamicCast_AsTexture_2D) == 0x000030, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000040, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_InUIType) == 0x000048, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_bInVisibility) == 0x000049, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_bInInstantly) == 0x00004A, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000050, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000058, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_Select_Default) == 0x000059, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetSBPlayerController_ReturnValue) == 0x000060, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000080, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000088, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_RetCode) == 0x000090, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_IsValid_ReturnValue_1) == 0x000094, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x000098, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_Zoom) == 0x0000A0, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_Zoom' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_Value_1) == 0x0000A4, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_Value_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_SetEditZoom_ReturnValue) == 0x0000A8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_SetEditZoom_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_SetEditOpacity_ReturnValue) == 0x0000A9, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_SetEditOpacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_Value) == 0x0000AC, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_Number) == 0x0000B0, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_Number' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_SetEditIconSizeScale_ReturnValue) == 0x0000B4, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_SetEditIconSizeScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_SetEditWindowSizeScaleIndex_ReturnValue) == 0x0000B5, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_SetEditWindowSizeScaleIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_IsValid_ReturnValue_2) == 0x0000B6, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000B8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetEditOpacity_ReturnValue) == 0x0000C8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetEditOpacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetEditZoom_ReturnValue) == 0x0000CC, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetEditZoom_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetEditIconSizeScale_ReturnValue) == 0x0000D0, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetEditIconSizeScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetEditPinVisible_ReturnValue) == 0x0000D4, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetEditPinVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CustomEvent_isChecked) == 0x0000D5, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CustomEvent_isChecked' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_SetEditPinVisible_ReturnValue) == 0x0000D6, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_SetEditPinVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000D8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000E8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000F8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_6) == 0x000108, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_7) == 0x000118, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_8) == 0x000128, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_9) == 0x000138, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_10) == 0x000148, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_11) == 0x000158, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_12) == 0x000168, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_13) == 0x000178, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_14) == 0x000188, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_15) == 0x000198, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_16) == 0x0001A8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_17) == 0x0001B8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_CreateDelegate_OutputDelegate_18) == 0x0001C8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0001D8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x0001E0, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_isEditWholeMap_ReturnValue) == 0x0001E8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_isEditWholeMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetSBPlayerCharacter_ReturnValue_2) == 0x0001F0, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetSBPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_isEditWholeMap_ReturnValue_1) == 0x0001F8, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_isEditWholeMap_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetSBPlayerCharacter_ReturnValue_3) == 0x000200, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetSBPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_ResetEditParam_ReturnValue) == 0x000208, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_ResetEditParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetEditWindowSizeScaleIndex_ReturnValue) == 0x00020C, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetEditWindowSizeScaleIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, K2Node_Event_Animation) == 0x000210, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_GetBGConfig_ReturnValue) == 0x000218, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_GetBGConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000290, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000291, "Member 'WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WholeMapWidget_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapWidget_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WholeMapWidget_C_OnAnimationFinished");
static_assert(sizeof(WholeMapWidget_C_OnAnimationFinished) == 0x000008, "Wrong size on WholeMapWidget_C_OnAnimationFinished");
static_assert(offsetof(WholeMapWidget_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WholeMapWidget_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnPinChecked
// 0x0001 (0x0001 - 0x0000)
struct WholeMapWidget_C_OnPinChecked final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapWidget_C_OnPinChecked) == 0x000001, "Wrong alignment on WholeMapWidget_C_OnPinChecked");
static_assert(sizeof(WholeMapWidget_C_OnPinChecked) == 0x000001, "Wrong size on WholeMapWidget_C_OnPinChecked");
static_assert(offsetof(WholeMapWidget_C_OnPinChecked, IsChecked) == 0x000000, "Member 'WholeMapWidget_C_OnPinChecked::IsChecked' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnWindowSizeChanged
// 0x0004 (0x0004 - 0x0000)
struct WholeMapWidget_C_OnWindowSizeChanged final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapWidget_C_OnWindowSizeChanged) == 0x000004, "Wrong alignment on WholeMapWidget_C_OnWindowSizeChanged");
static_assert(sizeof(WholeMapWidget_C_OnWindowSizeChanged) == 0x000004, "Wrong size on WholeMapWidget_C_OnWindowSizeChanged");
static_assert(offsetof(WholeMapWidget_C_OnWindowSizeChanged, Number) == 0x000000, "Member 'WholeMapWidget_C_OnWindowSizeChanged::Number' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnIconSizeChanged
// 0x0004 (0x0004 - 0x0000)
struct WholeMapWidget_C_OnIconSizeChanged final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapWidget_C_OnIconSizeChanged) == 0x000004, "Wrong alignment on WholeMapWidget_C_OnIconSizeChanged");
static_assert(sizeof(WholeMapWidget_C_OnIconSizeChanged) == 0x000004, "Wrong size on WholeMapWidget_C_OnIconSizeChanged");
static_assert(offsetof(WholeMapWidget_C_OnIconSizeChanged, Value) == 0x000000, "Member 'WholeMapWidget_C_OnIconSizeChanged::Value' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnBGAlphaChanged
// 0x0004 (0x0004 - 0x0000)
struct WholeMapWidget_C_OnBGAlphaChanged final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapWidget_C_OnBGAlphaChanged) == 0x000004, "Wrong alignment on WholeMapWidget_C_OnBGAlphaChanged");
static_assert(sizeof(WholeMapWidget_C_OnBGAlphaChanged) == 0x000004, "Wrong size on WholeMapWidget_C_OnBGAlphaChanged");
static_assert(offsetof(WholeMapWidget_C_OnBGAlphaChanged, Value) == 0x000000, "Member 'WholeMapWidget_C_OnBGAlphaChanged::Value' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnZoom
// 0x0004 (0x0004 - 0x0000)
struct WholeMapWidget_C_OnZoom final
{
public:
	float                                         Zoom;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapWidget_C_OnZoom) == 0x000004, "Wrong alignment on WholeMapWidget_C_OnZoom");
static_assert(sizeof(WholeMapWidget_C_OnZoom) == 0x000004, "Wrong size on WholeMapWidget_C_OnZoom");
static_assert(offsetof(WholeMapWidget_C_OnZoom, Zoom) == 0x000000, "Member 'WholeMapWidget_C_OnZoom::Zoom' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.UpdateTraverse
// 0x0004 (0x0004 - 0x0000)
struct WholeMapWidget_C_UpdateTraverse final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapWidget_C_UpdateTraverse) == 0x000004, "Wrong alignment on WholeMapWidget_C_UpdateTraverse");
static_assert(sizeof(WholeMapWidget_C_UpdateTraverse) == 0x000004, "Wrong size on WholeMapWidget_C_UpdateTraverse");
static_assert(offsetof(WholeMapWidget_C_UpdateTraverse, RetCode) == 0x000000, "Member 'WholeMapWidget_C_UpdateTraverse::RetCode' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnLoaded_2CCDB2684036170C3D919597C7222B2A
// 0x0008 (0x0008 - 0x0000)
struct WholeMapWidget_C_OnLoaded_2CCDB2684036170C3D919597C7222B2A final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapWidget_C_OnLoaded_2CCDB2684036170C3D919597C7222B2A) == 0x000008, "Wrong alignment on WholeMapWidget_C_OnLoaded_2CCDB2684036170C3D919597C7222B2A");
static_assert(sizeof(WholeMapWidget_C_OnLoaded_2CCDB2684036170C3D919597C7222B2A) == 0x000008, "Wrong size on WholeMapWidget_C_OnLoaded_2CCDB2684036170C3D919597C7222B2A");
static_assert(offsetof(WholeMapWidget_C_OnLoaded_2CCDB2684036170C3D919597C7222B2A, Loaded) == 0x000000, "Member 'WholeMapWidget_C_OnLoaded_2CCDB2684036170C3D919597C7222B2A::Loaded' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnCreateWholeMapEditWindow
// 0x0028 (0x0028 - 0x0000)
struct WholeMapWidget_C_OnCreateWholeMapEditWindow final
{
public:
	int32                                         CallFunc_GetEditWindowSizeScaleIndex_ReturnValue;  // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEditOpacity_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEditIconSizeScale_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEditZoom_ReturnValue;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEditPinVisible_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_745C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapEditWindow_C*                       CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapWidget_C_OnCreateWholeMapEditWindow) == 0x000008, "Wrong alignment on WholeMapWidget_C_OnCreateWholeMapEditWindow");
static_assert(sizeof(WholeMapWidget_C_OnCreateWholeMapEditWindow) == 0x000028, "Wrong size on WholeMapWidget_C_OnCreateWholeMapEditWindow");
static_assert(offsetof(WholeMapWidget_C_OnCreateWholeMapEditWindow, CallFunc_GetEditWindowSizeScaleIndex_ReturnValue) == 0x000000, "Member 'WholeMapWidget_C_OnCreateWholeMapEditWindow::CallFunc_GetEditWindowSizeScaleIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnCreateWholeMapEditWindow, CallFunc_GetEditOpacity_ReturnValue) == 0x000004, "Member 'WholeMapWidget_C_OnCreateWholeMapEditWindow::CallFunc_GetEditOpacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnCreateWholeMapEditWindow, CallFunc_GetEditIconSizeScale_ReturnValue) == 0x000008, "Member 'WholeMapWidget_C_OnCreateWholeMapEditWindow::CallFunc_GetEditIconSizeScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnCreateWholeMapEditWindow, CallFunc_GetEditZoom_ReturnValue) == 0x00000C, "Member 'WholeMapWidget_C_OnCreateWholeMapEditWindow::CallFunc_GetEditZoom_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnCreateWholeMapEditWindow, CallFunc_GetEditPinVisible_ReturnValue) == 0x000010, "Member 'WholeMapWidget_C_OnCreateWholeMapEditWindow::CallFunc_GetEditPinVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnCreateWholeMapEditWindow, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WholeMapWidget_C_OnCreateWholeMapEditWindow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnCreateWholeMapEditWindow, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WholeMapWidget_C_OnCreateWholeMapEditWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnDeleteWholeMapEditWindow
// 0x0001 (0x0001 - 0x0000)
struct WholeMapWidget_C_OnDeleteWholeMapEditWindow final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapWidget_C_OnDeleteWholeMapEditWindow) == 0x000001, "Wrong alignment on WholeMapWidget_C_OnDeleteWholeMapEditWindow");
static_assert(sizeof(WholeMapWidget_C_OnDeleteWholeMapEditWindow) == 0x000001, "Wrong size on WholeMapWidget_C_OnDeleteWholeMapEditWindow");
static_assert(offsetof(WholeMapWidget_C_OnDeleteWholeMapEditWindow, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WholeMapWidget_C_OnDeleteWholeMapEditWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.OnSetOptionEditMode
// 0x0006 (0x0006 - 0x0000)
struct WholeMapWidget_C_OnSetOptionEditMode final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOptionEdit_ReturnValue;                 // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapWidget_C_OnSetOptionEditMode) == 0x000001, "Wrong alignment on WholeMapWidget_C_OnSetOptionEditMode");
static_assert(sizeof(WholeMapWidget_C_OnSetOptionEditMode) == 0x000006, "Wrong size on WholeMapWidget_C_OnSetOptionEditMode");
static_assert(offsetof(WholeMapWidget_C_OnSetOptionEditMode, Temp_bool_Variable) == 0x000000, "Member 'WholeMapWidget_C_OnSetOptionEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnSetOptionEditMode, Temp_byte_Variable) == 0x000001, "Member 'WholeMapWidget_C_OnSetOptionEditMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnSetOptionEditMode, Temp_byte_Variable_1) == 0x000002, "Member 'WholeMapWidget_C_OnSetOptionEditMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnSetOptionEditMode, CallFunc_IsOptionEdit_ReturnValue) == 0x000003, "Member 'WholeMapWidget_C_OnSetOptionEditMode::CallFunc_IsOptionEdit_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnSetOptionEditMode, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WholeMapWidget_C_OnSetOptionEditMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_OnSetOptionEditMode, K2Node_Select_Default) == 0x000005, "Member 'WholeMapWidget_C_OnSetOptionEditMode::K2Node_Select_Default' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.PlayAnimIn
// 0x0018 (0x0018 - 0x0000)
struct WholeMapWidget_C_PlayAnimIn final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_745D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapWidget_C_PlayAnimIn) == 0x000008, "Wrong alignment on WholeMapWidget_C_PlayAnimIn");
static_assert(sizeof(WholeMapWidget_C_PlayAnimIn) == 0x000018, "Wrong size on WholeMapWidget_C_PlayAnimIn");
static_assert(offsetof(WholeMapWidget_C_PlayAnimIn, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WholeMapWidget_C_PlayAnimIn::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_PlayAnimIn, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'WholeMapWidget_C_PlayAnimIn::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_PlayAnimIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WholeMapWidget_C_PlayAnimIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_PlayAnimIn, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'WholeMapWidget_C_PlayAnimIn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.PlayAnimOut
// 0x0018 (0x0018 - 0x0000)
struct WholeMapWidget_C_PlayAnimOut final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_745E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapWidget_C_PlayAnimOut) == 0x000008, "Wrong alignment on WholeMapWidget_C_PlayAnimOut");
static_assert(sizeof(WholeMapWidget_C_PlayAnimOut) == 0x000018, "Wrong size on WholeMapWidget_C_PlayAnimOut");
static_assert(offsetof(WholeMapWidget_C_PlayAnimOut, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WholeMapWidget_C_PlayAnimOut::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_PlayAnimOut, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'WholeMapWidget_C_PlayAnimOut::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_PlayAnimOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WholeMapWidget_C_PlayAnimOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_PlayAnimOut, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'WholeMapWidget_C_PlayAnimOut::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WholeMapWidget.WholeMapWidget_C.SetDebugTraverseList
// 0x0005 (0x0005 - 0x0000)
struct WholeMapWidget_C_SetDebugTraverseList final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTraverseDebug_ReturnValue;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapWidget_C_SetDebugTraverseList) == 0x000001, "Wrong alignment on WholeMapWidget_C_SetDebugTraverseList");
static_assert(sizeof(WholeMapWidget_C_SetDebugTraverseList) == 0x000005, "Wrong size on WholeMapWidget_C_SetDebugTraverseList");
static_assert(offsetof(WholeMapWidget_C_SetDebugTraverseList, Temp_byte_Variable) == 0x000000, "Member 'WholeMapWidget_C_SetDebugTraverseList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_SetDebugTraverseList, Temp_byte_Variable_1) == 0x000001, "Member 'WholeMapWidget_C_SetDebugTraverseList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_SetDebugTraverseList, Temp_bool_Variable) == 0x000002, "Member 'WholeMapWidget_C_SetDebugTraverseList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_SetDebugTraverseList, CallFunc_IsTraverseDebug_ReturnValue) == 0x000003, "Member 'WholeMapWidget_C_SetDebugTraverseList::CallFunc_IsTraverseDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapWidget_C_SetDebugTraverseList, K2Node_Select_Default) == 0x000004, "Member 'WholeMapWidget_C_SetDebugTraverseList::K2Node_Select_Default' has a wrong offset!");

}

