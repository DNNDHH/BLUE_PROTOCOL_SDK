#pragma once

 

// Package: ShortcutRing

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ShortcutRing.ShortcutRing_C.ExecuteUbergraph_ShortcutRing
// 0x04A8 (0x04A8 - 0x0000)
struct ShortcutRing_C_ExecuteUbergraph_ShortcutRing final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_724D[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBShortcut_Ring_Edit;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShortcutRingEdit*                    CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_6;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_5;                  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_5;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable_6;                   // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_6;                  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_7;                   // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_7;                  // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_8;                  // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_8;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_9;                  // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_9;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0138(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable_10;                  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_10;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;                // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_11;                  // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_11;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;                // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_12;                  // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_12;                 // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;                // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_13;                  // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_13;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_13;                // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_14;                  // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_724F[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList; // 0x01A0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x01B4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7250[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_1; // 0x01C8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7251[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_2; // 0x01E8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7252[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_3; // 0x0208(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7253[0x3];                                     // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_4; // 0x0228(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable_15;                  // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_3;                         // 0x023C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_4;                         // 0x0244(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7254[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_5; // 0x0258(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_5;                         // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7255[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_6; // 0x0278(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_6;                         // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7256[0x3];                                     // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_7; // 0x0298(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_7;                         // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7257[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_8; // 0x02B8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_8;                         // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_8;               // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7258[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_9; // 0x02D8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_9;                         // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_9;               // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_7;                // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7259[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_10; // 0x02F8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_10;                        // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_10;              // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_8;                // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_725A[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_11; // 0x0318(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_11;                        // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_11;              // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_9;                // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_725B[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_12; // 0x0338(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_14;                 // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_12;                        // 0x034C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_10;               // 0x0354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_725C[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_14;                // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_12;              // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_11;               // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_725D[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_13; // 0x0368(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_13;                        // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_13;              // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_12;               // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_725E[0x3];                                     // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_14; // 0x0388(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_15;                 // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_14;                        // 0x039C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_13;               // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_725F[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_15;                // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_14;              // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_14;               // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7260[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActionBindNameByAction_OutActionBindNameList_15; // 0x03B8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_15;                        // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_15;              // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_15;               // 0x03D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7261[0x3];                                     // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBNetworkDataCache*              CallFunc_GetNetworkDataCache_ReturnValue;          // 0x03E8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x03F8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7262[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBNetworkDataCache*              CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0410(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_1;             // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0429(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x042A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7263[0x5];                                     // 0x042B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7264[0x2];                                     // 0x043A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x043C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetSelectSlotID_ReturnValue;              // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBShortcutRingEdit*                    K2Node_CustomEvent_InShortcutRingEdit_1;           // 0x0450(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBShortcutRingEdit*                    K2Node_CustomEvent_InShortcutRingEdit;             // 0x0458(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDemoManager_IsValid;                   // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7265[0x7];                                     // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue;               // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDemoManager_IsValid_1;                 // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7266[0x7];                                     // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue_1;             // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_AnimationCurrentTime;   // 0x0490(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0494(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0495(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0496(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0497(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x0498(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing) == 0x000008, "Wrong alignment on ShortcutRing_C_ExecuteUbergraph_ShortcutRing");
static_assert(sizeof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing) == 0x0004A8, "Wrong size on ShortcutRing_C_ExecuteUbergraph_ShortcutRing");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, EntryPoint) == 0x000000, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_bool_Variable) == 0x000004, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_byte_Variable) == 0x000005, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_byte_Variable_1) == 0x000006, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CustomEvent_Loaded) == 0x000038, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_class_Variable) == 0x000040, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_ClassDynamicCast_AsSBShortcut_Ring_Edit) == 0x000048, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_ClassDynamicCast_AsSBShortcut_Ring_Edit' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_ClassDynamicCast_bSuccess) == 0x000050, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Create_ReturnValue) == 0x000058, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable) == 0x000060, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_3) == 0x000064, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_4) == 0x000074, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_1) == 0x00008C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_1) == 0x000090, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_5) == 0x000098, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000A8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_2) == 0x0000B8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000BC, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_2) == 0x0000C0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_3) == 0x0000C4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_3) == 0x0000C8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000CC, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_4) == 0x0000D0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000D4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_4) == 0x0000E4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_5) == 0x0000E8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000EC, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_5) == 0x0000F0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_5) == 0x0000F4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000F8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_6) == 0x000108, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_6) == 0x00010C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_6) == 0x000110, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_7) == 0x000114, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_7) == 0x000118, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_7) == 0x00011C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_8) == 0x000120, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_8) == 0x000124, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_8) == 0x000128, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_9) == 0x00012C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_9) == 0x000130, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_9) == 0x000134, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_9) == 0x000138, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_10) == 0x000148, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_10) == 0x00014C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_10) == 0x000150, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_11) == 0x000154, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_10) == 0x000158, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_11) == 0x000168, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_11) == 0x00016C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_12) == 0x000170, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_12) == 0x000174, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_12) == 0x000178, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_13) == 0x00017C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_11) == 0x000180, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_13) == 0x000190, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_13) == 0x000194, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_14) == 0x000198, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_14' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList) == 0x0001A0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue) == 0x0001B0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_12) == 0x0001B4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_1) == 0x0001C8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item) == 0x0001D8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_1) == 0x0001E0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue) == 0x0001E4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_2) == 0x0001E8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_1) == 0x0001F8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_2) == 0x000200, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_3) == 0x000208, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_2) == 0x000218, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_3) == 0x000220, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_1) == 0x000224, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_4) == 0x000228, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Array_Index_Variable_15) == 0x000238, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Array_Index_Variable_15' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_3) == 0x00023C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_4) == 0x000244, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_4) == 0x00024C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_2) == 0x000250, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_5) == 0x000258, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_5) == 0x000268, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_5) == 0x000270, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_3) == 0x000274, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_6) == 0x000278, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_6) == 0x000288, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_6) == 0x000290, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_4) == 0x000294, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_7) == 0x000298, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_7) == 0x0002A8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_7) == 0x0002B0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_5) == 0x0002B4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_8) == 0x0002B8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_8) == 0x0002C8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_8) == 0x0002D0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_6) == 0x0002D4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_9) == 0x0002D8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_9) == 0x0002E8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_9) == 0x0002F0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_7) == 0x0002F4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_10) == 0x0002F8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_10) == 0x000308, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_10) == 0x000310, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_8) == 0x000314, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_11) == 0x000318, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_11) == 0x000328, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_11) == 0x000330, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_9) == 0x000334, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_12) == 0x000338, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_14) == 0x000348, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_14' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_12) == 0x00034C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_10) == 0x000354, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_14) == 0x000358, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_12) == 0x00035C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_11) == 0x000360, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_13) == 0x000368, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_13) == 0x000378, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_13) == 0x000380, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_12) == 0x000384, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_14) == 0x000388, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_14' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, Temp_int_Loop_Counter_Variable_15) == 0x000398, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::Temp_int_Loop_Counter_Variable_15' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_14) == 0x00039C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_14' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_13) == 0x0003A4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Add_IntInt_ReturnValue_15) == 0x0003A8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Add_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_14) == 0x0003AC, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_14) == 0x0003B0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetActionBindNameByAction_OutActionBindNameList_15) == 0x0003B8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetActionBindNameByAction_OutActionBindNameList_15' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Get_Item_15) == 0x0003C8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Get_Item_15' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Array_Length_ReturnValue_15) == 0x0003D0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Array_Length_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_Less_IntInt_ReturnValue_15) == 0x0003D4, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_Less_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetSBPlayerController_ReturnValue) == 0x0003D8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0003E0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0003E8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetOwnItemList_ReturnValue) == 0x0003F0, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CustomEvent_Result) == 0x0003F8, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000400, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x000408, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000410, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetOwnItemList_ReturnValue_1) == 0x000418, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetOwnItemList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000420, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CustomEvent_InUIType) == 0x000428, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CustomEvent_bInVisibility) == 0x000429, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CustomEvent_bInInstantly) == 0x00042A, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000430, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_Select_Default) == 0x000438, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000439, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_13) == 0x00043C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetSelectSlotID_ReturnValue) == 0x00044C, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetSelectSlotID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CustomEvent_InShortcutRingEdit_1) == 0x000450, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CustomEvent_InShortcutRingEdit_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CustomEvent_InShortcutRingEdit) == 0x000458, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CustomEvent_InShortcutRingEdit' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CustomEvent_Sender) == 0x000460, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CustomEvent_Param) == 0x000468, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetDemoManager_IsValid) == 0x000470, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetDemoManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetDemoManager_ReturnValue) == 0x000478, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetDemoManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetDemoManager_IsValid_1) == 0x000480, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetDemoManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_GetDemoManager_ReturnValue_1) == 0x000488, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_GetDemoManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_ComponentBoundEvent_AnimationCurrentTime) == 0x000490, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_ComponentBoundEvent_AnimationCurrentTime' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_IsValid_ReturnValue) == 0x000494, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000495, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_IsValid_ReturnValue_1) == 0x000496, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, CallFunc_IsValid_ReturnValue_2) == 0x000497, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_ExecuteUbergraph_ShortcutRing, K2Node_CreateDelegate_OutputDelegate_14) == 0x000498, "Member 'ShortcutRing_C_ExecuteUbergraph_ShortcutRing::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct ShortcutRing_C_BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature final
{
public:
	float                                         AnimationCurrentTime;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_C_BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature) == 0x000004, "Wrong alignment on ShortcutRing_C_BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature");
