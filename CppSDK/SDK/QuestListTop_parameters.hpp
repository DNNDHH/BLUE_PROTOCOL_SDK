#pragma once

 

// Package: QuestListTop

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function QuestListTop.QuestListTop_C.ExecuteUbergraph_QuestListTop
// 0x0308 (0x0308 - 0x0000)
struct QuestListTop_C_ExecuteUbergraph_QuestListTop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8D45[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D46[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D47[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_ButtonId;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PageNum;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D48[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D49[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_2;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D4A[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Map_Keys_Keys;                            // 0x0068(0x0010)(ReferenceParm)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D4B[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCommandMenuChildInstanceData        CallFunc_Map_Find_Value;                           // 0x0090(0x0010)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D4C[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CommandMenuChildrenSwitcher_C> K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher; // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D4D[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CommandMenuChildrenSwitcher_C> K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_1; // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D4E[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CommandMenuChildrenSwitcher_C> K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_2; // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D4F[0x1];                                     // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MainPage;                             // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D50[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuSubButtonInterface> K2Node_DynamicCast_AsSBSub_Menu_Sub_Button_Interface; // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess_2;                 // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess_3;                 // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D51[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D52[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdventureBoardComponent*       CallFunc_GetAdventureBoardComponent_ReturnValue;   // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAutoDeliveryQuestComponent*    CallFunc_GetPlayerAutoDeliveryQuestComponent_ReturnValue; // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ReturnCode;                     // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D53[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_3;                     // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D54[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetBookMarkTypeNone_ReturnValue;          // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CommandMenuChildrenSwitcher_C> K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_3; // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D55[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0198(0x0010)(ZeroConstructor, NoDestructor)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x01B0(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D56[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x01C8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x01D8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0200(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D57[0x2];                                     // 0x021A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x021C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8D58[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActiveDeliveryQuest_Active;             // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActiveDeliveryQuest_Active_1;           // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D59[0x6];                                     // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_2;           // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D5A[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWishListExclamation_bResult;            // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x028D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D5B[0x2];                                     // 0x028E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0295(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D5C[0x2];                                     // 0x0296(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ReturnCode)>             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0298(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D5D[0x5];                                     // 0x02AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCommandMenuChildInstanceData        K2Node_MakeStruct_SBCommandMenuChildInstanceData;  // 0x02B0(0x0010)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D5E[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCommandMenuChildInstanceData        CallFunc_Map_Find_Value_1;                         // 0x02C8(0x0010)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D5F[0x6];                                     // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_Select_Default;                             // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D60[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CommandMenuChildrenSwitcher_C> K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_4; // 0x02F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestListTop_C_ExecuteUbergraph_QuestListTop) == 0x000008, "Wrong alignment on QuestListTop_C_ExecuteUbergraph_QuestListTop");
static_assert(sizeof(QuestListTop_C_ExecuteUbergraph_QuestListTop) == 0x000308, "Wrong size on QuestListTop_C_ExecuteUbergraph_QuestListTop");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, EntryPoint) == 0x000000, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Create_ReturnValue) == 0x000018, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_MakeLiteralByte_ReturnValue) == 0x000020, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, Temp_bool_Variable) == 0x000021, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000022, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Create_ReturnValue_1) == 0x000028, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000030, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_ComponentBoundEvent_ButtonId) == 0x000034, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_ComponentBoundEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_PageNum) == 0x000038, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_PageNum' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_SwitchInteger_CmpSuccess) == 0x00003C, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, Temp_class_Variable) == 0x000040, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000048, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_ClassDynamicCast_bSuccess) == 0x000050, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Create_ReturnValue_2) == 0x000058, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, Temp_int_Array_Index_Variable) == 0x000060, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Map_Keys_Keys) == 0x000068, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_AddChildToCanvas_ReturnValue) == 0x000078, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Array_Get_Item) == 0x000080, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Array_Length_ReturnValue) == 0x000084, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Map_Remove_ReturnValue) == 0x000088, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Map_Find_Value) == 0x000090, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Map_Find_ReturnValue) == 0x0000A0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher) == 0x0000A8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_1) == 0x0000C0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_2) == 0x0000D8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_bSuccess_2) == 0x0000E8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsValid_ReturnValue) == 0x0000E9, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsValid_ReturnValue_1) == 0x0000EA, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_Event_MainPage) == 0x0000EC, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_Event_SubPage) == 0x0000F0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_AsSBSub_Menu_Sub_Button_Interface) == 0x0000F8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_AsSBSub_Menu_Sub_Button_Interface' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_bSuccess_3) == 0x000108, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_SwitchInteger_CmpSuccess_1) == 0x000109, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_SwitchInteger_CmpSuccess_2) == 0x00010A, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_SwitchInteger_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_SwitchInteger_CmpSuccess_3) == 0x00010B, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_SwitchInteger_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00010C, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_GetPlayerController_ReturnValue) == 0x000110, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000118, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_bSuccess_4) == 0x000120, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_GetAdventureBoardComponent_ReturnValue) == 0x000128, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_GetAdventureBoardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_GetPlayerAutoDeliveryQuestComponent_ReturnValue) == 0x000130, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_GetPlayerAutoDeliveryQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_ReturnCode) == 0x000138, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_ReturnCode' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Create_ReturnValue_3) == 0x000140, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsValid_ReturnValue_2) == 0x000148, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_Event_InBookMarkType) == 0x000150, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CreateDelegate_OutputDelegate_1) == 0x000160, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_GetBookMarkTypeNone_ReturnValue) == 0x000170, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_GetBookMarkTypeNone_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_3) == 0x000180, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_3' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_bSuccess_5) == 0x000190, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_RetCode) == 0x000194, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CreateDelegate_OutputDelegate_2) == 0x000198, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_Loaded) == 0x0001A8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001B0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0001C0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0001C1, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_GetSBRetMessage_ReturnValue) == 0x0001C8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0001D8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000200, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000218, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000219, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CreateDelegate_OutputDelegate_4) == 0x00021C, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_GetEventExecutor_ReturnValue) == 0x000230, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000238, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_Sender_2) == 0x000240, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_Param_2) == 0x000248, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_Sender_1) == 0x000250, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_Param_1) == 0x000258, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsActiveDeliveryQuest_Active) == 0x000260, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsActiveDeliveryQuest_Active' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsActiveDeliveryQuest_Active_1) == 0x000261, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsActiveDeliveryQuest_Active_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_GetEventExecutor_ReturnValue_2) == 0x000268, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_GetEventExecutor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000270, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_Sender) == 0x000278, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CustomEvent_Param) == 0x000280, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, Temp_int_Loop_Counter_Variable) == 0x000288, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsWishListExclamation_bResult) == 0x00028C, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsWishListExclamation_bResult' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Less_IntInt_ReturnValue) == 0x00028D, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Add_IntInt_ReturnValue) == 0x000290, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsValid_ReturnValue_3) == 0x000294, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsValid_ReturnValue_4) == 0x000295, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_CreateDelegate_OutputDelegate_5) == 0x000298, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsValid_ReturnValue_5) == 0x0002A8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsValid_ReturnValue_6) == 0x0002A9, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x0002AA, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_MakeStruct_SBCommandMenuChildInstanceData) == 0x0002B0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_MakeStruct_SBCommandMenuChildInstanceData' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x0002C0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Map_Find_Value_1) == 0x0002C8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Map_Find_ReturnValue_1) == 0x0002D8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_Not_PreBool_ReturnValue) == 0x0002D9, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_Select_Default) == 0x0002E0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002E8, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_4) == 0x0002F0, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher_4' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, K2Node_DynamicCast_bSuccess_6) == 0x000300, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_ExecuteUbergraph_QuestListTop, CallFunc_IsValid_ReturnValue_7) == 0x000301, "Member 'QuestListTop_C_ExecuteUbergraph_QuestListTop::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.OnUpdateQuestButtonNew_Event
// 0x0010 (0x0010 - 0x0000)
struct QuestListTop_C_OnUpdateQuestButtonNew_Event final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_OnUpdateQuestButtonNew_Event) == 0x000008, "Wrong alignment on QuestListTop_C_OnUpdateQuestButtonNew_Event");
static_assert(sizeof(QuestListTop_C_OnUpdateQuestButtonNew_Event) == 0x000010, "Wrong size on QuestListTop_C_OnUpdateQuestButtonNew_Event");
static_assert(offsetof(QuestListTop_C_OnUpdateQuestButtonNew_Event, Sender) == 0x000000, "Member 'QuestListTop_C_OnUpdateQuestButtonNew_Event::Sender' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_OnUpdateQuestButtonNew_Event, Param) == 0x000008, "Member 'QuestListTop_C_OnUpdateQuestButtonNew_Event::Param' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.UpdateAutoDeliveryQuestExclamation_Event
// 0x0010 (0x0010 - 0x0000)
struct QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event) == 0x000008, "Wrong alignment on QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event");
static_assert(sizeof(QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event) == 0x000010, "Wrong size on QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event");
static_assert(offsetof(QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event, Sender) == 0x000000, "Member 'QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event::Sender' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event, Param) == 0x000008, "Member 'QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event::Param' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.UpdateSubMenuAdventureBoardExclamation_Event
// 0x0010 (0x0010 - 0x0000)
struct QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event) == 0x000008, "Wrong alignment on QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event");
static_assert(sizeof(QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event) == 0x000010, "Wrong size on QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event");
static_assert(offsetof(QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event, Sender) == 0x000000, "Member 'QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event::Sender' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event, Param) == 0x000008, "Member 'QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event::Param' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.OnLoadAdventureBoardDelegete_����_0
// 0x0004 (0x0004 - 0x0000)
struct QuestListTop_C_OnLoadAdventureBoardDelegete______0 final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_OnLoadAdventureBoardDelegete______0) == 0x000004, "Wrong alignment on QuestListTop_C_OnLoadAdventureBoardDelegete______0");
static_assert(sizeof(QuestListTop_C_OnLoadAdventureBoardDelegete______0) == 0x000004, "Wrong size on QuestListTop_C_OnLoadAdventureBoardDelegete______0");
static_assert(offsetof(QuestListTop_C_OnLoadAdventureBoardDelegete______0, RetCode) == 0x000000, "Member 'QuestListTop_C_OnLoadAdventureBoardDelegete______0::RetCode' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct QuestListTop_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on QuestListTop_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(QuestListTop_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on QuestListTop_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(QuestListTop_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'QuestListTop_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.CustomEvent_0
// 0x0004 (0x0004 - 0x0000)
struct QuestListTop_C_CustomEvent_0 final
{
public:
	int32                                         ReturnCode;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_CustomEvent_0) == 0x000004, "Wrong alignment on QuestListTop_C_CustomEvent_0");
