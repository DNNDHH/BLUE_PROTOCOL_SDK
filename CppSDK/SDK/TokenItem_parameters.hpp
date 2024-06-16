#pragma once

 

// Package: TokenItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TokenItem.TokenItem_C.ExecuteUbergraph_TokenItem
// 0x04B8 (0x04B8 - 0x0000)
struct TokenItem_C_ExecuteUbergraph_TokenItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DF2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           K2Node_CustomEvent_TokenData_1;                    // 0x0008(0x0058)()
	int32                                         K2Node_CustomEvent_Amount_1;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DF3[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_EndOfTime;                      // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_CustomEvent_LastRecoveryDate;               // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USBToken*                               K2Node_CustomEvent_Token;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DF4[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_CustomEvent_IconImage;                      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Name;                           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount_2;                       // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_2;                        // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	struct FDateTime                              CallFunc_GetNextRecoveryTimeOfMonth_ReturnValue;   // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetNextRecoveryTimeOfDay_ReturnValue;     // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00F0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0108(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetNextRecoveryTimeOfTimer_ReturnValue;   // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetNextRecoveryTimeOfWeek_ReturnValue;    // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DF5[0x5];                                     // 0x0153(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0158(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DF6[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01A8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01C0(0x0018)()
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue_1;         // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTexture_Texture;              // 0x01E8(0x0028)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0210(0x0018)()
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DF7[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMasterToken                           K2Node_CustomEvent_TokenData;                      // 0x0238(0x0058)()
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DF8[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_EndTime;                        // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DF9[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DFA[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x02B0(0x0018)()
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue_2;         // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue_3;         // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0300(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTexture_Texture_1;            // 0x0318(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DFB[0x3];                                     // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0344(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1DFC[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DFD[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0378(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x03A0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x03C8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x03F0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x0418(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0440(0x0028)()
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue_1;                // 0x0469(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DFE[0x6];                                     // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue_1;           // 0x0470(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue_2;                // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1;  // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DFF[0x6];                                     // 0x047A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue_2;           // 0x0480(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x0498(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E00[0x3];                                     // 0x04A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x04A4(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(TokenItem_C_ExecuteUbergraph_TokenItem) == 0x000008, "Wrong alignment on TokenItem_C_ExecuteUbergraph_TokenItem");
static_assert(sizeof(TokenItem_C_ExecuteUbergraph_TokenItem) == 0x0004B8, "Wrong size on TokenItem_C_ExecuteUbergraph_TokenItem");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, EntryPoint) == 0x000000, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_TokenData_1) == 0x000008, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_TokenData_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Amount_1) == 0x000060, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Amount_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_EndOfTime) == 0x000068, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_EndOfTime' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_LastRecoveryDate) == 0x000070, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_LastRecoveryDate' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Token) == 0x000078, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Token' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Index_1) == 0x000080, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_IconImage) == 0x000088, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_IconImage' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Name) == 0x000090, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Amount_2) == 0x0000A0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Amount_2' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Index_2) == 0x0000A4, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Index_2' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Percent_IntInt_ReturnValue) == 0x0000A8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Percent_IntInt_ReturnValue_1) == 0x0000AC, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0000B0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetNextRecoveryTimeOfMonth_ReturnValue) == 0x0000E0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetNextRecoveryTimeOfMonth_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetNextRecoveryTimeOfDay_ReturnValue) == 0x0000E8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetNextRecoveryTimeOfDay_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000F0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000108, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_TextToString_ReturnValue) == 0x000120, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetNextRecoveryTimeOfTimer_ReturnValue) == 0x000130, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetNextRecoveryTimeOfTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Concat_StrStr_ReturnValue) == 0x000138, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetNextRecoveryTimeOfWeek_ReturnValue) == 0x000148, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetNextRecoveryTimeOfWeek_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_SwitchEnum_CmpSuccess) == 0x000150, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000151, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000152, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000158, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Greater_IntInt_ReturnValue) == 0x000170, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000178, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000188, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetMasterTokenText_ReturnValue) == 0x000198, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001A8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001C0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetMasterTokenText_ReturnValue_1) == 0x0001D8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetMasterTokenText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetTokenIconTexture_Texture) == 0x0001E8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetTokenIconTexture_Texture' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000210, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000228, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_DateTimeMinValue_ReturnValue) == 0x000230, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_TokenData) == 0x000238, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_TokenData' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Amount) == 0x000290, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_EndTime) == 0x000298, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_EndTime' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Index) == 0x0002A0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_NotEqual_DateTimeDateTime_ReturnValue) == 0x0002A4, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_NotEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Percent_IntInt_ReturnValue_2) == 0x0002A8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_IntToText_ReturnValue_4) == 0x0002B0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetMasterTokenText_ReturnValue_2) == 0x0002C8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetMasterTokenText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetMasterTokenText_ReturnValue_3) == 0x0002D8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetMasterTokenText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002E8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000300, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_GetTokenIconTexture_Texture_1) == 0x000318, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_GetTokenIconTexture_Texture_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000340, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CreateDelegate_OutputDelegate) == 0x000344, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, Temp_object_Variable) == 0x000358, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_DynamicCast_AsTexture_2D) == 0x000360, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_DynamicCast_bSuccess) == 0x000368, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Loaded) == 0x000370, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_MakeStruct_SlateColor) == 0x000378, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_MakeStruct_SlateColor_1) == 0x0003A0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_MakeStruct_SlateColor_2) == 0x0003C8, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_MakeStruct_SlateColor_3) == 0x0003F0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_MakeStruct_SlateColor_4) == 0x000418, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_MakeStruct_SlateColor_5) == 0x000440, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_SetDateTime_ReturnValue) == 0x000468, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_SetDateTime_ReturnValue_1) == 0x000469, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_SetDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_DateTimeMinValue_ReturnValue_1) == 0x000470, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_DateTimeMinValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_SetDateTime_ReturnValue_2) == 0x000478, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_SetDateTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1) == 0x000479, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, CallFunc_DateTimeMinValue_ReturnValue_2) == 0x000480, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::CallFunc_DateTimeMinValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, Temp_object_Variable_1) == 0x000488, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CustomEvent_Loaded_1) == 0x000490, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_DynamicCast_AsTexture_2D_1) == 0x000498, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_DynamicCast_bSuccess_1) == 0x0004A0, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TokenItem_C_ExecuteUbergraph_TokenItem, K2Node_CreateDelegate_OutputDelegate_1) == 0x0004A4, "Member 'TokenItem_C_ExecuteUbergraph_TokenItem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function TokenItem.TokenItem_C.SetExpiredTokenData
// 0x0070 (0x0070 - 0x0000)
struct TokenItem_C_SetExpiredTokenData final
{
public:
	struct FMasterToken                           TokenData;                                         // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_Amount;                                      // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E01[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              EndTime;                                           // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0068(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenItem_C_SetExpiredTokenData) == 0x000008, "Wrong alignment on TokenItem_C_SetExpiredTokenData");
static_assert(sizeof(TokenItem_C_SetExpiredTokenData) == 0x000070, "Wrong size on TokenItem_C_SetExpiredTokenData");
static_assert(offsetof(TokenItem_C_SetExpiredTokenData, TokenData) == 0x000000, "Member 'TokenItem_C_SetExpiredTokenData::TokenData' has a wrong offset!");
static_assert(offsetof(TokenItem_C_SetExpiredTokenData, Param_Amount) == 0x000058, "Member 'TokenItem_C_SetExpiredTokenData::Param_Amount' has a wrong offset!");
static_assert(offsetof(TokenItem_C_SetExpiredTokenData, EndTime) == 0x000060, "Member 'TokenItem_C_SetExpiredTokenData::EndTime' has a wrong offset!");
static_assert(offsetof(TokenItem_C_SetExpiredTokenData, Param_Index) == 0x000068, "Member 'TokenItem_C_SetExpiredTokenData::Param_Index' has a wrong offset!");

// Function TokenItem.TokenItem_C.Set Token Data
// 0x0080 (0x0080 - 0x0000)
struct TokenItem_C_Set_Token_Data final
{
public:
	struct FMasterToken                           TokenData;                                         // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_Amount;                                      // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E02[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              EndOfTime;                                         // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              LastRecoveryDate;                                  // 0x0068(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USBToken*                               Token;                                             // 0x0070(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0078(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenItem_C_Set_Token_Data) == 0x000008, "Wrong alignment on TokenItem_C_Set_Token_Data");
static_assert(sizeof(TokenItem_C_Set_Token_Data) == 0x000080, "Wrong size on TokenItem_C_Set_Token_Data");
static_assert(offsetof(TokenItem_C_Set_Token_Data, TokenData) == 0x000000, "Member 'TokenItem_C_Set_Token_Data::TokenData' has a wrong offset!");
static_assert(offsetof(TokenItem_C_Set_Token_Data, Param_Amount) == 0x000058, "Member 'TokenItem_C_Set_Token_Data::Param_Amount' has a wrong offset!");
static_assert(offsetof(TokenItem_C_Set_Token_Data, EndOfTime) == 0x000060, "Member 'TokenItem_C_Set_Token_Data::EndOfTime' has a wrong offset!");
static_assert(offsetof(TokenItem_C_Set_Token_Data, LastRecoveryDate) == 0x000068, "Member 'TokenItem_C_Set_Token_Data::LastRecoveryDate' has a wrong offset!");
static_assert(offsetof(TokenItem_C_Set_Token_Data, Token) == 0x000070, "Member 'TokenItem_C_Set_Token_Data::Token' has a wrong offset!");
static_assert(offsetof(TokenItem_C_Set_Token_Data, Param_Index) == 0x000078, "Member 'TokenItem_C_Set_Token_Data::Param_Index' has a wrong offset!");

// Function TokenItem.TokenItem_C.SetMoneyData
// 0x0020 (0x0020 - 0x0000)
struct TokenItem_C_SetMoneyData final
{
public:
	class UTexture2D*                             IconImage;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenItem_C_SetMoneyData) == 0x000008, "Wrong alignment on TokenItem_C_SetMoneyData");
static_assert(sizeof(TokenItem_C_SetMoneyData) == 0x000020, "Wrong size on TokenItem_C_SetMoneyData");
static_assert(offsetof(TokenItem_C_SetMoneyData, IconImage) == 0x000000, "Member 'TokenItem_C_SetMoneyData::IconImage' has a wrong offset!");
static_assert(offsetof(TokenItem_C_SetMoneyData, Param_Name) == 0x000008, "Member 'TokenItem_C_SetMoneyData::Param_Name' has a wrong offset!");
static_assert(offsetof(TokenItem_C_SetMoneyData, Param_Amount) == 0x000018, "Member 'TokenItem_C_SetMoneyData::Param_Amount' has a wrong offset!");
static_assert(offsetof(TokenItem_C_SetMoneyData, Param_Index) == 0x00001C, "Member 'TokenItem_C_SetMoneyData::Param_Index' has a wrong offset!");

// Function TokenItem.TokenItem_C.OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D
// 0x0008 (0x0008 - 0x0000)
struct TokenItem_C_OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenItem_C_OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D) == 0x000008, "Wrong alignment on TokenItem_C_OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D");
static_assert(sizeof(TokenItem_C_OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D) == 0x000008, "Wrong size on TokenItem_C_OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D");
static_assert(offsetof(TokenItem_C_OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D, Loaded) == 0x000000, "Member 'TokenItem_C_OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D::Loaded' has a wrong offset!");