static_assert(sizeof(ShortcutRing_C_BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature) == 0x000004, "Wrong size on ShortcutRing_C_BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature");
static_assert(offsetof(ShortcutRing_C_BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature, AnimationCurrentTime) == 0x000000, "Member 'ShortcutRing_C_BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature::AnimationCurrentTime' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct ShortcutRing_C_CustomEvent_0 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_C_CustomEvent_0) == 0x000008, "Wrong alignment on ShortcutRing_C_CustomEvent_0");
static_assert(sizeof(ShortcutRing_C_CustomEvent_0) == 0x000010, "Wrong size on ShortcutRing_C_CustomEvent_0");
static_assert(offsetof(ShortcutRing_C_CustomEvent_0, Sender) == 0x000000, "Member 'ShortcutRing_C_CustomEvent_0::Sender' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_CustomEvent_0, Param) == 0x000008, "Member 'ShortcutRing_C_CustomEvent_0::Param' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.UnbindEditWindow
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_C_UnbindEditWindow final
{
public:
	class USBShortcutRingEdit*                    InShortcutRingEdit;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_C_UnbindEditWindow) == 0x000008, "Wrong alignment on ShortcutRing_C_UnbindEditWindow");
static_assert(sizeof(ShortcutRing_C_UnbindEditWindow) == 0x000008, "Wrong size on ShortcutRing_C_UnbindEditWindow");
static_assert(offsetof(ShortcutRing_C_UnbindEditWindow, InShortcutRingEdit) == 0x000000, "Member 'ShortcutRing_C_UnbindEditWindow::InShortcutRingEdit' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.BindEditWindow
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_C_BindEditWindow final
{
public:
	class USBShortcutRingEdit*                    InShortcutRingEdit;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_C_BindEditWindow) == 0x000008, "Wrong alignment on ShortcutRing_C_BindEditWindow");
static_assert(sizeof(ShortcutRing_C_BindEditWindow) == 0x000008, "Wrong size on ShortcutRing_C_BindEditWindow");
static_assert(offsetof(ShortcutRing_C_BindEditWindow, InShortcutRingEdit) == 0x000000, "Member 'ShortcutRing_C_BindEditWindow::InShortcutRingEdit' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.OnUseSupply
// 0x0001 (0x0001 - 0x0000)
struct ShortcutRing_C_OnUseSupply final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRing_C_OnUseSupply) == 0x000001, "Wrong alignment on ShortcutRing_C_OnUseSupply");
static_assert(sizeof(ShortcutRing_C_OnUseSupply) == 0x000001, "Wrong size on ShortcutRing_C_OnUseSupply");
static_assert(offsetof(ShortcutRing_C_OnUseSupply, Result) == 0x000000, "Member 'ShortcutRing_C_OnUseSupply::Result' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.OnLoaded_E029D6484C901949947AB496CF5240E6
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_C_OnLoaded_E029D6484C901949947AB496CF5240E6 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_C_OnLoaded_E029D6484C901949947AB496CF5240E6) == 0x000008, "Wrong alignment on ShortcutRing_C_OnLoaded_E029D6484C901949947AB496CF5240E6");
static_assert(sizeof(ShortcutRing_C_OnLoaded_E029D6484C901949947AB496CF5240E6) == 0x000008, "Wrong size on ShortcutRing_C_OnLoaded_E029D6484C901949947AB496CF5240E6");
static_assert(offsetof(ShortcutRing_C_OnLoaded_E029D6484C901949947AB496CF5240E6, Loaded) == 0x000000, "Member 'ShortcutRing_C_OnLoaded_E029D6484C901949947AB496CF5240E6::Loaded' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.PlayAnimIn
// 0x0010 (0x0010 - 0x0000)
struct ShortcutRing_C_PlayAnimIn final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7267[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_C_PlayAnimIn) == 0x000008, "Wrong alignment on ShortcutRing_C_PlayAnimIn");
static_assert(sizeof(ShortcutRing_C_PlayAnimIn) == 0x000010, "Wrong size on ShortcutRing_C_PlayAnimIn");
static_assert(offsetof(ShortcutRing_C_PlayAnimIn, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'ShortcutRing_C_PlayAnimIn::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ShortcutRing_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.PlayAnimOut
// 0x0010 (0x0010 - 0x0000)
struct ShortcutRing_C_PlayAnimOut final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7268[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_C_PlayAnimOut) == 0x000008, "Wrong alignment on ShortcutRing_C_PlayAnimOut");
static_assert(sizeof(ShortcutRing_C_PlayAnimOut) == 0x000010, "Wrong size on ShortcutRing_C_PlayAnimOut");
static_assert(offsetof(ShortcutRing_C_PlayAnimOut, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'ShortcutRing_C_PlayAnimOut::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ShortcutRing_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.PlaySESelectIcon
// 0x0004 (0x0004 - 0x0000)
struct ShortcutRing_C_PlaySESelectIcon final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_C_PlaySESelectIcon) == 0x000004, "Wrong alignment on ShortcutRing_C_PlaySESelectIcon");
static_assert(sizeof(ShortcutRing_C_PlaySESelectIcon) == 0x000004, "Wrong size on ShortcutRing_C_PlaySESelectIcon");
static_assert(offsetof(ShortcutRing_C_PlaySESelectIcon, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'ShortcutRing_C_PlaySESelectIcon::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function ShortcutRing.ShortcutRing_C.PlaySEExecute
// 0x0004 (0x0004 - 0x0000)
struct ShortcutRing_C_PlaySEExecute final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_C_PlaySEExecute) == 0x000004, "Wrong alignment on ShortcutRing_C_PlaySEExecute");
static_assert(sizeof(ShortcutRing_C_PlaySEExecute) == 0x000004, "Wrong size on ShortcutRing_C_PlaySEExecute");
static_assert(offsetof(ShortcutRing_C_PlaySEExecute, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'ShortcutRing_C_PlaySEExecute::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

}