static_assert(sizeof(QuestListTop_C_CustomEvent_0) == 0x000004, "Wrong size on QuestListTop_C_CustomEvent_0");
static_assert(offsetof(QuestListTop_C_CustomEvent_0, ReturnCode) == 0x000000, "Member 'QuestListTop_C_CustomEvent_0::ReturnCode' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct QuestListTop_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on QuestListTop_C_OnSubMenuUpdate");
static_assert(sizeof(QuestListTop_C_OnSubMenuUpdate) == 0x000008, "Wrong size on QuestListTop_C_OnSubMenuUpdate");
static_assert(offsetof(QuestListTop_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'QuestListTop_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'QuestListTop_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.ChangePage
// 0x0004 (0x0004 - 0x0000)
struct QuestListTop_C_ChangePage final
{
public:
	int32                                         PageNum;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_ChangePage) == 0x000004, "Wrong alignment on QuestListTop_C_ChangePage");
static_assert(sizeof(QuestListTop_C_ChangePage) == 0x000004, "Wrong size on QuestListTop_C_ChangePage");
static_assert(offsetof(QuestListTop_C_ChangePage, PageNum) == 0x000000, "Member 'QuestListTop_C_ChangePage::PageNum' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct QuestListTop_C_BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on QuestListTop_C_BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature");
static_assert(sizeof(QuestListTop_C_BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature) == 0x000004, "Wrong size on QuestListTop_C_BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature");
static_assert(offsetof(QuestListTop_C_BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'QuestListTop_C_BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559
// 0x0008 (0x0008 - 0x0000)
struct QuestListTop_C_OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559) == 0x000008, "Wrong alignment on QuestListTop_C_OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559");
static_assert(sizeof(QuestListTop_C_OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559) == 0x000008, "Wrong size on QuestListTop_C_OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559");
static_assert(offsetof(QuestListTop_C_OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559, Loaded) == 0x000000, "Member 'QuestListTop_C_OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559::Loaded' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.Initialize Open Menu Type
// 0x000C (0x000C - 0x0000)
struct QuestListTop_C_Initialize_Open_Menu_Type final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestListTop_C_Initialize_Open_Menu_Type) == 0x000004, "Wrong alignment on QuestListTop_C_Initialize_Open_Menu_Type");
static_assert(sizeof(QuestListTop_C_Initialize_Open_Menu_Type) == 0x00000C, "Wrong size on QuestListTop_C_Initialize_Open_Menu_Type");
static_assert(offsetof(QuestListTop_C_Initialize_Open_Menu_Type, ID) == 0x000000, "Member 'QuestListTop_C_Initialize_Open_Menu_Type::ID' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_Initialize_Open_Menu_Type, CallFunc_Map_Find_Value) == 0x000004, "Member 'QuestListTop_C_Initialize_Open_Menu_Type::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_Initialize_Open_Menu_Type, CallFunc_Map_Find_ReturnValue) == 0x000008, "Member 'QuestListTop_C_Initialize_Open_Menu_Type::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.IsAdventureBoardExclamation
// 0x0050 (0x0050 - 0x0000)
struct QuestListTop_C_IsAdventureBoardExclamation final
{
public:
	bool                                          CallFunc_IsNewAdventureBoard_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUpdateAdventureBoard_ReturnValue;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D61[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestListTop_C_IsAdventureBoardExclamation) == 0x000008, "Wrong alignment on QuestListTop_C_IsAdventureBoardExclamation");
static_assert(sizeof(QuestListTop_C_IsAdventureBoardExclamation) == 0x000050, "Wrong size on QuestListTop_C_IsAdventureBoardExclamation");
static_assert(offsetof(QuestListTop_C_IsAdventureBoardExclamation, CallFunc_IsNewAdventureBoard_ReturnValue) == 0x000000, "Member 'QuestListTop_C_IsAdventureBoardExclamation::CallFunc_IsNewAdventureBoard_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAdventureBoardExclamation, CallFunc_IsUpdateAdventureBoard_ReturnValue) == 0x000001, "Member 'QuestListTop_C_IsAdventureBoardExclamation::CallFunc_IsUpdateAdventureBoard_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAdventureBoardExclamation, CallFunc_Conv_BoolToString_ReturnValue) == 0x000008, "Member 'QuestListTop_C_IsAdventureBoardExclamation::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAdventureBoardExclamation, CallFunc_Conv_BoolToString_ReturnValue_1) == 0x000018, "Member 'QuestListTop_C_IsAdventureBoardExclamation::CallFunc_Conv_BoolToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAdventureBoardExclamation, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'QuestListTop_C_IsAdventureBoardExclamation::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAdventureBoardExclamation, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'QuestListTop_C_IsAdventureBoardExclamation::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAdventureBoardExclamation, CallFunc_BooleanOR_ReturnValue) == 0x000048, "Member 'QuestListTop_C_IsAdventureBoardExclamation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.IsAutoDeliveryQuestExclamation
// 0x0005 (0x0005 - 0x0000)
struct QuestListTop_C_IsAutoDeliveryQuestExclamation final
{
public:
	bool                                          CallFunc_IsNewQuestStockAll_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActiveDeliveryQuest_Active;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUpdateAutoDeliveryQuest_ReturnValue;    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestListTop_C_IsAutoDeliveryQuestExclamation) == 0x000001, "Wrong alignment on QuestListTop_C_IsAutoDeliveryQuestExclamation");
