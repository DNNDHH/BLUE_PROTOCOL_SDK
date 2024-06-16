#pragma once

 

// Package: WBP_AddCharacterSlotDialog

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.OnEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature final
{
public:
	class UWBP_AddCharacterSlotDialog_C*          Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_Add;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature) == 0x000008, "Wrong alignment on WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature");
static_assert(sizeof(WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature) == 0x000010, "Wrong size on WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature, Widget) == 0x000000, "Member 'WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature, Param_Add) == 0x000008, "Member 'WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature::Param_Add' has a wrong offset!");

// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.ExecuteUbergraph_WBP_AddCharacterSlotDialog
// 0x0698 (0x0698 - 0x0000)
struct WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D35[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D36[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D37[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D38[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Result)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D39[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	class UUMG_MultipleSelectDialog_C*            CallFunc_Create_ReturnValue_1;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D3A[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_SlotNowMax;                     // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SlotAddMax;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PurchaseAmount;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      K2Node_CustomEvent_SBCryptoCurrency;               // 0x00C0(0x0028)(ConstParm, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D3B[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00F0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0108(0x0018)()
	class FName                                   Temp_name_Variable;                                // 0x0120(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Success;                        // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D3C[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0130(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0138(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D3D[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0150(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0168(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0180(0x0018)()
	bool                                          Temp_bool_Variable_4;                              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D3E[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D3F[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x01A8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_6;             // 0x01C0(0x0018)()
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x01D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01F8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0210(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D40[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0258(0x0010)(ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0268(0x0028)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0290(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02B8(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x02D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D41[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x02E8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x02F0(0x0028)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0328(0x0028)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0350(0x0018)()
	bool                                          Temp_bool_Variable_5;                              // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D42[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0370(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x0398(0x0028)()
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x03C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x03D0(0x0028)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x03F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0420(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0430(0x0018)()
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D43[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0459(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D44[0x6];                                     // 0x045A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0460(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0470(0x0018)()
	TArray<class FText>                           K2Node_MakeArray_Array_1;                          // 0x0488(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0498(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_5;     // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x04B8(0x0018)()
	int32                                         K2Node_CustomEvent_Result;                         // 0x04D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x04D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D45[0x2];                                     // 0x04D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x04DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D46[0x3];                                     // 0x04DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Now_ReturnValue;                          // 0x04E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x04E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Subtract_DateTimeTimespan_ReturnValue;    // 0x04F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Now_ReturnValue_1;                        // 0x04F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue;     // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D47[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue_1;               // 0x0508(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D48[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0518(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Subtract_DateTimeTimespan_ReturnValue_1;  // 0x0520(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue_1;   // 0x0529(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x052A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D49[0x5];                                     // 0x052B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue_1;               // 0x0530(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1;  // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x053A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D4A[0x5];                                     // 0x053B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x0540(0x0028)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D4B[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_3;                           // 0x0570(0x0028)()
	struct FLinearColor                           K2Node_Select_Default_4;                           // 0x0598(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_6;                    // 0x05A8(0x0028)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D4C[0x3];                                     // 0x05D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_5;                           // 0x05D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D4D[0x4];                                     // 0x05E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x05E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x05F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D4E[0x7];                                     // 0x05F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_7;                    // 0x0600(0x0028)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0628(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D4F[0x7];                                     // 0x0639(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0640(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D50[0x7];                                     // 0x0651(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0658(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x0668(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D51[0x7];                                     // 0x0669(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_8;                    // 0x0670(0x0028)()
};
static_assert(alignof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog) == 0x000008, "Wrong alignment on WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog");
static_assert(sizeof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog) == 0x000698, "Wrong size on WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, EntryPoint) == 0x000000, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_bool_Variable) == 0x000004, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_bool_Variable_1) == 0x000005, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_struct_Variable) == 0x000008, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_struct_Variable_1) == 0x000018, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_bool_Variable_2) == 0x000028, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_struct_Variable_2) == 0x00002C, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_struct_Variable_3) == 0x00003C, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_PlaySE_ReturnValue) == 0x00004C, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_bool_Variable_3) == 0x000050, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Create_ReturnValue) == 0x000058, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeLiteralByte_ReturnValue) == 0x000060, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000074, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000078, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Create_ReturnValue_1) == 0x0000A0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x0000A8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_SwitchEnum_CmpSuccess) == 0x0000B0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_CustomEvent_SlotNowMax) == 0x0000B4, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_CustomEvent_SlotNowMax' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_CustomEvent_SlotAddMax) == 0x0000B8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_CustomEvent_SlotAddMax' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_CustomEvent_PurchaseAmount) == 0x0000BC, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_CustomEvent_PurchaseAmount' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_CustomEvent_SBCryptoCurrency) == 0x0000C0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_CustomEvent_SBCryptoCurrency' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Add_IntInt_ReturnValue) == 0x0000E8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_IntToText_ReturnValue) == 0x0000F0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000108, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_name_Variable) == 0x000120, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_CustomEvent_Success) == 0x000128, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_CustomEvent_Success' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_CustomEvent_RetCode) == 0x00012C, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_name_Variable_1) == 0x000130, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetSBRetMessage_ReturnValue) == 0x000138, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000148, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_BooleanAND_ReturnValue) == 0x000149, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000150, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000168, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000180, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_bool_Variable_4) == 0x000198, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Subtract_IntInt_ReturnValue) == 0x00019C, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001A0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Less_IntInt_ReturnValue) == 0x0001A4, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_IntToText_ReturnValue_5) == 0x0001A8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_IntToText_ReturnValue_6) == 0x0001C0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_IntToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_struct_Variable_4) == 0x0001D8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0001E8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001F8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_FormatArgumentData) == 0x000210, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000250, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeArray_Array) == 0x000258, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_SlateColor) == 0x000268, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Format_ReturnValue) == 0x000290, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0002A8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002B8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002D0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_struct_Variable_5) == 0x0002D4, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002E4, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_Select_Default) == 0x0002E8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_SlateColor_1) == 0x0002F0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000318, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_SlateColor_2) == 0x000328, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000350, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_bool_Variable_5) == 0x000368, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_SlateColor_3) == 0x000370, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_SlateColor_4) == 0x000398, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_Select_Default_1) == 0x0003C0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_SlateColor_5) == 0x0003D0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x0003F8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Concat_StrStr_ReturnValue) == 0x000408, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_PlayAnimation_ReturnValue) == 0x000418, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000420, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000430, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000448, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x000450, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000458, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_IsValid_ReturnValue) == 0x000459, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetTextFromAsset_ReturnValue) == 0x000460, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000470, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeArray_Array_1) == 0x000488, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_CreateDelegate_OutputDelegate_1) == 0x000498, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetTextFromAssetByName_ReturnValue_5) == 0x0004A8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetTextFromAssetByName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0004B8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_CustomEvent_Result) == 0x0004D0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_IsValid_ReturnValue_1) == 0x0004D4, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0004D5, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_PlaySE_ReturnValue_1) == 0x0004D8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0004DC, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Now_ReturnValue) == 0x0004E0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Now_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeTimespan_ReturnValue) == 0x0004E8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Subtract_DateTimeTimespan_ReturnValue) == 0x0004F0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Subtract_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Now_ReturnValue_1) == 0x0004F8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Now_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Greater_DateTimeDateTime_ReturnValue) == 0x000500, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Greater_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeTimespan_ReturnValue_1) == 0x000508, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeTimespan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, Temp_bool_Variable_6) == 0x000510, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeDateTime_ReturnValue) == 0x000518, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Subtract_DateTimeTimespan_ReturnValue_1) == 0x000520, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Subtract_DateTimeTimespan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_NotEqual_DateTimeDateTime_ReturnValue) == 0x000528, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_NotEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Greater_DateTimeDateTime_ReturnValue_1) == 0x000529, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Greater_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_BooleanAND_ReturnValue_1) == 0x00052A, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeDateTime_ReturnValue_1) == 0x000530, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1) == 0x000538, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_BooleanAND_ReturnValue_2) == 0x000539, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_Select_Default_2) == 0x00053A, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetImpossibleColor_ReturnValue) == 0x000540, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000568, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_Select_Default_3) == 0x000570, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_Select_Default_4) == 0x000598, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_SlateColor_6) == 0x0005A8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_SlateColor_6' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0005D0, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_Select_Default_5) == 0x0005D4, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetGameConfigValueString_OutValue) == 0x0005E8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetGameConfigValueString_ReturnValue) == 0x0005F8, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_SlateColor_7) == 0x000600, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_SlateColor_7' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000628, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000638, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000640, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000650, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000658, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_Select_Default_6) == 0x000668, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog, K2Node_MakeStruct_SlateColor_8) == 0x000670, "Member 'WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog::K2Node_MakeStruct_SlateColor_8' has a wrong offset!");

// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.CustomEvent_2
// 0x0004 (0x0004 - 0x0000)
struct WBP_AddCharacterSlotDialog_C_CustomEvent_2 final
{
public:
	int32                                         Result;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AddCharacterSlotDialog_C_CustomEvent_2) == 0x000004, "Wrong alignment on WBP_AddCharacterSlotDialog_C_CustomEvent_2");
static_assert(sizeof(WBP_AddCharacterSlotDialog_C_CustomEvent_2) == 0x000004, "Wrong size on WBP_AddCharacterSlotDialog_C_CustomEvent_2");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_CustomEvent_2, Result) == 0x000000, "Member 'WBP_AddCharacterSlotDialog_C_CustomEvent_2::Result' has a wrong offset!");

// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BuiFinish
// 0x0008 (0x0008 - 0x0000)
struct WBP_AddCharacterSlotDialog_C_BuiFinish final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D52[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AddCharacterSlotDialog_C_BuiFinish) == 0x000004, "Wrong alignment on WBP_AddCharacterSlotDialog_C_BuiFinish");
static_assert(sizeof(WBP_AddCharacterSlotDialog_C_BuiFinish) == 0x000008, "Wrong size on WBP_AddCharacterSlotDialog_C_BuiFinish");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_BuiFinish, Success) == 0x000000, "Member 'WBP_AddCharacterSlotDialog_C_BuiFinish::Success' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_BuiFinish, RetCode) == 0x000004, "Member 'WBP_AddCharacterSlotDialog_C_BuiFinish::RetCode' has a wrong offset!");

// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.Initialize
// 0x0038 (0x0038 - 0x0000)
struct WBP_AddCharacterSlotDialog_C_Initialize final
{
public:
	int32                                         SlotNowMax;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotAddMax;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PurchaseAmount;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D53[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCryptoCurrency                      SBCryptoCurrency;                                  // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WBP_AddCharacterSlotDialog_C_Initialize) == 0x000008, "Wrong alignment on WBP_AddCharacterSlotDialog_C_Initialize");
static_assert(sizeof(WBP_AddCharacterSlotDialog_C_Initialize) == 0x000038, "Wrong size on WBP_AddCharacterSlotDialog_C_Initialize");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_Initialize, SlotNowMax) == 0x000000, "Member 'WBP_AddCharacterSlotDialog_C_Initialize::SlotNowMax' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_Initialize, SlotAddMax) == 0x000004, "Member 'WBP_AddCharacterSlotDialog_C_Initialize::SlotAddMax' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_Initialize, PurchaseAmount) == 0x000008, "Member 'WBP_AddCharacterSlotDialog_C_Initialize::PurchaseAmount' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_Initialize, SBCryptoCurrency) == 0x000010, "Member 'WBP_AddCharacterSlotDialog_C_Initialize::SBCryptoCurrency' has a wrong offset!");

// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.GetWarningToolTipWidget
// 0x0040 (0x0040 - 0x0000)
struct WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget) == 0x000008, "Wrong alignment on WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget");
static_assert(sizeof(WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget) == 0x000040, "Wrong size on WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget, ReturnValue) == 0x000000, "Member 'WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

