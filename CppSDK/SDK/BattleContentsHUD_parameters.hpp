#pragma once

 

// Package: BattleContentsHUD

#include "Basic.hpp"

#include "BattleContentsStruct_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BattleContentsHUD.BattleContentsHUD_C.ExecuteUbergraph_BattleContentsHUD
// 0x01E8 (0x01E8 - 0x0000)
struct BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6284[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6285[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_GetObj_Path;                              // 0x0060(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6286[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBattleContentsStruct                  CallFunc_Array_Get_Item;                           // 0x0098(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6287[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6288[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           K2Node_DynamicCast_AsCanvas_Panel;                 // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_ReturnValue_1;                   // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EBattleContentsHUDType                        K2Node_CustomEvent_Type;                           // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6289[0x1];                                     // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_628A[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_628B[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           K2Node_DynamicCast_AsCanvas_Panel_1;               // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_628C[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_628D[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0124(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_628E[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_628F[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6290[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowLoadingScreen_ReturnValue;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6291[0x6];                                     // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_CheckDxBattleStart_TrueIsStarted;         // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6292[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_1;                             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6293[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget_1;           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6294[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_1;                     // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x01B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6295[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDxBattleHUD*                         K2Node_DynamicCast_AsSBDx_Battle_HUD;              // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6296[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD) == 0x000008, "Wrong alignment on BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD");
static_assert(sizeof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD) == 0x0001E8, "Wrong size on BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, EntryPoint) == 0x000000, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CustomEvent_Loaded_1) == 0x000008, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, Temp_int_Variable) == 0x000014, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, Temp_int_Loop_Counter_Variable_1) == 0x000030, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Add_IntInt_ReturnValue_2) == 0x000034, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, Temp_int_Array_Index_Variable_1) == 0x000038, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_Event_IsDesignTime) == 0x00004C, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_IsEditor_ReturnValue) == 0x00004D, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000050, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CustomEvent_InUIType) == 0x000058, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CustomEvent_bInVisibility) == 0x000059, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CustomEvent_bInInstantly) == 0x00005A, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_GetObj_Path) == 0x000060, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_GetObj_Path' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000090, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Array_Get_Item) == 0x000098, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_GetWidgetAtIndex_ReturnValue) == 0x0000D0, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_GetWidgetAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000D8, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_DynamicCast_AsCanvas_Panel) == 0x0000E0, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_DynamicCast_AsCanvas_Panel' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_IsEditor_ReturnValue_1) == 0x0000E9, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_IsEditor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CustomEvent_Type) == 0x0000EA, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000EC, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_SwitchEnum_CmpSuccess) == 0x0000FC, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, Temp_int_Variable_1) == 0x000100, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_GetChildAt_ReturnValue) == 0x000108, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_DynamicCast_AsCanvas_Panel_1) == 0x000110, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_DynamicCast_AsCanvas_Panel_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_DynamicCast_bSuccess_1) == 0x000118, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_GetChildrenCount_ReturnValue) == 0x00011C, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000120, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x000124, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, Temp_class_Variable) == 0x000138, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000140, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_ClassDynamicCast_bSuccess) == 0x000148, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Create_ReturnValue) == 0x000150, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_IsValid_ReturnValue) == 0x000158, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_AddChild_ReturnValue) == 0x000160, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_IsShowLoadingScreen_ReturnValue) == 0x000168, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_IsShowLoadingScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Not_PreBool_ReturnValue) == 0x000169, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_CustomEvent_Loaded) == 0x000170, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_CheckDxBattleStart_TrueIsStarted) == 0x000178, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_CheckDxBattleStart_TrueIsStarted' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000179, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, Temp_class_Variable_1) == 0x000180, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000188, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_ClassDynamicCast_AsUser_Widget_1) == 0x000190, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_ClassDynamicCast_AsUser_Widget_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_ClassDynamicCast_bSuccess_1) == 0x000198, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Create_ReturnValue_1) == 0x0001A0, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_AddChild_ReturnValue_1) == 0x0001A8, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_GetAllChildren_ReturnValue) == 0x0001B0, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_IsValid_ReturnValue_1) == 0x0001C0, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Array_Get_Item_1) == 0x0001C8, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_DynamicCast_AsSBDx_Battle_HUD) == 0x0001D0, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_DynamicCast_AsSBDx_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, K2Node_DynamicCast_bSuccess_2) == 0x0001D8, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Array_Length_ReturnValue_1) == 0x0001DC, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001E0, "Member 'BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.MakeHUDEvent
// 0x0001 (0x0001 - 0x0000)
struct BattleContentsHUD_C_MakeHUDEvent final
{
public:
	EBattleContentsHUDType                        Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleContentsHUD_C_MakeHUDEvent) == 0x000001, "Wrong alignment on BattleContentsHUD_C_MakeHUDEvent");
static_assert(sizeof(BattleContentsHUD_C_MakeHUDEvent) == 0x000001, "Wrong size on BattleContentsHUD_C_MakeHUDEvent");
static_assert(offsetof(BattleContentsHUD_C_MakeHUDEvent, Type) == 0x000000, "Member 'BattleContentsHUD_C_MakeHUDEvent::Type' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.ChangeVisible
// 0x0003 (0x0003 - 0x0000)
struct BattleContentsHUD_C_ChangeVisible final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleContentsHUD_C_ChangeVisible) == 0x000001, "Wrong alignment on BattleContentsHUD_C_ChangeVisible");
static_assert(sizeof(BattleContentsHUD_C_ChangeVisible) == 0x000003, "Wrong size on BattleContentsHUD_C_ChangeVisible");
static_assert(offsetof(BattleContentsHUD_C_ChangeVisible, InUIType) == 0x000000, "Member 'BattleContentsHUD_C_ChangeVisible::InUIType' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ChangeVisible, bInVisibility) == 0x000001, "Member 'BattleContentsHUD_C_ChangeVisible::bInVisibility' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ChangeVisible, bInInstantly) == 0x000002, "Member 'BattleContentsHUD_C_ChangeVisible::bInInstantly' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BattleContentsHUD_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleContentsHUD_C_PreConstruct) == 0x000001, "Wrong alignment on BattleContentsHUD_C_PreConstruct");
static_assert(sizeof(BattleContentsHUD_C_PreConstruct) == 0x000001, "Wrong size on BattleContentsHUD_C_PreConstruct");
static_assert(offsetof(BattleContentsHUD_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BattleContentsHUD_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35
// 0x0008 (0x0008 - 0x0000)
struct BattleContentsHUD_C_OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BattleContentsHUD_C_OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35) == 0x000008, "Wrong alignment on BattleContentsHUD_C_OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35");
static_assert(sizeof(BattleContentsHUD_C_OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35) == 0x000008, "Wrong size on BattleContentsHUD_C_OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35");
static_assert(offsetof(BattleContentsHUD_C_OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35, Loaded) == 0x000000, "Member 'BattleContentsHUD_C_OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35::Loaded' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.OnLoaded_6DF30A834378AD2EA639D79963E4E40F
// 0x0008 (0x0008 - 0x0000)
struct BattleContentsHUD_C_OnLoaded_6DF30A834378AD2EA639D79963E4E40F final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BattleContentsHUD_C_OnLoaded_6DF30A834378AD2EA639D79963E4E40F) == 0x000008, "Wrong alignment on BattleContentsHUD_C_OnLoaded_6DF30A834378AD2EA639D79963E4E40F");
static_assert(sizeof(BattleContentsHUD_C_OnLoaded_6DF30A834378AD2EA639D79963E4E40F) == 0x000008, "Wrong size on BattleContentsHUD_C_OnLoaded_6DF30A834378AD2EA639D79963E4E40F");
static_assert(offsetof(BattleContentsHUD_C_OnLoaded_6DF30A834378AD2EA639D79963E4E40F, Loaded) == 0x000000, "Member 'BattleContentsHUD_C_OnLoaded_6DF30A834378AD2EA639D79963E4E40F::Loaded' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.GetObj
// 0x00A0 (0x00A0 - 0x0000)
struct BattleContentsHUD_C_GetObj final
{
public:
	EBattleContentsHUDType                        Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6297[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Path;                                              // 0x0008(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   Ret;                                               // 0x0030(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBattleContentsStruct                  CallFunc_Array_Get_Item;                           // 0x0068(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleContentsHUD_C_GetObj) == 0x000008, "Wrong alignment on BattleContentsHUD_C_GetObj");
static_assert(sizeof(BattleContentsHUD_C_GetObj) == 0x0000A0, "Wrong size on BattleContentsHUD_C_GetObj");
static_assert(offsetof(BattleContentsHUD_C_GetObj, Type) == 0x000000, "Member 'BattleContentsHUD_C_GetObj::Type' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetObj, Path) == 0x000008, "Member 'BattleContentsHUD_C_GetObj::Path' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetObj, Ret) == 0x000030, "Member 'BattleContentsHUD_C_GetObj::Ret' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetObj, Temp_int_Array_Index_Variable) == 0x000058, "Member 'BattleContentsHUD_C_GetObj::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetObj, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'BattleContentsHUD_C_GetObj::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetObj, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'BattleContentsHUD_C_GetObj::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetObj, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'BattleContentsHUD_C_GetObj::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetObj, CallFunc_Array_Get_Item) == 0x000068, "Member 'BattleContentsHUD_C_GetObj::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetObj, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'BattleContentsHUD_C_GetObj::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetObj, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000099, "Member 'BattleContentsHUD_C_GetObj::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.SetupHUD
// 0x0320 (0x0320 - 0x0000)
struct BattleContentsHUD_C_SetupHUD final
{
public:
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDhcBattleDebugMode_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameModeKwmBattle_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidSksBattle_ReturnValue;               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidSksBattle_ReturnValue_1;             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidDxBattle_ReturnValue;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6298[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_DungeonTimeAttack*         K2Node_DynamicCast_AsSBGame_State_Dungeon_Time_Attack; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6299[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_2;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_DxBattle*                  K2Node_DynamicCast_AsSBGame_State_Dx_Battle;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_629A[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_BattleArena*               K2Node_DynamicCast_AsSBGame_State_Battle_Arena;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_629B[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_3;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_4;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_RaidBattle*                K2Node_DynamicCast_AsSBGame_State_Raid_Battle;     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_629C[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_TowerSurvival*             K2Node_DynamicCast_AsSBGame_State_Tower_Survival;  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_629D[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_5;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidKiwami_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_629E[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_DungeonScoreAttack*        K2Node_DynamicCast_AsSBGame_State_Dungeon_Score_Attack; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_629F[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue_1;    // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62A0[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapLevelInfo                        CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo;   // 0x00B0(0x0080)()
	bool                                          CallFunc_GetCurrentMapLevelInfo_ReturnValue;       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62A1[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfoByGameContentId_OutMapInfo;     // 0x0138(0x01E0)()
	bool                                          CallFunc_GetMapInfoByGameContentId_ReturnValue;    // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x031A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x031B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x031D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x031E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleContentsHUD_C_SetupHUD) == 0x000010, "Wrong alignment on BattleContentsHUD_C_SetupHUD");
static_assert(sizeof(BattleContentsHUD_C_SetupHUD) == 0x000320, "Wrong size on BattleContentsHUD_C_SetupHUD");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x000000, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_IsDhcBattleDebugMode_ReturnValue) == 0x000008, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_IsDhcBattleDebugMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_IsGameModeKwmBattle_ReturnValue) == 0x000009, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_IsGameModeKwmBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_ValidSksBattle_ReturnValue) == 0x00000A, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_ValidSksBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_ValidSksBattle_ReturnValue_1) == 0x00000B, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_ValidSksBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_ValidDxBattle_ReturnValue) == 0x00000C, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_ValidDxBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_AsSBGame_State_Dungeon_Time_Attack) == 0x000018, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_AsSBGame_State_Dungeon_Time_Attack' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetGameState_ReturnValue_1) == 0x000028, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetGameState_ReturnValue_2) == 0x000030, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetGameState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_AsSBGame_State_Dx_Battle) == 0x000038, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_AsSBGame_State_Dx_Battle' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_AsSBGame_State_Battle_Arena) == 0x000048, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_AsSBGame_State_Battle_Arena' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetGameState_ReturnValue_3) == 0x000058, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetGameState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetGameState_ReturnValue_4) == 0x000060, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetGameState_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_AsSBGame_State_Raid_Battle) == 0x000068, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_AsSBGame_State_Raid_Battle' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_bSuccess_3) == 0x000070, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_AsSBGame_State_Tower_Survival) == 0x000078, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_AsSBGame_State_Tower_Survival' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_bSuccess_4) == 0x000080, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetGameState_ReturnValue_5) == 0x000088, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetGameState_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_ValidKiwami_ReturnValue) == 0x000090, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_ValidKiwami_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_AsSBGame_State_Dungeon_Score_Attack) == 0x000098, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_AsSBGame_State_Dungeon_Score_Attack' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, K2Node_DynamicCast_bSuccess_5) == 0x0000A0, "Member 'BattleContentsHUD_C_SetupHUD::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetCurrentGameContentId_ReturnValue_1) == 0x0000A4, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetCurrentGameContentId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo) == 0x0000B0, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetCurrentMapLevelInfo_ReturnValue) == 0x000130, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetCurrentMapLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetMapInfoByGameContentId_OutMapInfo) == 0x000138, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetMapInfoByGameContentId_OutMapInfo' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_GetMapInfoByGameContentId_ReturnValue) == 0x000318, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_GetMapInfoByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000319, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00031A, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00031B, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00031C, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_BooleanOR_ReturnValue) == 0x00031D, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetupHUD, CallFunc_BooleanOR_ReturnValue_1) == 0x00031E, "Member 'BattleContentsHUD_C_SetupHUD::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.OnInitialize
// 0x0018 (0x0018 - 0x0000)
struct BattleContentsHUD_C_OnInitialize final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62A2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleContentsHUD_C_OnInitialize) == 0x000008, "Wrong alignment on BattleContentsHUD_C_OnInitialize");
static_assert(sizeof(BattleContentsHUD_C_OnInitialize) == 0x000018, "Wrong size on BattleContentsHUD_C_OnInitialize");
static_assert(offsetof(BattleContentsHUD_C_OnInitialize, Temp_bool_Variable) == 0x000000, "Member 'BattleContentsHUD_C_OnInitialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_OnInitialize, Temp_byte_Variable) == 0x000001, "Member 'BattleContentsHUD_C_OnInitialize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_OnInitialize, Temp_byte_Variable_1) == 0x000002, "Member 'BattleContentsHUD_C_OnInitialize::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_OnInitialize, CallFunc_IsEditor_ReturnValue) == 0x000003, "Member 'BattleContentsHUD_C_OnInitialize::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_OnInitialize, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000008, "Member 'BattleContentsHUD_C_OnInitialize::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_OnInitialize, CallFunc_GetVisibleSetting_ReturnValue) == 0x000010, "Member 'BattleContentsHUD_C_OnInitialize::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_OnInitialize, K2Node_Select_Default) == 0x000011, "Member 'BattleContentsHUD_C_OnInitialize::K2Node_Select_Default' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.GetNowContentsHUD
// 0x0028 (0x0028 - 0x0000)
struct BattleContentsHUD_C_GetNowContentsHUD final
{
public:
	EBattleContentsHUDType                        Type;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62A3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBContentsHUDBase*                     HUD;                                               // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBContentsHUDBase*                     K2Node_DynamicCast_AsSBContents_HUDBase;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleContentsHUD_C_GetNowContentsHUD) == 0x000008, "Wrong alignment on BattleContentsHUD_C_GetNowContentsHUD");
static_assert(sizeof(BattleContentsHUD_C_GetNowContentsHUD) == 0x000028, "Wrong size on BattleContentsHUD_C_GetNowContentsHUD");
static_assert(offsetof(BattleContentsHUD_C_GetNowContentsHUD, Type) == 0x000000, "Member 'BattleContentsHUD_C_GetNowContentsHUD::Type' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetNowContentsHUD, HUD) == 0x000008, "Member 'BattleContentsHUD_C_GetNowContentsHUD::HUD' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetNowContentsHUD, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'BattleContentsHUD_C_GetNowContentsHUD::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetNowContentsHUD, K2Node_DynamicCast_AsSBContents_HUDBase) == 0x000018, "Member 'BattleContentsHUD_C_GetNowContentsHUD::K2Node_DynamicCast_AsSBContents_HUDBase' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetNowContentsHUD, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BattleContentsHUD_C_GetNowContentsHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.ClearPanel
// 0x0020 (0x0020 - 0x0000)
struct BattleContentsHUD_C_ClearPanel final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62A4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62A5[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleContentsHUD_C_ClearPanel) == 0x000008, "Wrong alignment on BattleContentsHUD_C_ClearPanel");
static_assert(sizeof(BattleContentsHUD_C_ClearPanel) == 0x000020, "Wrong size on BattleContentsHUD_C_ClearPanel");
static_assert(offsetof(BattleContentsHUD_C_ClearPanel, Temp_int_Variable) == 0x000000, "Member 'BattleContentsHUD_C_ClearPanel::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ClearPanel, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'BattleContentsHUD_C_ClearPanel::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ClearPanel, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'BattleContentsHUD_C_ClearPanel::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ClearPanel, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'BattleContentsHUD_C_ClearPanel::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ClearPanel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000015, "Member 'BattleContentsHUD_C_ClearPanel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_ClearPanel, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BattleContentsHUD_C_ClearPanel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.GetCurrentHUD
// 0x0020 (0x0020 - 0x0000)
struct BattleContentsHUD_C_GetCurrentHUD final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_DynamicCast_AsUser_Widget;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleContentsHUD_C_GetCurrentHUD) == 0x000008, "Wrong alignment on BattleContentsHUD_C_GetCurrentHUD");
static_assert(sizeof(BattleContentsHUD_C_GetCurrentHUD) == 0x000020, "Wrong size on BattleContentsHUD_C_GetCurrentHUD");
static_assert(offsetof(BattleContentsHUD_C_GetCurrentHUD, ReturnValue) == 0x000000, "Member 'BattleContentsHUD_C_GetCurrentHUD::ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetCurrentHUD, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'BattleContentsHUD_C_GetCurrentHUD::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetCurrentHUD, K2Node_DynamicCast_AsUser_Widget) == 0x000010, "Member 'BattleContentsHUD_C_GetCurrentHUD::K2Node_DynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_GetCurrentHUD, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BattleContentsHUD_C_GetCurrentHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.SetVisibilityHUD
// 0x0005 (0x0005 - 0x0000)
struct BattleContentsHUD_C_SetVisibilityHUD final
{
public:
	bool                                          TrueIsVisible;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleContentsHUD_C_SetVisibilityHUD) == 0x000001, "Wrong alignment on BattleContentsHUD_C_SetVisibilityHUD");
