#pragma once

 

// Package: WBP_ItemBox

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "E_ItemBoxDestinationType_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemBox.WBP_ItemBox_C.OnEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_ItemBox_C_OnEnd__DelegateSignature final
{
public:
	ENumberInputDialogResult                      NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7823[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBox_C*                         ItemBox;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_OnEnd__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ItemBox_C_OnEnd__DelegateSignature");
static_assert(sizeof(WBP_ItemBox_C_OnEnd__DelegateSignature) == 0x000010, "Wrong size on WBP_ItemBox_C_OnEnd__DelegateSignature");
static_assert(offsetof(WBP_ItemBox_C_OnEnd__DelegateSignature, NewParam) == 0x000000, "Member 'WBP_ItemBox_C_OnEnd__DelegateSignature::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_OnEnd__DelegateSignature, ItemBox) == 0x000008, "Member 'WBP_ItemBox_C_OnEnd__DelegateSignature::ItemBox' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.ExecuteUbergraph_WBP_ItemBox
// 0x0B68 (0x0B68 - 0x0000)
struct WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Add_Item_Bag_Scroll_List_bIsOver;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7824[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7825[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_ItemBoxIcon_C* Button)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7826[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bPlayCloseSe;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7827[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7828[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7829[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_782A[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_782B[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, struct FSBCryptoCurrency& Cryptocurrency)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_782C[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxIcon_C*                     K2Node_DynamicCast_AsWBP_Item_Box_Icon;            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_782D[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxIcon_C*                     K2Node_CustomEvent_Button;                         // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSelected_bSelected;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_782E[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0168(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_782F[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0198(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01C0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0200(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0218(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0228(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0240(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0280(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7830[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0298(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7831[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7832[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x02CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x02CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_2;           // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7833[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02E8(0x0018)()
	bool                                          CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bOver; // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7834[0x3];                                     // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMax; // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bUseMin; // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7835[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMin; // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_WarrantyPrice; // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7836[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0320(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0360(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x03A0(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x03B0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x03F0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x0430(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_5;                          // 0x0440(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0450(0x0018)()
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7837[0x3];                                     // 0x0469(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7838[0x3];                                     // 0x0471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x047C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7839[0x3];                                     // 0x047D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_783A[0x3];                                     // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0488(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_783B[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxIcon_C*                     K2Node_DynamicCast_AsWBP_Item_Box_Icon_1;          // 0x0498(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_783C[0x3];                                     // 0x04A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue_3;           // 0x04A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSelected_bSelected_1;                   // 0x04A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_783D[0x2];                                     // 0x04AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, TArray<struct FSBAchievementInfo>& AchievementList)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x04AC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x04BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_783E[0x3];                                     // 0x04BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x04C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_783F[0x6];                                     // 0x04CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x04D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_5;     // 0x04D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x04E8(0x0018)()
	bool                                          CallFunc_Add_Item_Storage_Scroll_List_bIsOver;     // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Add_Item_Storage_Scroll_List_bISCanNotLost; // 0x0501(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7840[0x2];                                     // 0x0502(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0504(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Add_Item_Bag_Scroll_List_bIsOver_1;       // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0509(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x050A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Add_Item_Bag_Scroll_List_bIsOver_2;       // 0x050B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_4;                               // 0x050C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7841[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x0518(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7842[0x7];                                     // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxScrollText_Wrapper_C*       K2Node_DynamicCast_AsWBP_Item_Box_Scroll_Text_Wrapper; // 0x0528(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0531(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7843[0x2];                                     // 0x0532(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0534(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x053A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7844[0x5];                                     // 0x053B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_6;     // 0x0540(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_7;     // 0x0550(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0560(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0578(0x0018)()
	ESBCharacterGender                            Temp_byte_Variable_2;                              // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7845[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue_4;           // 0x0594(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_3;                 // 0x0598(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7846[0x7];                                     // 0x05A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxIcon_C*                     K2Node_DynamicCast_AsWBP_Item_Box_Icon_2;          // 0x05A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7847[0x3];                                     // 0x05B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x05B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x05B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7848[0x3];                                     // 0x05B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x05BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item;                           // 0x05C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x05C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7849[0x4];                                     // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x05D0(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x05E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_784A[0x4];                                     // 0x05EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x05F0(0x0018)()
	int32                                         CallFunc_GetMoneyMax_ReturnValue;                  // 0x0608(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x060C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_784B[0x3];                                     // 0x0611(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x0614(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0619(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x061A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x061B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_1;                  // 0x061C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x061D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x061E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_784C[0x1];                                     // 0x061F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterItemBox                       CallFunc_GetItemBoxMasterData_ReturnValue;         // 0x0628(0x0020)()
	ESBCharacterGender                            Temp_byte_Variable_3;                              // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_10;                             // 0x0649(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x064A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_784D[0x1];                                     // 0x064B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x064C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable_4;                              // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_784E[0x7];                                     // 0x0651(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0658(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_784F[0x7];                                     // 0x0661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0668(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0670(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0671(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x0672(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x0673(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x0674(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_2;                           // 0x0675(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_8;                              // 0x0676(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Add_Other_Belongings_Over;                // 0x0677(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Add_Other_Belongings_CanNotLostOther;     // 0x0678(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Add_Other_Belongings_Overlapping;         // 0x0679(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7850[0x6];                                     // 0x067A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0680(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0688(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7851[0x7];                                     // 0x0689(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0690(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAchievementsLoadedFromDB_ReturnValue;   // 0x0698(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0699(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x069A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7852[0x5];                                     // 0x069B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             K2Node_CustomEvent_AchievementList;                // 0x06A0(0x0010)(ConstParm, ReferenceParm)
	EItemBoxType                                  Temp_byte_Variable_9;                              // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7853[0x7];                                     // 0x06B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x06B8(0x0018)()
	bool                                          CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bOver_1; // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7854[0x3];                                     // 0x06D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMax_1; // 0x06D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bUseMin_1; // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7855[0x3];                                     // 0x06D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMin_1; // 0x06DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_WarrantyPrice_1; // 0x06E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7856[0x4];                                     // 0x06E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_8;     // 0x06E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EItemBoxType                                  Temp_byte_Variable_10;                             // 0x06F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7857[0x7];                                     // 0x06F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0700(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x0718(0x0018)()
	class FText                                   K2Node_Select_Default_3;                           // 0x0730(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x0748(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_6;                          // 0x0788(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_9;     // 0x0798(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x07A8(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x07C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7858[0x7];                                     // 0x07C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_5;                     // 0x07C8(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x07E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7859[0x4];                                     // 0x07E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_10;    // 0x07E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x07F8(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_785A[0x7];                                     // 0x0811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_6;                     // 0x0818(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x0830(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;                 // 0x0848(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_785B[0x4];                                     // 0x084C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_5;                           // 0x0850(0x0018)()
	int32                                         Temp_int_Variable_5;                               // 0x0868(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x086C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_785C[0x3];                                     // 0x086D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_4;                 // 0x0870(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     K2Node_DynamicCast_AsWBP_Item_Box_Icon_3;          // 0x0878(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0880(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0x0881(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_785D[0x2];                                     // 0x0882(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;                // 0x0884(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0888(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x0889(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x088A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x088B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x088C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x088D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x088E(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_785E[0x1];                                     // 0x088F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0890(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_785F[0x4];                                     // 0x0894(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCryptoCurrency                      K2Node_CustomEvent_Cryptocurrency;                 // 0x0898(0x0028)(ConstParm, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_7;                           // 0x08C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7860[0x3];                                     // 0x08C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;                // 0x08C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x08C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRmShopComponent*                     CallFunc_GetRmShopComponent_ReturnValue;           // 0x08D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_GetCryptocurrency_ReturnValue;    // 0x08D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7861[0x3];                                     // 0x08D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;                // 0x08DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x08E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x08E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x08E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7862[0x7];                                     // 0x08E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x08F0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0918(0x0028)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_11;    // 0x0940(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0950(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_12;    // 0x0968(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_13;    // 0x0978(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x0988(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x09A0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_14;    // 0x09B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_15;    // 0x09C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x09D8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x09F0(0x0018)()
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item_1;                         // 0x0A08(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0A10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0A11(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7863[0x2];                                     // 0x0A12(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0A14(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemBoxGenderCheck_IsWarning;           // 0x0A18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0A19(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0A1A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0A1B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7864[0x4];                                     // 0x0A1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0A20(0x0088)()
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0AA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7865[0x7];                                     // 0x0AA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0AB0(0x00B0)()
	bool                                          K2Node_Select_Default_8;                           // 0x0B60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0B61(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox) == 0x000008, "Wrong alignment on WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox");
static_assert(sizeof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox) == 0x000B68, "Wrong size on WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, EntryPoint) == 0x000000, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_Item_Bag_Scroll_List_bIsOver) == 0x000004, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_Item_Bag_Scroll_List_bIsOver' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Variable) == 0x000008, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_MakeLiteralByte_ReturnValue) == 0x000018, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00002C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Array_Index_Variable) == 0x000030, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CustomEvent_bPlayCloseSe) == 0x000034, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CustomEvent_bPlayCloseSe' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Event_Animation) == 0x000040, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_PlaySE_ReturnValue) == 0x000054, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_PlaySE_ReturnValue_1) == 0x000058, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Create_ReturnValue) == 0x000060, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetUIManager_IsValid) == 0x000069, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetUIManager_ReturnValue) == 0x000070, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000078, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Not_PreBool_ReturnValue) == 0x00008C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable) == 0x00008D, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_True_if_break_was_hit_Variable) == 0x00008E, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Not_PreBool_ReturnValue_1) == 0x00008F, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_PlaySE_ReturnValue_2) == 0x000090, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildrenCount_ReturnValue) == 0x000094, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildAt_ReturnValue) == 0x000098, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_AsWBP_Item_Box_Icon) == 0x0000A8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_AsWBP_Item_Box_Icon' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CustomEvent_Button) == 0x0000B8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsSelected_bSelected) == 0x0000C0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsSelected_bSelected' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000C1, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeArray_Array) == 0x000108, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000118, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000140, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Format_ReturnValue) == 0x000150, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000168, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000180, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_1) == 0x000190, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000198, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x0001B0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001C0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000200, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeArray_Array_1) == 0x000218, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Format_ReturnValue_1) == 0x000228, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_FormatArgumentData_2) == 0x000240, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeArray_Array_2) == 0x000280, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000290, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Format_ReturnValue_2) == 0x000298, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable) == 0x0002B0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Loop_Counter_Variable) == 0x0002B4, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Add_ReturnValue) == 0x0002B8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Length_ReturnValue) == 0x0002BC, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_RemoveItem_ReturnValue) == 0x0002C0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002C4, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Length_ReturnValue_1) == 0x0002C8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_1) == 0x0002CC, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Less_IntInt_ReturnValue) == 0x0002CD, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_2) == 0x0002CE, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0002CF, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildrenCount_ReturnValue_2) == 0x0002D0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildrenCount_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x0002D8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002E8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bOver) == 0x000300, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bOver' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMax) == 0x000304, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bUseMin) == 0x000308, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bUseMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMin) == 0x00030C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_WarrantyPrice) == 0x000310, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_WarrantyPrice' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_3) == 0x000314, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_4) == 0x000318, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_FormatArgumentData_3) == 0x000320, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_FormatArgumentData_4) == 0x000360, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeArray_Array_3) == 0x0003A0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_FormatArgumentData_5) == 0x0003B0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_FormatArgumentData_6) == 0x0003F0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeArray_Array_4) == 0x000430, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeArray_Array_5) == 0x000440, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Format_ReturnValue_3) == 0x000450, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsChecked_ReturnValue) == 0x000468, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Variable_2) == 0x00046C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x000470, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_5) == 0x000474, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Length_ReturnValue_2) == 0x000478, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00047C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Length_ReturnValue_3) == 0x000480, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000484, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildAt_ReturnValue_1) == 0x000488, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Not_PreBool_ReturnValue_3) == 0x000490, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_AsWBP_Item_Box_Icon_1) == 0x000498, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_AsWBP_Item_Box_Icon_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_bSuccess_1) == 0x0004A0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildrenCount_ReturnValue_3) == 0x0004A4, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildrenCount_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0004A8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsSelected_bSelected_1) == 0x0004A9, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsSelected_bSelected_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CreateDelegate_OutputDelegate_2) == 0x0004AC, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetMasterDataManager_IsValid) == 0x0004BC, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetMasterDataManager_ReturnValue) == 0x0004C0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_3) == 0x0004C8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_4) == 0x0004C9, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0004D0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_5) == 0x0004D8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0004E8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_Item_Storage_Scroll_List_bIsOver) == 0x000500, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_Item_Storage_Scroll_List_bIsOver' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_Item_Storage_Scroll_List_bISCanNotLost) == 0x000501, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_Item_Storage_Scroll_List_bISCanNotLost' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Variable_3) == 0x000504, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_Item_Bag_Scroll_List_bIsOver_1) == 0x000508, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_Item_Bag_Scroll_List_bIsOver_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000509, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_5) == 0x00050A, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_Item_Bag_Scroll_List_bIsOver_2) == 0x00050B, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_Item_Bag_Scroll_List_bIsOver_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Variable_4) == 0x00050C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_BooleanOR_ReturnValue) == 0x000510, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildAt_ReturnValue_2) == 0x000518, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_BooleanOR_ReturnValue_1) == 0x000520, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_AsWBP_Item_Box_Scroll_Text_Wrapper) == 0x000528, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_AsWBP_Item_Box_Scroll_Text_Wrapper' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_bSuccess_2) == 0x000530, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000531, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_6) == 0x000534, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000538, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_6) == 0x000539, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Select_Default) == 0x00053A, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_6) == 0x000540, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_7) == 0x000550, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000560, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000578, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_2) == 0x000590, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildrenCount_ReturnValue_4) == 0x000594, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildrenCount_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildAt_ReturnValue_3) == 0x000598, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildAt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x0005A0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_AsWBP_Item_Box_Icon_2) == 0x0005A8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_AsWBP_Item_Box_Icon_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_bSuccess_3) == 0x0005B0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Add_ReturnValue_1) == 0x0005B4, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_7) == 0x0005B8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Array_Index_Variable_1) == 0x0005BC, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Get_Item) == 0x0005C0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_7) == 0x0005C8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_IntToText_ReturnValue) == 0x0005D0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Length_ReturnValue_4) == 0x0005E8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0005F0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetMoneyMax_ReturnValue) == 0x000608, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetMoneyMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetMoney_ReturnValue) == 0x00060C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_8) == 0x000610, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_8) == 0x000614, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Greater_IntInt_ReturnValue) == 0x000618, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetVisibility_ReturnValue) == 0x000619, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00061A, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_9) == 0x00061B, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsChecked_ReturnValue_1) == 0x00061C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsChecked_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_ComponentBoundEvent_bIsChecked) == 0x00061D, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetMasterDataManager_IsValid_1) == 0x00061E, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000620, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetItemBoxMasterData_ReturnValue) == 0x000628, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetItemBoxMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_3) == 0x000648, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_10) == 0x000649, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_bool_Variable_11) == 0x00064A, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Length_ReturnValue_5) == 0x00064C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_4) == 0x000650, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000658, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_5) == 0x000660, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_AsSBCreation_Character) == 0x000668, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_bSuccess_4) == 0x000670, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetGender_ReturnValue) == 0x000671, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_6) == 0x000672, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Select_Default_1) == 0x000673, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_7) == 0x000674, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Select_Default_2) == 0x000675, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_8) == 0x000676, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_Other_Belongings_Over) == 0x000677, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_Other_Belongings_Over' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_Other_Belongings_CanNotLostOther) == 0x000678, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_Other_Belongings_CanNotLostOther' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_Other_Belongings_Overlapping) == 0x000679, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_Other_Belongings_Overlapping' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetSBPlayerController_ReturnValue) == 0x000680, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_BooleanOR_ReturnValue_2) == 0x000688, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000690, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsAchievementsLoadedFromDB_ReturnValue) == 0x000698, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsAchievementsLoadedFromDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsValid_ReturnValue_1) == 0x000699, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CustomEvent_Result_1) == 0x00069A, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CustomEvent_AchievementList) == 0x0006A0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CustomEvent_AchievementList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_9) == 0x0006B0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_text_Variable) == 0x0006B8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bOver_1) == 0x0006D0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bOver_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMax_1) == 0x0006D4, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMax_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bUseMin_1) == 0x0006D8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_bUseMin_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMin_1) == 0x0006DC, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_OverPlaceMin_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_WarrantyPrice_1) == 0x0006E0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Get_Stack_Over_Sale_Over_Sale_Price_WarrantyPrice_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_8) == 0x0006E8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_byte_Variable_10) == 0x0006F8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000700, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Format_ReturnValue_4) == 0x000718, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Select_Default_3) == 0x000730, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_FormatArgumentData_7) == 0x000748, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeArray_Array_6) == 0x000788, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_9) == 0x000798, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_9) == 0x0007A8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0007C0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Format_ReturnValue_5) == 0x0007C8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Format_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Loop_Counter_Variable_1) == 0x0007E0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_10) == 0x0007E8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_10) == 0x0007F8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Less_IntInt_ReturnValue_1) == 0x000810, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Format_ReturnValue_6) == 0x000818, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Format_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Select_Default_4) == 0x000830, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_9) == 0x000848, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Select_Default_5) == 0x000850, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Variable_5) == 0x000868, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00086C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetChildAt_ReturnValue_4) == 0x000870, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetChildAt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_AsWBP_Item_Box_Icon_3) == 0x000878, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_AsWBP_Item_Box_Icon_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_DynamicCast_bSuccess_5) == 0x000880, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_LessEqual_IntInt_ReturnValue_4) == 0x000881, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_LessEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_10) == 0x000884, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsEditor_ReturnValue) == 0x000888, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Select_Default_6) == 0x000889, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_BooleanOR_ReturnValue_3) == 0x00088A, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00088B, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_SwitchEnum_CmpSuccess) == 0x00088C, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00088D, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CustomEvent_Result) == 0x00088E, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CustomEvent_RetCode) == 0x000890, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_CustomEvent_Cryptocurrency) == 0x000898, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_CustomEvent_Cryptocurrency' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Select_Default_7) == 0x0008C0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_11) == 0x0008C4, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0008C8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetRmShopComponent_ReturnValue) == 0x0008D0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetRmShopComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Request_GetCryptocurrency_ReturnValue) == 0x0008D8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Request_GetCryptocurrency_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Add_IntInt_ReturnValue_12) == 0x0008DC, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Subtract_IntInt_ReturnValue) == 0x0008E0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, Temp_int_Variable_6) == 0x0008E4, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsValid_ReturnValue_2) == 0x0008E8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_SlateColor) == 0x0008F0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_MakeStruct_SlateColor_1) == 0x000918, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_11) == 0x000940, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000950, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_12) == 0x000968, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_13) == 0x000978, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_12) == 0x000988, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_13) == 0x0009A0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_14) == 0x0009B8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetTextFromAssetByName_ReturnValue_15) == 0x0009C8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetTextFromAssetByName_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_14) == 0x0009D8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Conv_StringToText_ReturnValue_15) == 0x0009F0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Get_Item_1) == 0x000A08, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_BooleanOR_ReturnValue_4) == 0x000A10, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_SwitchEnum_CmpSuccess_1) == 0x000A11, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Array_Length_ReturnValue_6) == 0x000A14, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_IsItemBoxGenderCheck_IsWarning) == 0x000A18, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_IsItemBoxGenderCheck_IsWarning' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_Less_IntInt_ReturnValue_2) == 0x000A19, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_BooleanAND_ReturnValue) == 0x000A1A, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000A1B, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000A20, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetWeaponMasterData_IsExists) == 0x000AA8, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000AB0, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, K2Node_Select_Default_8) == 0x000B60, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000B61, "Member 'WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.OnGetCryptocurrency_Event
// 0x0030 (0x0030 - 0x0000)
struct WBP_ItemBox_C_OnGetCryptocurrency_Event final
{
public:
	bool                                          Param_Result;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7866[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      Cryptocurrency;                                    // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_OnGetCryptocurrency_Event) == 0x000008, "Wrong alignment on WBP_ItemBox_C_OnGetCryptocurrency_Event");
static_assert(sizeof(WBP_ItemBox_C_OnGetCryptocurrency_Event) == 0x000030, "Wrong size on WBP_ItemBox_C_OnGetCryptocurrency_Event");
static_assert(offsetof(WBP_ItemBox_C_OnGetCryptocurrency_Event, Param_Result) == 0x000000, "Member 'WBP_ItemBox_C_OnGetCryptocurrency_Event::Param_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_OnGetCryptocurrency_Event, RetCode) == 0x000004, "Member 'WBP_ItemBox_C_OnGetCryptocurrency_Event::RetCode' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_OnGetCryptocurrency_Event, Cryptocurrency) == 0x000008, "Member 'WBP_ItemBox_C_OnGetCryptocurrency_Event::Cryptocurrency' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_1
// 0x0018 (0x0018 - 0x0000)
struct WBP_ItemBox_C_CustomEvent_1 final
{
public:
	bool                                          Param_Result;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7867[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             AchievementList;                                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_ItemBox_C_CustomEvent_1) == 0x000008, "Wrong alignment on WBP_ItemBox_C_CustomEvent_1");
static_assert(sizeof(WBP_ItemBox_C_CustomEvent_1) == 0x000018, "Wrong size on WBP_ItemBox_C_CustomEvent_1");
static_assert(offsetof(WBP_ItemBox_C_CustomEvent_1, Param_Result) == 0x000000, "Member 'WBP_ItemBox_C_CustomEvent_1::Param_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_CustomEvent_1, AchievementList) == 0x000008, "Member 'WBP_ItemBox_C_CustomEvent_1::AchievementList' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(WBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(WBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'WBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(WBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(WBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'WBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_0
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemBox_C_CustomEvent_0 final
{
public:
	class UWBP_ItemBoxIcon_C*                     Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_ItemBox_C_CustomEvent_0");
static_assert(sizeof(WBP_ItemBox_C_CustomEvent_0) == 0x000008, "Wrong size on WBP_ItemBox_C_CustomEvent_0");
static_assert(offsetof(WBP_ItemBox_C_CustomEvent_0, Button) == 0x000000, "Member 'WBP_ItemBox_C_CustomEvent_0::Button' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemBox_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_ItemBox_C_OnAnimationFinished");
static_assert(sizeof(WBP_ItemBox_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_ItemBox_C_OnAnimationFinished");
static_assert(offsetof(WBP_ItemBox_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_ItemBox_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.HideDialog
// 0x0001 (0x0001 - 0x0000)
struct WBP_ItemBox_C_HideDialog final
{
public:
	bool                                          bPlayCloseSe;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_HideDialog) == 0x000001, "Wrong alignment on WBP_ItemBox_C_HideDialog");
static_assert(sizeof(WBP_ItemBox_C_HideDialog) == 0x000001, "Wrong size on WBP_ItemBox_C_HideDialog");
static_assert(offsetof(WBP_ItemBox_C_HideDialog, bPlayCloseSe) == 0x000000, "Member 'WBP_ItemBox_C_HideDialog::bPlayCloseSe' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Get Scroll List Item
// 0x0048 (0x0048 - 0x0000)
struct WBP_ItemBox_C_Get_Scroll_List_Item final
{
public:
	class UWBP_ItemBoxScrollText_Wrapper_C*       AsWBP_Item_Box_Scroll_Text;                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7868[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxScrollText_Wrapper_C*       CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       K2Node_DynamicCast_AsWBP_Item_Box_Scroll_Text_Wrapper; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7869[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_Get_Scroll_List_Item) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Get_Scroll_List_Item");
static_assert(sizeof(WBP_ItemBox_C_Get_Scroll_List_Item) == 0x000048, "Wrong size on WBP_ItemBox_C_Get_Scroll_List_Item");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, AsWBP_Item_Box_Scroll_Text) == 0x000000, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::AsWBP_Item_Box_Scroll_Text' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, Temp_int_Variable) == 0x000008, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, Temp_int_Variable_1) == 0x000010, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, K2Node_DynamicCast_AsWBP_Item_Box_Scroll_Text_Wrapper) == 0x000028, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::K2Node_DynamicCast_AsWBP_Item_Box_Scroll_Text_Wrapper' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Scroll_List_Item, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'WBP_ItemBox_C_Get_Scroll_List_Item::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Get Select Item Type List
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_ItemBox_C_Get_Select_Item_Type_List final
{
public:
	E_ItemBoxDestinationType                      DestinationType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_786A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ItemBoxIcon_C*>             ItemList;                                          // 0x0008(0x0010)(Parm, OutParm, ContainsInstancedReference)
	bool                                          bDuplication;                                      // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_786B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ItemBoxIcon_C*>             SwapList;                                          // 0x0020(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_786C[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_786D[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_786E[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_786F[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7870[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Check_Use_Min_bUseMin;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7871[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Check_Use_Min_OutMax;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Check_Use_Min_OutMin;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item_2;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDestinationItem_Result;                 // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7872[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7873[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_Get_Select_Item_Type_List) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Get_Select_Item_Type_List");
static_assert(sizeof(WBP_ItemBox_C_Get_Select_Item_Type_List) == 0x0000B8, "Wrong size on WBP_ItemBox_C_Get_Select_Item_Type_List");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, DestinationType) == 0x000000, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::DestinationType' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, ItemList) == 0x000008, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::ItemList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, bDuplication) == 0x000018, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::bDuplication' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, SwapList) == 0x000020, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::SwapList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, Temp_int_Array_Index_Variable) == 0x000030, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, K2Node_SwitchEnum_CmpSuccess) == 0x000034, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00003C, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, Temp_bool_True_if_break_was_hit_Variable) == 0x000044, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, Temp_int_Array_Index_Variable_1) == 0x000048, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Not_PreBool_ReturnValue) == 0x00004C, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, Temp_int_Array_Index_Variable_2) == 0x000050, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, Temp_int_Loop_Counter_Variable_1) == 0x000054, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x000058, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, Temp_int_Loop_Counter_Variable_2) == 0x00005C, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Array_Get_Item) == 0x000060, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Add_IntInt_ReturnValue_2) == 0x000070, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Check_Use_Min_bUseMin) == 0x000074, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Check_Use_Min_bUseMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Check_Use_Min_OutMax) == 0x000078, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Check_Use_Min_OutMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Check_Use_Min_OutMin) == 0x00007C, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Check_Use_Min_OutMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Array_Get_Item_2) == 0x000088, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Add_IntInt_ReturnValue_3) == 0x000090, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Array_Add_ReturnValue) == 0x000094, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_IsDestinationItem_Result) == 0x000098, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_IsDestinationItem_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Add_IntInt_ReturnValue_4) == 0x00009C, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Add_IntInt_ReturnValue_5) == 0x0000A0, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A4, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Array_Length_ReturnValue_1) == 0x0000A8, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Array_Length_ReturnValue_2) == 0x0000AC, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B0, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000B1, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Item_Type_List, CallFunc_BooleanAND_ReturnValue) == 0x0000B2, "Member 'WBP_ItemBox_C_Get_Select_Item_Type_List::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Get Select Other Type List
// 0x0050 (0x0050 - 0x0000)
struct WBP_ItemBox_C_Get_Select_Other_Type_List final
{
public:
	TArray<class UWBP_ItemBoxIcon_C*>             ItemList;                                          // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	bool                                          bDuplication;                                      // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7874[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ItemBoxIcon_C*>             SwapList;                                          // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7875[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_Get_Select_Other_Type_List) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Get_Select_Other_Type_List");
static_assert(sizeof(WBP_ItemBox_C_Get_Select_Other_Type_List) == 0x000050, "Wrong size on WBP_ItemBox_C_Get_Select_Other_Type_List");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, ItemList) == 0x000000, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::ItemList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, bDuplication) == 0x000010, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::bDuplication' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, SwapList) == 0x000018, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::SwapList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, Temp_int_Array_Index_Variable) == 0x000028, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, CallFunc_Array_Add_ReturnValue) == 0x000044, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_Other_Type_List, K2Node_SwitchEnum_CmpSuccess) == 0x000048, "Member 'WBP_ItemBox_C_Get_Select_Other_Type_List::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Add Item Storage Scroll List
// 0x0328 (0x0328 - 0x0000)
struct WBP_ItemBox_C_Add_Item_Storage_Scroll_List final
{
public:
	bool                                          bIsOver;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bISCanNotLost;                                     // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCanNotLost;                                       // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7876[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxScrollText_Wrapper_C*       Title;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMax;                                 // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMin;                                 // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_ItemBoxIcon_C*>             LocalList;                                         // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          bOver;                                             // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7877[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NowNum;                                            // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7878[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7879[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_787A[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ItemBoxIcon_C*>             CallFunc_Get_Select_Item_Type_List_ItemList;       // 0x0090(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsCanNotLost_CanNotLost;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_787B[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackableNum_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByItemIndex_bOutExist;        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_787C[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByItemIndex_ReturnValue;      // 0x00B0(0x0118)(ConstParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_787D[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_787E[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_787F[0x2];                                     // 0x01E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text; // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7880[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0200(0x00D0)()
	class UWBP_ItemBoxScrollText_Wrapper_C*       CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text_1; // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02F8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0310(0x0018)()
};
static_assert(alignof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Add_Item_Storage_Scroll_List");
static_assert(sizeof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List) == 0x000328, "Wrong size on WBP_ItemBox_C_Add_Item_Storage_Scroll_List");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, bIsOver) == 0x000000, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::bIsOver' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, bISCanNotLost) == 0x000001, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::bISCanNotLost' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, bCanNotLost) == 0x000002, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::bCanNotLost' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, Title) == 0x000008, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::Title' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, ExpectationNamMax) == 0x000010, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::ExpectationNamMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, ExpectationNamMin) == 0x000014, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::ExpectationNamMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, LocalList) == 0x000018, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::LocalList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, bOver) == 0x000028, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::bOver' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, NowNum) == 0x00002C, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetSBPlayerController_ReturnValue) == 0x000030, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, Temp_int_Array_Index_Variable) == 0x000068, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetStorage_ReturnValue) == 0x000070, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Array_Get_Item) == 0x000078, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000088, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Get_Select_Item_Type_List_ItemList) == 0x000090, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Get_Select_Item_Type_List_ItemList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_IsCanNotLost_CanNotLost) == 0x0000A0, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_IsCanNotLost_CanNotLost' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetStackableNum_ReturnValue) == 0x0000A4, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetStackableNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_BP_FindItem_ByItemIndex_bOutExist) == 0x0000A8, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_BP_FindItem_ByItemIndex_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_BP_FindItem_ByItemIndex_ReturnValue) == 0x0000B0, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_BP_FindItem_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Greater_IntInt_ReturnValue) == 0x0001C8, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, Temp_int_Loop_Counter_Variable) == 0x0001CC, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Less_IntInt_ReturnValue) == 0x0001D0, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001D4, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001D8, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Array_Length_ReturnValue_1) == 0x0001DC, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Add_IntInt_ReturnValue_4) == 0x0001E0, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0001E4, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetMasterDataManager_IsValid) == 0x0001E5, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001E8, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text) == 0x0001F0, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetItemMasterData_IsExists) == 0x0001F8, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetItemMasterData_ReturnValue) == 0x000200, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text_1) == 0x0002D0, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetItemText_ReturnValue) == 0x0002D8, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0002E8, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002F8, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Storage_Scroll_List, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000310, "Member 'WBP_ItemBox_C_Add_Item_Storage_Scroll_List::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Add Item Bag Scroll List
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_ItemBox_C_Add_Item_Bag_Scroll_List final
{
public:
	E_ItemBoxDestinationType                      DestinationType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsOver;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7881[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                Storage;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       Item_Local;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Over;                                              // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemBoxDestinationType                      Type;                                              // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7882[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxScrollText_Wrapper_C*       Title_Local;                                       // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_ItemBoxIcon_C*>             LocalItemList;                                     // 0x0028(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class FName                                   Temp_name_Variable;                                // 0x0038(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ItemBoxDestinationType                      Temp_byte_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7883[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ItemBoxIcon_C*>             CallFunc_Get_Select_Item_Type_List_ItemList;       // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ItemBoxDestinationType                      Temp_byte_Variable_1;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7884[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x0070(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0078(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0080(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0088(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x0090(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ItemBoxDestinationType                      Temp_byte_Variable_2;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7885[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                Temp_object_Variable;                              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7886[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemsNum_ReturnValue;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemsNum_ReturnValue_1;                // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue_1;                // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x00C0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x00C8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Num_Random_Result;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7887[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_8;                              // 0x00E8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_1;                           // 0x00F8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_2;                           // 0x0110(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0118(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetItemBag_ReturnValue;                   // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Num_Nu_;                         // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Num_Max1;                        // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Num_Min1;                        // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7888[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default_3;                           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7889[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_788A[0x6];                                     // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxScrollText_Wrapper_C*       CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text; // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text_1; // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Add_Item_Bag_Scroll_List");
static_assert(sizeof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List) == 0x0001B0, "Wrong size on WBP_ItemBox_C_Add_Item_Bag_Scroll_List");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, DestinationType) == 0x000000, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::DestinationType' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, bIsOver) == 0x000001, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::bIsOver' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Storage) == 0x000008, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Storage' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Item_Local) == 0x000010, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Item_Local' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Over) == 0x000018, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Over' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Type) == 0x000019, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Type' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Title_Local) == 0x000020, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Title_Local' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, LocalItemList) == 0x000028, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::LocalItemList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_name_Variable) == 0x000038, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_byte_Variable) == 0x000040, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Get_Select_Item_Type_List_ItemList) == 0x000048, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Get_Select_Item_Type_List_ItemList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_int_Variable) == 0x000058, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_int_Variable_1) == 0x00005C, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_int_Variable_2) == 0x000060, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_int_Variable_3) == 0x000064, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_int_Variable_4) == 0x000068, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_byte_Variable_1) == 0x00006C, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_name_Variable_1) == 0x000070, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_name_Variable_2) == 0x000078, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_name_Variable_3) == 0x000080, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_name_Variable_4) == 0x000088, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_name_Variable_5) == 0x000090, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_byte_Variable_2) == 0x000098, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_object_Variable) == 0x0000A0, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Greater_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_GetItemsNum_ReturnValue) == 0x0000B0, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_GetItemsNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_GetItemsNum_ReturnValue_1) == 0x0000B4, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_GetItemsNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_GetCapacity_ReturnValue) == 0x0000B8, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_GetCapacity_ReturnValue_1) == 0x0000BC, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_GetCapacity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_name_Variable_6) == 0x0000C0, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_name_Variable_7) == 0x0000C8, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Get_Item_Num_Random_Result) == 0x0000D0, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Get_Item_Num_Random_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000D8, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D9, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_GetOrnamentStorage_ReturnValue) == 0x0000E0, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_GetOrnamentStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_name_Variable_8) == 0x0000E8, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_name_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, Temp_int_Variable_5) == 0x0000F0, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, K2Node_Select_Default) == 0x0000F4, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, K2Node_Select_Default_1) == 0x0000F8, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000100, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, K2Node_Select_Default_2) == 0x000110, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Conv_StringToText_ReturnValue) == 0x000118, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000130, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_GetEquipmentBag_ReturnValue) == 0x000158, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_GetItemBag_ReturnValue) == 0x000160, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_GetItemBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Get_Item_Num_Nu_) == 0x000168, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Get_Item_Num_Nu_' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Get_Item_Num_Max1) == 0x00016C, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Get_Item_Num_Max1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Get_Item_Num_Min1) == 0x000170, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Get_Item_Num_Min1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, K2Node_Select_Default_3) == 0x000178, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000180, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x000184, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Add_IntInt_ReturnValue_2) == 0x000188, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Add_IntInt_ReturnValue_3) == 0x00018C, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Add_IntInt_ReturnValue_4) == 0x000190, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Add_IntInt_ReturnValue_5) == 0x000194, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000198, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Greater_IntInt_ReturnValue_3) == 0x000199, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text) == 0x0001A0, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Item_Bag_Scroll_List, CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text_1) == 0x0001A8, "Member 'WBP_ItemBox_C_Add_Item_Bag_Scroll_List::CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text_1' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Add Other Belongings
// 0x01D8 (0x01D8 - 0x0000)
struct WBP_ItemBox_C_Add_Other_Belongings final
{
public:
	bool                                          Over;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_CanNotLostOther;                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Overlapping;                                       // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LostOver;                                          // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         ExpectationNamMax;                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMin;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxAmoun;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowAmoun;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_788B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxScrollText_Wrapper_C*       SwapScrollText;                                    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemTarget;                                        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanNotLost;                                       // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OnsOverlapping;                                    // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_788C[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxScrollText_Wrapper_C*       Title;                                             // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_ItemBoxIcon_C*>             LocalList;                                         // 0x0038(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_788D[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_788E[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0058(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0060(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCanNotLost_CanNotLost;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_788F[0x5];                                     // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName;    // 0x0070(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType;    // 0x0088(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName;  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7890[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7891[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00B8(0x0018)()
	bool                                          CallFunc_IsStackItem_NewParam;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7892[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAmount_RewardType_Amoun;               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAmountMax_RewardType_MaxAmoun;         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7893[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxScrollText_Wrapper_C*       CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text; // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCanNotLost_CanNotLost_1;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOverlapping_bOverlapping;               // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7894[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x00EC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7895[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName_1;  // 0x0108(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType_1;  // 0x0120(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName_1; // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7896[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0140(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x0158(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7897[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7898[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item;                           // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0198(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7899[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxScrollText_Wrapper_C*       CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text_1; // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_789A[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ItemBoxIcon_C*>             CallFunc_Get_Select_Other_Type_List_ItemList;      // 0x01C8(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_ItemBox_C_Add_Other_Belongings) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Add_Other_Belongings");
static_assert(sizeof(WBP_ItemBox_C_Add_Other_Belongings) == 0x0001D8, "Wrong size on WBP_ItemBox_C_Add_Other_Belongings");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Over) == 0x000000, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Over' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Param_CanNotLostOther) == 0x000001, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Param_CanNotLostOther' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Overlapping) == 0x000002, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Overlapping' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, LostOver) == 0x000003, "Member 'WBP_ItemBox_C_Add_Other_Belongings::LostOver' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, ExpectationNamMax) == 0x000004, "Member 'WBP_ItemBox_C_Add_Other_Belongings::ExpectationNamMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, ExpectationNamMin) == 0x000008, "Member 'WBP_ItemBox_C_Add_Other_Belongings::ExpectationNamMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, MaxAmoun) == 0x00000C, "Member 'WBP_ItemBox_C_Add_Other_Belongings::MaxAmoun' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, NowAmoun) == 0x000010, "Member 'WBP_ItemBox_C_Add_Other_Belongings::NowAmoun' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, SwapScrollText) == 0x000018, "Member 'WBP_ItemBox_C_Add_Other_Belongings::SwapScrollText' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, ItemTarget) == 0x000020, "Member 'WBP_ItemBox_C_Add_Other_Belongings::ItemTarget' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, bCanNotLost) == 0x000028, "Member 'WBP_ItemBox_C_Add_Other_Belongings::bCanNotLost' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, OnsOverlapping) == 0x000029, "Member 'WBP_ItemBox_C_Add_Other_Belongings::OnsOverlapping' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Title) == 0x000030, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Title' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, LocalList) == 0x000038, "Member 'WBP_ItemBox_C_Add_Other_Belongings::LocalList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Temp_bool_Variable) == 0x000048, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Temp_int_Array_Index_Variable) == 0x000054, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Temp_name_Variable) == 0x000058, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Temp_name_Variable_1) == 0x000060, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_IsCanNotLost_CanNotLost) == 0x000068, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_IsCanNotLost_CanNotLost' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000069, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Temp_bool_Variable_1) == 0x00006A, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Get_Reward_Item_Name_and_Type_OutName) == 0x000070, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Get_Reward_Item_Name_and_Type_OutName' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Get_Reward_Item_Name_and_Type_OutType) == 0x000088, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Get_Reward_Item_Name_and_Type_OutType' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName) == 0x0000A0, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Add_IntInt_ReturnValue) == 0x0000A4, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A8, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000AC, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000B0, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Temp_bool_Variable_2) == 0x0000B4, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, K2Node_Select_Default) == 0x0000B8, "Member 'WBP_ItemBox_C_Add_Other_Belongings::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_IsStackItem_NewParam) == 0x0000D0, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_IsStackItem_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D1, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_GetAmount_RewardType_Amoun) == 0x0000D4, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_GetAmount_RewardType_Amoun' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_GetAmountMax_RewardType_MaxAmoun) == 0x0000D8, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_GetAmountMax_RewardType_MaxAmoun' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text) == 0x0000E0, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_IsCanNotLost_CanNotLost_1) == 0x0000E8, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_IsCanNotLost_CanNotLost_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_IsOverlapping_bOverlapping) == 0x0000E9, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_IsOverlapping_bOverlapping' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, K2Node_Select_Default_1) == 0x0000EC, "Member 'WBP_ItemBox_C_Add_Other_Belongings::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000F8, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Get_Reward_Item_Name_and_Type_OutName_1) == 0x000108, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Get_Reward_Item_Name_and_Type_OutName_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Get_Reward_Item_Name_and_Type_OutType_1) == 0x000120, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Get_Reward_Item_Name_and_Type_OutType_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName_1) == 0x000138, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Conv_StringToText_ReturnValue) == 0x000140, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, K2Node_Select_Default_2) == 0x000158, "Member 'WBP_ItemBox_C_Add_Other_Belongings::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_BooleanOR_ReturnValue) == 0x000170, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, Temp_int_Loop_Counter_Variable) == 0x000174, "Member 'WBP_ItemBox_C_Add_Other_Belongings::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_BooleanOR_ReturnValue_1) == 0x000178, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Add_IntInt_ReturnValue_4) == 0x00017C, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000180, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Array_Get_Item) == 0x000190, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000198, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Array_Length_ReturnValue_1) == 0x0001B0, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text_1) == 0x0001B8, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Get_Scroll_List_Item_AsWBP_Item_Box_Scroll_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Less_IntInt_ReturnValue) == 0x0001C0, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Add_Other_Belongings, CallFunc_Get_Select_Other_Type_List_ItemList) == 0x0001C8, "Member 'WBP_ItemBox_C_Add_Other_Belongings::CallFunc_Get_Select_Other_Type_List_ItemList' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.IsDestinationItem
// 0x0108 (0x0108 - 0x0000)
struct WBP_ItemBox_C_IsDestinationItem final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ItemBoxDestinationType                      Destination;                                       // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_Result;                                      // 0x0006(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_14;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_15;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable_1;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_789B[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_789C[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0030(0x00D0)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_IsDestinationItem) == 0x000008, "Wrong alignment on WBP_ItemBox_C_IsDestinationItem");
static_assert(sizeof(WBP_ItemBox_C_IsDestinationItem) == 0x000108, "Wrong size on WBP_ItemBox_C_IsDestinationItem");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, ItemId) == 0x000000, "Member 'WBP_ItemBox_C_IsDestinationItem::ItemId' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, ItemType) == 0x000004, "Member 'WBP_ItemBox_C_IsDestinationItem::ItemType' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Destination) == 0x000005, "Member 'WBP_ItemBox_C_IsDestinationItem::Destination' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Param_Result) == 0x000006, "Member 'WBP_ItemBox_C_IsDestinationItem::Param_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable) == 0x000007, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'WBP_ItemBox_C_IsDestinationItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'WBP_ItemBox_C_IsDestinationItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00000A, "Member 'WBP_ItemBox_C_IsDestinationItem::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_1) == 0x00000B, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_2) == 0x00000C, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_3) == 0x00000D, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_4) == 0x00000E, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_5) == 0x00000F, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_byte_Variable) == 0x000010, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_6) == 0x000011, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_7) == 0x000012, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_8) == 0x000013, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_9) == 0x000014, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_10) == 0x000015, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_11) == 0x000016, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_12) == 0x000017, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_13) == 0x000018, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_14) == 0x000019, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, K2Node_Select_Default) == 0x00001A, "Member 'WBP_ItemBox_C_IsDestinationItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_bool_Variable_15) == 0x00001B, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, Temp_byte_Variable_1) == 0x00001C, "Member 'WBP_ItemBox_C_IsDestinationItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, CallFunc_GetMasterDataManager_IsValid) == 0x00001D, "Member 'WBP_ItemBox_C_IsDestinationItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'WBP_ItemBox_C_IsDestinationItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, K2Node_Select_Default_1) == 0x000028, "Member 'WBP_ItemBox_C_IsDestinationItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, CallFunc_GetItemMasterData_IsExists) == 0x000029, "Member 'WBP_ItemBox_C_IsDestinationItem::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, CallFunc_GetItemMasterData_ReturnValue) == 0x000030, "Member 'WBP_ItemBox_C_IsDestinationItem::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, CallFunc_BooleanAND_ReturnValue) == 0x000100, "Member 'WBP_ItemBox_C_IsDestinationItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, CallFunc_Not_PreBool_ReturnValue) == 0x000101, "Member 'WBP_ItemBox_C_IsDestinationItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsDestinationItem, CallFunc_BooleanAND_ReturnValue_1) == 0x000102, "Member 'WBP_ItemBox_C_IsDestinationItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Get Stack Over Sale Over Sale Price
// 0x01E0 (0x01E0 - 0x0000)
struct WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price final
{
public:
	bool                                          bOver;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_789D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OverPlaceMax;                                      // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseMin;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_789E[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OverPlaceMin;                                      // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WarrantyPrice;                                     // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemBoxType                                  BoxType;                                           // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_789F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalPrice;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OverMinPlace;                                      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseMin;                                            // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78A0[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SwapNum;                                           // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OverMaxPrice;                                      // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78A1[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78A2[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBItemBoxContentParam                 CallFunc_Array_Get_Item;                           // 0x0044(0x0020)(NoDestructor)
	bool                                          CallFunc_Check_Use_Min_bUseMin;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78A3[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Check_Use_Min_OutMax;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Check_Use_Min_OutMin;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     CallFunc_RewardItemTypeToItemType_ItemType;        // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     CallFunc_RewardItemTypeToItemType_ItemType_1;      // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78A4[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackableNum_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Select_Item_bSelect;                   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Select_Item_bSelect_1;                 // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78A5[0x1];                                     // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78A6[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78A7[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78A8[0x2];                                     // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByItemIndex_bOutExist;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78A9[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByItemIndex_ReturnValue;      // 0x00B8(0x0118)(ConstParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78AA[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_2;            // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price");
static_assert(sizeof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price) == 0x0001E0, "Wrong size on WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, bOver) == 0x000000, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::bOver' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, OverPlaceMax) == 0x000004, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::OverPlaceMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, bUseMin) == 0x000008, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::bUseMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, OverPlaceMin) == 0x00000C, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::OverPlaceMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, WarrantyPrice) == 0x000010, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::WarrantyPrice' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, BoxType) == 0x000014, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::BoxType' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, TotalPrice) == 0x000018, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::TotalPrice' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, OverMinPlace) == 0x00001C, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::OverMinPlace' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, UseMin) == 0x000020, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::UseMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, SwapNum) == 0x000024, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::SwapNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, OverMaxPrice) == 0x000028, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::OverMaxPrice' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_GetSBPlayerController_ReturnValue) == 0x000030, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000039, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00003A, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, Temp_int_Array_Index_Variable) == 0x000040, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Array_Get_Item) == 0x000044, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Check_Use_Min_bUseMin) == 0x000064, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Check_Use_Min_bUseMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Check_Use_Min_OutMax) == 0x000068, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Check_Use_Min_OutMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Check_Use_Min_OutMin) == 0x00006C, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Check_Use_Min_OutMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000070, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_RewardItemTypeToItemType_ItemType) == 0x000071, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_RewardItemTypeToItemType_ItemType' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_RewardItemTypeToItemType_ItemType_1) == 0x000072, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_RewardItemTypeToItemType_ItemType_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000074, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_GetStackableNum_ReturnValue) == 0x000078, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_GetStackableNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Multiply_IntInt_ReturnValue) == 0x00007C, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000080, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Is_Select_Item_bSelect) == 0x000088, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Is_Select_Item_bSelect' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Is_Select_Item_bSelect_1) == 0x000089, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Is_Select_Item_bSelect_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_BooleanAND_ReturnValue) == 0x00008A, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Add_IntInt_ReturnValue_1) == 0x00008C, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Add_IntInt_ReturnValue_2) == 0x000090, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, K2Node_SwitchEnum_CmpSuccess) == 0x000094, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Less_IntInt_ReturnValue) == 0x000095, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, Temp_int_Loop_Counter_Variable) == 0x000098, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Less_IntInt_ReturnValue_1) == 0x00009C, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000A0, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A4, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000A5, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_GetStorage_ReturnValue) == 0x0000A8, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_BP_FindItem_ByItemIndex_bOutExist) == 0x0000B0, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_BP_FindItem_ByItemIndex_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_BP_FindItem_ByItemIndex_ReturnValue) == 0x0000B8, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_BP_FindItem_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Add_IntInt_ReturnValue_4) == 0x0001D0, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001D4, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0001D8, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price, CallFunc_Multiply_IntInt_ReturnValue_2) == 0x0001DC, "Member 'WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price::CallFunc_Multiply_IntInt_ReturnValue_2' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Get Select List
// 0x0048 (0x0048 - 0x0000)
struct WBP_ItemBox_C_Get_Select_List final
{
public:
	TArray<int32>                                 SelectedElement;                                   // 0x0000(0x0010)(Parm, OutParm)
	TArray<int32>                                 ItemBoxContentsIdList;                             // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78AB[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78AC[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78AD[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_Get_Select_List) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Get_Select_List");
static_assert(sizeof(WBP_ItemBox_C_Get_Select_List) == 0x000048, "Wrong size on WBP_ItemBox_C_Get_Select_List");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, SelectedElement) == 0x000000, "Member 'WBP_ItemBox_C_Get_Select_List::SelectedElement' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, ItemBoxContentsIdList) == 0x000010, "Member 'WBP_ItemBox_C_Get_Select_List::ItemBoxContentsIdList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_ItemBox_C_Get_Select_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_ItemBox_C_Get_Select_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_ItemBox_C_Get_Select_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, K2Node_SwitchEnum_CmpSuccess) == 0x00002C, "Member 'WBP_ItemBox_C_Get_Select_List::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WBP_ItemBox_C_Get_Select_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_ItemBox_C_Get_Select_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WBP_ItemBox_C_Get_Select_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Select_List, CallFunc_Array_Add_ReturnValue) == 0x000044, "Member 'WBP_ItemBox_C_Get_Select_List::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.IsAddItem
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_ItemBox_C_IsAddItem final
{
public:
	struct FSBItemBoxContentParam                 SBItemBoxContentParam;                             // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          IsAdd;                                             // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78AE[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78AF[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78B0[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0050(0x0088)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_IsAddItem) == 0x000008, "Wrong alignment on WBP_ItemBox_C_IsAddItem");
static_assert(sizeof(WBP_ItemBox_C_IsAddItem) == 0x0000E0, "Wrong size on WBP_ItemBox_C_IsAddItem");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, SBItemBoxContentParam) == 0x000000, "Member 'WBP_ItemBox_C_IsAddItem::SBItemBoxContentParam' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, IsAdd) == 0x000020, "Member 'WBP_ItemBox_C_IsAddItem::IsAdd' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000021, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000028, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, K2Node_DynamicCast_AsSBCreation_Character) == 0x000030, "Member 'WBP_ItemBox_C_IsAddItem::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_ItemBox_C_IsAddItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_GetMasterDataManager_IsValid) == 0x000039, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_GetGender_ReturnValue) == 0x000048, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000049, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000050, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000D8, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000D9, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0000DA, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_BooleanAND_ReturnValue) == 0x0000DB, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0000DC, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0000DD, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsAddItem, CallFunc_BooleanAND_ReturnValue_1) == 0x0000DE, "Member 'WBP_ItemBox_C_IsAddItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Is Overlapping
// 0x0160 (0x0160 - 0x0000)
struct WBP_ItemBox_C_Is_Overlapping final
{
public:
	ESBRewardItemType                             Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78B1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InId;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOverlapping;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78B2[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         EmoteList;                                         // 0x0010(0x0010)(Edit, BlueprintVisible)
	bool                                          SwapFlag;                                          // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78B3[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78B4[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78B5[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLearnedRecipeSet_ReturnValue;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78B6[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStampComponent*                CallFunc_GetPlayerStampComponent_ReturnValue;      // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78B7[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindStampMasterData_IsExists;             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78B8[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_FindStampMasterData_ReturnValue;          // 0x0078(0x0020)()
	struct FSBStampMasterData                     CallFunc_Array_Get_Item;                           // 0x0098(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerStampPossession_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78B9[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue;             // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue_1;          // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLearned_ReturnValue;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLearned_ReturnValue_1;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78BA[0x5];                                     // 0x00EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAchievementPossession_ReturnValue;      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78BB[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78BC[0x2];                                     // 0x0126(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_1;           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78BD[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStampComponent*                CallFunc_GetPlayerStampComponent_ReturnValue_1;    // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerStampPossession_ReturnValue_1;    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78BE[0x2];                                     // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_2;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_ReturnValue;           // 0x0150(0x0010)(ReferenceParm)
};
static_assert(alignof(WBP_ItemBox_C_Is_Overlapping) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Is_Overlapping");
static_assert(sizeof(WBP_ItemBox_C_Is_Overlapping) == 0x000160, "Wrong size on WBP_ItemBox_C_Is_Overlapping");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, Selection) == 0x000000, "Member 'WBP_ItemBox_C_Is_Overlapping::Selection' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, InId) == 0x000004, "Member 'WBP_ItemBox_C_Is_Overlapping::InId' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, bOverlapping) == 0x000008, "Member 'WBP_ItemBox_C_Is_Overlapping::bOverlapping' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, EmoteList) == 0x000010, "Member 'WBP_ItemBox_C_Is_Overlapping::EmoteList' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, SwapFlag) == 0x000020, "Member 'WBP_ItemBox_C_Is_Overlapping::SwapFlag' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, ID) == 0x000024, "Member 'WBP_ItemBox_C_Is_Overlapping::ID' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'WBP_ItemBox_C_Is_Overlapping::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'WBP_ItemBox_C_Is_Overlapping::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, Temp_int_Array_Index_Variable_1) == 0x000030, "Member 'WBP_ItemBox_C_Is_Overlapping::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetSBPlayerController_ReturnValue) == 0x000038, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetCraftComponent_ReturnValue) == 0x000040, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_IsLearnedRecipeSet_ReturnValue) == 0x000048, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_IsLearnedRecipeSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetSBPlayerState_ReturnValue) == 0x000050, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetPlayerStampComponent_ReturnValue) == 0x000058, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetPlayerStampComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetMasterDataManager_IsValid) == 0x000060, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetMasterDataManager_ReturnValue) == 0x000068, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'WBP_ItemBox_C_Is_Overlapping::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_FindStampMasterData_IsExists) == 0x000074, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_FindStampMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_FindStampMasterData_ReturnValue) == 0x000078, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_FindStampMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_Array_Get_Item) == 0x000098, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_Add_IntInt_ReturnValue) == 0x0000BC, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_IsPlayerStampPossession_ReturnValue) == 0x0000C0, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_IsPlayerStampPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000C8, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0000D0, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetImaginLabComp_ReturnValue) == 0x0000D8, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetImaginLabComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetCraftComponent_ReturnValue_1) == 0x0000E0, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetCraftComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_IsLearned_ReturnValue) == 0x0000E8, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_IsLearned_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_IsLearned_ReturnValue_1) == 0x0000E9, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_IsLearned_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetNetworkDataCache_IsValid) == 0x0000EA, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000F0, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_Conv_IntToString_ReturnValue) == 0x0000F8, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_IsAchievementPossession_ReturnValue) == 0x000108, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_IsAchievementPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_Array_Get_Item_1) == 0x000110, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_Array_Length_ReturnValue_1) == 0x000120, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000124, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_Less_IntInt_ReturnValue) == 0x000125, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetSBPlayerState_ReturnValue_1) == 0x000128, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetSBPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, Temp_int_Loop_Counter_Variable_1) == 0x000130, "Member 'WBP_ItemBox_C_Is_Overlapping::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetPlayerStampComponent_ReturnValue_1) == 0x000138, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetPlayerStampComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_IsPlayerStampPossession_ReturnValue_1) == 0x000140, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_IsPlayerStampPossession_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_Less_IntInt_ReturnValue_1) == 0x000141, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_Add_IntInt_ReturnValue_1) == 0x000144, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetSBPlayerState_ReturnValue_2) == 0x000148, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetSBPlayerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Overlapping, CallFunc_GetUnlockEmoteData_ReturnValue) == 0x000150, "Member 'WBP_ItemBox_C_Is_Overlapping::CallFunc_GetUnlockEmoteData_ReturnValue' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num
// 0x0058 (0x0058 - 0x0000)
struct WBP_ItemBox_C_Get_Item_Num final
{
public:
	TArray<class UWBP_ItemBoxIcon_C*>             TargetArray;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                         NuM;                                               // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max1;                                              // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Min1;                                              // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Min;                                               // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Total;                                             // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78BF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C0[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_Get_Item_Num) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Get_Item_Num");
static_assert(sizeof(WBP_ItemBox_C_Get_Item_Num) == 0x000058, "Wrong size on WBP_ItemBox_C_Get_Item_Num");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, TargetArray) == 0x000000, "Member 'WBP_ItemBox_C_Get_Item_Num::TargetArray' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, NuM) == 0x000010, "Member 'WBP_ItemBox_C_Get_Item_Num::NuM' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, Max1) == 0x000014, "Member 'WBP_ItemBox_C_Get_Item_Num::Max1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, Min1) == 0x000018, "Member 'WBP_ItemBox_C_Get_Item_Num::Min1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, Min) == 0x00001C, "Member 'WBP_ItemBox_C_Get_Item_Num::Min' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, Max) == 0x000020, "Member 'WBP_ItemBox_C_Get_Item_Num::Max' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, Total) == 0x000024, "Member 'WBP_ItemBox_C_Get_Item_Num::Total' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_ItemBox_C_Get_Item_Num::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'WBP_ItemBox_C_Get_Item_Num::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'WBP_ItemBox_C_Get_Item_Num::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_ItemBox_C_Get_Item_Num::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WBP_ItemBox_C_Get_Item_Num::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'WBP_ItemBox_C_Get_Item_Num::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'WBP_ItemBox_C_Get_Item_Num::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, CallFunc_Add_IntInt_ReturnValue_2) == 0x00004C, "Member 'WBP_ItemBox_C_Get_Item_Num::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num, CallFunc_Add_IntInt_ReturnValue_3) == 0x000050, "Member 'WBP_ItemBox_C_Get_Item_Num::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Is Select Item
// 0x0038 (0x0038 - 0x0000)
struct WBP_ItemBox_C_Is_Select_Item final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelect;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C2[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Get_Select_List_SelectedElement;          // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_Is_Select_Item) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Is_Select_Item");
static_assert(sizeof(WBP_ItemBox_C_Is_Select_Item) == 0x000038, "Wrong size on WBP_ItemBox_C_Is_Select_Item");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, ID) == 0x000000, "Member 'WBP_ItemBox_C_Is_Select_Item::ID' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, bSelect) == 0x000004, "Member 'WBP_ItemBox_C_Is_Select_Item::bSelect' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_ItemBox_C_Is_Select_Item::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_ItemBox_C_Is_Select_Item::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_ItemBox_C_Is_Select_Item::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000014, "Member 'WBP_ItemBox_C_Is_Select_Item::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, CallFunc_Get_Select_List_SelectedElement) == 0x000018, "Member 'WBP_ItemBox_C_Is_Select_Item::CallFunc_Get_Select_List_SelectedElement' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_ItemBox_C_Is_Select_Item::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'WBP_ItemBox_C_Is_Select_Item::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000030, "Member 'WBP_ItemBox_C_Is_Select_Item::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Is_Select_Item, CallFunc_Less_IntInt_ReturnValue) == 0x000031, "Member 'WBP_ItemBox_C_Is_Select_Item::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.GetAmount_RewardType
// 0x0020 (0x0020 - 0x0000)
struct WBP_ItemBox_C_GetAmount_RewardType final
{
public:
	ESBRewardItemType                             Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78C3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InId;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amoun;                                             // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetBP_ReturnValue;                        // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_GetAmount_RewardType) == 0x000004, "Wrong alignment on WBP_ItemBox_C_GetAmount_RewardType");
static_assert(sizeof(WBP_ItemBox_C_GetAmount_RewardType) == 0x000020, "Wrong size on WBP_ItemBox_C_GetAmount_RewardType");
static_assert(offsetof(WBP_ItemBox_C_GetAmount_RewardType, Selection) == 0x000000, "Member 'WBP_ItemBox_C_GetAmount_RewardType::Selection' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_GetAmount_RewardType, InId) == 0x000004, "Member 'WBP_ItemBox_C_GetAmount_RewardType::InId' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_GetAmount_RewardType, Amoun) == 0x000008, "Member 'WBP_ItemBox_C_GetAmount_RewardType::Amoun' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_GetAmount_RewardType, ID) == 0x00000C, "Member 'WBP_ItemBox_C_GetAmount_RewardType::ID' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_GetAmount_RewardType, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'WBP_ItemBox_C_GetAmount_RewardType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_GetAmount_RewardType, CallFunc_GetBP_ReturnValue) == 0x000014, "Member 'WBP_ItemBox_C_GetAmount_RewardType::CallFunc_GetBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_GetAmount_RewardType, CallFunc_GetMoney_ReturnValue) == 0x000018, "Member 'WBP_ItemBox_C_GetAmount_RewardType::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_GetAmount_RewardType, CallFunc_GetTokenAmount_ReturnValue) == 0x00001C, "Member 'WBP_ItemBox_C_GetAmount_RewardType::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num_Random
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_ItemBox_C_Get_Item_Num_Random final
{
public:
	TArray<class UWBP_ItemBoxIcon_C*>             NewLocalVar_01;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                         Cnt;                                               // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Result;                                      // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxCnt;                                            // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalNum;                                          // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 IntArray;                                          // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<class UWBP_ItemBoxIcon_C*>             NewLocalVar_0;                                     // 0x0030(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C5[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C6[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78C7[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_IntArraySort_ReturnValue;                 // 0x0060(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C8[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78C9[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxIcon_C*                     CallFunc_Array_Get_Item_1;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78CA[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBox_C_Get_Item_Num_Random) == 0x000008, "Wrong alignment on WBP_ItemBox_C_Get_Item_Num_Random");
static_assert(sizeof(WBP_ItemBox_C_Get_Item_Num_Random) == 0x0000A0, "Wrong size on WBP_ItemBox_C_Get_Item_Num_Random");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, NewLocalVar_01) == 0x000000, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::NewLocalVar_01' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, Cnt) == 0x000010, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::Cnt' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, Param_Result) == 0x000014, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::Param_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, MaxCnt) == 0x000018, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::MaxCnt' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, TotalNum) == 0x00001C, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::TotalNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, IntArray) == 0x000020, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::IntArray' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, NewLocalVar_0) == 0x000030, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, Temp_bool_True_if_break_was_hit_Variable) == 0x000040, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, Temp_int_Array_Index_Variable_1) == 0x000050, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000054, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, Temp_int_Loop_Counter_Variable_1) == 0x000058, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_IntArraySort_ReturnValue) == 0x000060, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_IntArraySort_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Array_Get_Item) == 0x000070, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Add_IntInt_ReturnValue_1) == 0x000078, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_BooleanAND_ReturnValue) == 0x00007D, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Add_IntInt_ReturnValue_2) == 0x000080, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Array_Length_ReturnValue_1) == 0x000090, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Less_IntInt_ReturnValue_1) == 0x000094, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Greater_IntInt_ReturnValue) == 0x000095, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_SelectInt_ReturnValue) == 0x000098, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_Get_Item_Num_Random, CallFunc_Array_Add_ReturnValue) == 0x00009C, "Member 'WBP_ItemBox_C_Get_Item_Num_Random::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_ItemBox.WBP_ItemBox_C.IsItemBoxGenderCheck
// 0x0128 (0x0128 - 0x0000)
struct WBP_ItemBox_C_IsItemBoxGenderCheck final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWarning;                                         // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEquipableGender                              Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78CB[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78CC[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78CD[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_2;                              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78CE[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterItemBox                       CallFunc_GetItemBoxMasterData_ReturnValue;         // 0x0050(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBItemBoxContentParam                 CallFunc_Array_Get_Item;                           // 0x0074(0x0020)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78CF[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0098(0x0088)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_2;                           // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBox_C_IsItemBoxGenderCheck) == 0x000008, "Wrong alignment on WBP_ItemBox_C_IsItemBoxGenderCheck");
static_assert(sizeof(WBP_ItemBox_C_IsItemBoxGenderCheck) == 0x000128, "Wrong size on WBP_ItemBox_C_IsItemBoxGenderCheck");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, ItemId) == 0x000000, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::ItemId' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, IsWarning) == 0x000004, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::IsWarning' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_bool_Variable) == 0x000005, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_bool_Variable_1) == 0x000006, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_byte_Variable) == 0x000007, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_bool_Variable_2) == 0x000008, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_bool_Variable_3) == 0x000009, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_bool_Variable_4) == 0x00000A, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_byte_Variable_1) == 0x00000B, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_bool_Variable_5) == 0x00000C, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_bool_Variable_6) == 0x00000D, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_bool_Variable_7) == 0x00001C, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, K2Node_DynamicCast_AsSBCreation_Character) == 0x000028, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_GetMasterDataManager_IsValid) == 0x000031, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_GetGender_ReturnValue) == 0x000040, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, Temp_byte_Variable_2) == 0x000041, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, K2Node_Select_Default) == 0x000042, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, K2Node_Select_Default_1) == 0x000043, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_GetMasterDataManager_IsValid_1) == 0x000044, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000048, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_GetItemBoxMasterData_ReturnValue) == 0x000050, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_GetItemBoxMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_Array_Get_Item) == 0x000074, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000095, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000098, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000120, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBox_C_IsItemBoxGenderCheck, K2Node_Select_Default_2) == 0x000121, "Member 'WBP_ItemBox_C_IsItemBoxGenderCheck::K2Node_Select_Default_2' has a wrong offset!");

}

