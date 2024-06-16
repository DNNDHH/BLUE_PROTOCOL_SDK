#pragma once

 

// Package: UMG_AdminGotoBookmarkWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.ExecuteUbergraph_UMG_AdminGotoBookmarkWindow
// 0x0188 (0x0188 - 0x0000)
struct UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBAdminGotoBookmarkItem* Data)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1DB7[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue;                    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_AdminGotoBookmarkRegistrationWindow_C* CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DB8[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DB9[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminGotoBookmarkItem*               K2Node_CustomEvent_NewData;                        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_GetAnchors_ReturnValue;                   // 0x0080(0x0010)(NoDestructor)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DBA[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsSelected;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DBB[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_SelectedData;                   // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DBC[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminGotoBookmarkItem*               K2Node_DynamicCast_AsSBAdmin_Goto_Bookmark_Item;   // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DBD[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminGotoBookmarkItem*               K2Node_CustomEvent_EditingData;                    // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x00EC(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x00EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DBE[0x5];                                     // 0x00F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget_1;               // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;                 // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_AdminGotoBookmarkWindowItem_C*     K2Node_DynamicCast_AsUMG_Admin_Goto_Bookmark_Window_Item; // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DBF[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_AdminGotoBookmarkWindowItem_C*     K2Node_DynamicCast_AsUMG_Admin_Goto_Bookmark_Window_Item_1; // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DC0[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminGotoBookmarkItem*               K2Node_CustomEvent_Data;                           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DC1[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue;       // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBAdminGotoBookmarkItem*>       CallFunc_GetGotoBookmarkList_ReturnValue;          // 0x0140(0x0010)(ReferenceParm)
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue_1;     // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue_2;     // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue_3;     // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue_4;     // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue_5;     // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIdWarp_ReturnValue;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DC2[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue_6;     // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow");
static_assert(sizeof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow) == 0x000188, "Wrong size on UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, EntryPoint) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000028, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetParent_ReturnValue) == 0x000038, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_Create_ReturnValue) == 0x000040, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_DynamicCast_AsCanvas_Panel_Slot) == 0x000050, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_DynamicCast_AsCanvas_Panel_Slot' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetDesiredSize_ReturnValue) == 0x00005C, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_BreakVector2D_X) == 0x000064, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_BreakVector2D_Y) == 0x000068, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_CustomEvent_NewData) == 0x000070, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_CustomEvent_NewData' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000078, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetAnchors_ReturnValue) == 0x000080, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetAnchors_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetPosition_ReturnValue) == 0x000090, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_BreakVector2D_X_1) == 0x000098, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_BreakVector2D_Y_1) == 0x00009C, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000A0, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_MakeVector2D_ReturnValue) == 0x0000A4, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue) == 0x0000AC, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_ComponentBoundEvent_Item) == 0x0000B0, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_ComponentBoundEvent_bIsSelected) == 0x0000B8, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_ComponentBoundEvent_bIsSelected' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_1) == 0x0000B9, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_CustomEvent_SelectedData) == 0x0000C0, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_CustomEvent_SelectedData' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_DynamicCast_AsSBAdmin_Goto_Bookmark_Item) == 0x0000D0, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_DynamicCast_AsSBAdmin_Goto_Bookmark_Item' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_CustomEvent_EditingData) == 0x0000E0, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_CustomEvent_EditingData' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_3) == 0x0000E8, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_4) == 0x0000E9, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_5) == 0x0000EA, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_6) == 0x0000EB, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_CustomEvent_Result) == 0x0000EC, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_SwitchEnum_CmpSuccess) == 0x0000ED, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_7) == 0x0000EE, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_8) == 0x0000EF, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_9) == 0x0000F0, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_10) == 0x0000F1, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_11) == 0x0000F2, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_ComponentBoundEvent_Widget_1) == 0x0000F8, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_ComponentBoundEvent_Widget_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_ComponentBoundEvent_Widget) == 0x000100, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_DynamicCast_AsUMG_Admin_Goto_Bookmark_Window_Item) == 0x000108, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_DynamicCast_AsUMG_Admin_Goto_Bookmark_Window_Item' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_DynamicCast_bSuccess_2) == 0x000110, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_DynamicCast_AsUMG_Admin_Goto_Bookmark_Window_Item_1) == 0x000118, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_DynamicCast_AsUMG_Admin_Goto_Bookmark_Window_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_DynamicCast_bSuccess_3) == 0x000120, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, K2Node_CustomEvent_Data) == 0x000128, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsValid_ReturnValue_12) == 0x000130, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetSBAdminBookmarkMisc_ReturnValue) == 0x000138, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetSBAdminBookmarkMisc_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetGotoBookmarkList_ReturnValue) == 0x000140, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetGotoBookmarkList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetSBAdminBookmarkMisc_ReturnValue_1) == 0x000150, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetSBAdminBookmarkMisc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetSBAdminBookmarkMisc_ReturnValue_2) == 0x000158, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetSBAdminBookmarkMisc_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetSBAdminBookmarkMisc_ReturnValue_3) == 0x000160, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetSBAdminBookmarkMisc_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetSBAdminBookmarkMisc_ReturnValue_4) == 0x000168, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetSBAdminBookmarkMisc_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetSBAdminBookmarkMisc_ReturnValue_5) == 0x000170, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetSBAdminBookmarkMisc_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_IsIdWarp_ReturnValue) == 0x000178, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_IsIdWarp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow, CallFunc_GetSBAdminBookmarkMisc_ReturnValue_6) == 0x000180, "Member 'UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow::CallFunc_GetSBAdminBookmarkMisc_ReturnValue_6' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.OnClickedItemMoveButton
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkWindow_C_OnClickedItemMoveButton final
{
public:
	class USBAdminGotoBookmarkItem*               Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindow_C_OnClickedItemMoveButton) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindow_C_OnClickedItemMoveButton");
static_assert(sizeof(UMG_AdminGotoBookmarkWindow_C_OnClickedItemMoveButton) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkWindow_C_OnClickedItemMoveButton");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_OnClickedItemMoveButton, Data) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindow_C_OnClickedItemMoveButton::Data' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature");
static_assert(sizeof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature, Widget) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature::Widget' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(sizeof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature, Widget) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature::Widget' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.OnConfirmDelete
// 0x0001 (0x0001 - 0x0000)
struct UMG_AdminGotoBookmarkWindow_C_OnConfirmDelete final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindow_C_OnConfirmDelete) == 0x000001, "Wrong alignment on UMG_AdminGotoBookmarkWindow_C_OnConfirmDelete");
static_assert(sizeof(UMG_AdminGotoBookmarkWindow_C_OnConfirmDelete) == 0x000001, "Wrong size on UMG_AdminGotoBookmarkWindow_C_OnConfirmDelete");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_OnConfirmDelete, Result) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindow_C_OnConfirmDelete::Result' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.CreateRegistrationWindow
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkWindow_C_CreateRegistrationWindow final
{
public:
	class USBAdminGotoBookmarkItem*               EditingData;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindow_C_CreateRegistrationWindow) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindow_C_CreateRegistrationWindow");