static_assert(sizeof(QuestListTop_C_IsAutoDeliveryQuestExclamation) == 0x000005, "Wrong size on QuestListTop_C_IsAutoDeliveryQuestExclamation");
static_assert(offsetof(QuestListTop_C_IsAutoDeliveryQuestExclamation, CallFunc_IsNewQuestStockAll_ReturnValue) == 0x000000, "Member 'QuestListTop_C_IsAutoDeliveryQuestExclamation::CallFunc_IsNewQuestStockAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAutoDeliveryQuestExclamation, CallFunc_IsActiveDeliveryQuest_Active) == 0x000001, "Member 'QuestListTop_C_IsAutoDeliveryQuestExclamation::CallFunc_IsActiveDeliveryQuest_Active' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAutoDeliveryQuestExclamation, CallFunc_IsUpdateAutoDeliveryQuest_ReturnValue) == 0x000002, "Member 'QuestListTop_C_IsAutoDeliveryQuestExclamation::CallFunc_IsUpdateAutoDeliveryQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAutoDeliveryQuestExclamation, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'QuestListTop_C_IsAutoDeliveryQuestExclamation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsAutoDeliveryQuestExclamation, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'QuestListTop_C_IsAutoDeliveryQuestExclamation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.IsActiveDeliveryQuest
// 0x0020 (0x0020 - 0x0000)
struct QuestListTop_C_IsActiveDeliveryQuest final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D62[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D63[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureSettingEenabled_ReturnValue;     // 0x0018(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestListTop_C_IsActiveDeliveryQuest) == 0x000008, "Wrong alignment on QuestListTop_C_IsActiveDeliveryQuest");
static_assert(sizeof(QuestListTop_C_IsActiveDeliveryQuest) == 0x000020, "Wrong size on QuestListTop_C_IsActiveDeliveryQuest");
static_assert(offsetof(QuestListTop_C_IsActiveDeliveryQuest, Active) == 0x000000, "Member 'QuestListTop_C_IsActiveDeliveryQuest::Active' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsActiveDeliveryQuest, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'QuestListTop_C_IsActiveDeliveryQuest::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsActiveDeliveryQuest, CallFunc_GetMasterDataManager_IsValid) == 0x00000C, "Member 'QuestListTop_C_IsActiveDeliveryQuest::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsActiveDeliveryQuest, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'QuestListTop_C_IsActiveDeliveryQuest::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsActiveDeliveryQuest, CallFunc_IsFeatureSettingEenabled_ReturnValue) == 0x000018, "Member 'QuestListTop_C_IsActiveDeliveryQuest::CallFunc_IsFeatureSettingEenabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_IsActiveDeliveryQuest, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'QuestListTop_C_IsActiveDeliveryQuest::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.UpdateQuestButtonExclamation
// 0x0088 (0x0088 - 0x0000)
struct QuestListTop_C_UpdateQuestButtonExclamation final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D64[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     CallFunc_Array_Get_Item;                           // 0x0018(0x0060)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_bIsValid;                 // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_ReturnValue;              // 0x007F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestListTop_C_UpdateQuestButtonExclamation) == 0x000008, "Wrong alignment on QuestListTop_C_UpdateQuestButtonExclamation");
static_assert(sizeof(QuestListTop_C_UpdateQuestButtonExclamation) == 0x000088, "Wrong size on QuestListTop_C_UpdateQuestButtonExclamation");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, Temp_int_Array_Index_Variable) == 0x000000, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_GetNetworkDataCache_IsValid) == 0x00000C, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000010, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_Array_Get_Item) == 0x000018, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00007C, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_Less_IntInt_ReturnValue) == 0x00007D, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_IsReadedIdByInt_bIsValid) == 0x00007E, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_IsReadedIdByInt_bIsValid' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_IsReadedIdByInt_ReturnValue) == 0x00007F, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_IsReadedIdByInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_Not_PreBool_ReturnValue) == 0x000080, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_UpdateQuestButtonExclamation, CallFunc_BooleanAND_ReturnValue) == 0x000081, "Member 'QuestListTop_C_UpdateQuestButtonExclamation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function QuestListTop.QuestListTop_C.TermRequest
// 0x0030 (0x0030 - 0x0000)
struct QuestListTop_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESubMenuTermRequestReply                      Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D65[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CommandMenuChildrenSwitcher_C> K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESubMenuTermRequestReply                      K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D66[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListTop_C_TermRequest) == 0x000008, "Wrong alignment on QuestListTop_C_TermRequest");
static_assert(sizeof(QuestListTop_C_TermRequest) == 0x000030, "Wrong size on QuestListTop_C_TermRequest");
static_assert(offsetof(QuestListTop_C_TermRequest, InReason) == 0x000000, "Member 'QuestListTop_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, ReturnValue) == 0x000001, "Member 'QuestListTop_C_TermRequest::ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, Temp_byte_Variable) == 0x000002, "Member 'QuestListTop_C_TermRequest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'QuestListTop_C_TermRequest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000004, "Member 'QuestListTop_C_TermRequest::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, Temp_byte_Variable_1) == 0x000005, "Member 'QuestListTop_C_TermRequest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, Temp_bool_Variable) == 0x000006, "Member 'QuestListTop_C_TermRequest::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher) == 0x000008, "Member 'QuestListTop_C_TermRequest::K2Node_DynamicCast_AsBPI_Command_Menu_Children_Switcher' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'QuestListTop_C_TermRequest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, K2Node_Select_Default) == 0x000019, "Member 'QuestListTop_C_TermRequest::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'QuestListTop_C_TermRequest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestListTop_C_TermRequest, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'QuestListTop_C_TermRequest::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