// Function TokenItem.TokenItem_C.OnLoaded_D79227434D2250620D435BBAE24D370E
// 0x0008 (0x0008 - 0x0000)
struct TokenItem_C_OnLoaded_D79227434D2250620D435BBAE24D370E final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenItem_C_OnLoaded_D79227434D2250620D435BBAE24D370E) == 0x000008, "Wrong alignment on TokenItem_C_OnLoaded_D79227434D2250620D435BBAE24D370E");
static_assert(sizeof(TokenItem_C_OnLoaded_D79227434D2250620D435BBAE24D370E) == 0x000008, "Wrong size on TokenItem_C_OnLoaded_D79227434D2250620D435BBAE24D370E");
static_assert(offsetof(TokenItem_C_OnLoaded_D79227434D2250620D435BBAE24D370E, Loaded) == 0x000000, "Member 'TokenItem_C_OnLoaded_D79227434D2250620D435BBAE24D370E::Loaded' has a wrong offset!");

// Function TokenItem.TokenItem_C.GetToolTipWidget_0
// 0x0020 (0x0020 - 0x0000)
struct TokenItem_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E03[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenTooltip_C*                        CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TokenItem_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on TokenItem_C_GetToolTipWidget_0");
static_assert(sizeof(TokenItem_C_GetToolTipWidget_0) == 0x000020, "Wrong size on TokenItem_C_GetToolTipWidget_0");
static_assert(offsetof(TokenItem_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'TokenItem_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_GetToolTipWidget_0, CallFunc_TextIsEmpty_ReturnValue) == 0x000008, "Member 'TokenItem_C_GetToolTipWidget_0::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_GetToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000010, "Member 'TokenItem_C_GetToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenItem_C_GetToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'TokenItem_C_GetToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