static_assert(sizeof(UMG_AdminGotoBookmarkWindow_C_CreateRegistrationWindow) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkWindow_C_CreateRegistrationWindow");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_CreateRegistrationWindow, EditingData) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindow_C_CreateRegistrationWindow::EditingData' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.SetSelectedData
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkWindow_C_SetSelectedData final
{
public:
	class UObject*                                Param_SelectedData;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindow_C_SetSelectedData) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindow_C_SetSelectedData");
static_assert(sizeof(UMG_AdminGotoBookmarkWindow_C_SetSelectedData) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkWindow_C_SetSelectedData");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_SetSelectedData, Param_SelectedData) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindow_C_SetSelectedData::Param_SelectedData' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSelected;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");
static_assert(sizeof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature) == 0x000010, "Wrong size on UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature, Item) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature, bIsSelected) == 0x000008, "Member 'UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature::bIsSelected' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.AddItem
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkWindow_C_AddItem final
{
public:
	class USBAdminGotoBookmarkItem*               NewData;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindow_C_AddItem) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindow_C_AddItem");
static_assert(sizeof(UMG_AdminGotoBookmarkWindow_C_AddItem) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkWindow_C_AddItem");
static_assert(offsetof(UMG_AdminGotoBookmarkWindow_C_AddItem, NewData) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindow_C_AddItem::NewData' has a wrong offset!");

}