static_assert(sizeof(BattleContentsHUD_C_SetVisibilityHUD) == 0x000005, "Wrong size on BattleContentsHUD_C_SetVisibilityHUD");
static_assert(offsetof(BattleContentsHUD_C_SetVisibilityHUD, TrueIsVisible) == 0x000000, "Member 'BattleContentsHUD_C_SetVisibilityHUD::TrueIsVisible' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetVisibilityHUD, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'BattleContentsHUD_C_SetVisibilityHUD::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetVisibilityHUD, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'BattleContentsHUD_C_SetVisibilityHUD::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetVisibilityHUD, Temp_bool_Variable) == 0x000003, "Member 'BattleContentsHUD_C_SetVisibilityHUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_SetVisibilityHUD, K2Node_Select_Default) == 0x000004, "Member 'BattleContentsHUD_C_SetVisibilityHUD::K2Node_Select_Default' has a wrong offset!");

// Function BattleContentsHUD.BattleContentsHUD_C.CheckDxBattleStart
// 0x0050 (0x0050 - 0x0000)
struct BattleContentsHUD_C_CheckDxBattleStart final
{
public:
	bool                                          TrueIsStarted;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62A6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDxBattleHUD*                         SBDxBattleHUD;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62A7[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62A8[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDxBattleHUD*                         K2Node_DynamicCast_AsSBDx_Battle_HUD;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleContentsHUD_C_CheckDxBattleStart) == 0x000008, "Wrong alignment on BattleContentsHUD_C_CheckDxBattleStart");
static_assert(sizeof(BattleContentsHUD_C_CheckDxBattleStart) == 0x000050, "Wrong size on BattleContentsHUD_C_CheckDxBattleStart");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, TrueIsStarted) == 0x000000, "Member 'BattleContentsHUD_C_CheckDxBattleStart::TrueIsStarted' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, SBDxBattleHUD) == 0x000008, "Member 'BattleContentsHUD_C_CheckDxBattleStart::SBDxBattleHUD' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BattleContentsHUD_C_CheckDxBattleStart::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BattleContentsHUD_C_CheckDxBattleStart::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BattleContentsHUD_C_CheckDxBattleStart::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BattleContentsHUD_C_CheckDxBattleStart::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'BattleContentsHUD_C_CheckDxBattleStart::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, CallFunc_Array_Get_Item) == 0x000030, "Member 'BattleContentsHUD_C_CheckDxBattleStart::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BattleContentsHUD_C_CheckDxBattleStart::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, K2Node_DynamicCast_AsSBDx_Battle_HUD) == 0x000040, "Member 'BattleContentsHUD_C_CheckDxBattleStart::K2Node_DynamicCast_AsSBDx_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BattleContentsHUD_C_CheckDxBattleStart::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, CallFunc_Less_IntInt_ReturnValue) == 0x000049, "Member 'BattleContentsHUD_C_CheckDxBattleStart::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleContentsHUD_C_CheckDxBattleStart, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00004A, "Member 'BattleContentsHUD_C_CheckDxBattleStart::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

