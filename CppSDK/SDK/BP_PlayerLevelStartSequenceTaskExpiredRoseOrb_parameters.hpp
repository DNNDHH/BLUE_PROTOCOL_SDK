#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskExpiredRoseOrb

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb
// 0x0158 (0x0158 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D28[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_1;                    // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode, struct FSBCryptoCurrency& Cryptocurrency)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D29[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0028(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D2A[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x002C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBNetworkDataCache*              CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetLoginBonusActiveIds_IdList;            // 0x0038(0x0010)(ReferenceParm)
	TDelegate<void(bool bWasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Request_GetCryptocurrency_ReturnValue;    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D2B[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerLoginBonusComponent*           CallFunc_GetLoginBonusComponent_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsFinish;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D2C[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D2D[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRmShopComponent*                     CallFunc_GetRmShopComponent_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0090(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D2E[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0094(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      K2Node_CustomEvent_Cryptocurrency;                 // 0x0098(0x0028)(ConstParm, NoDestructor)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue_1;  // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Days;                       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Hours;                      // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Minutes;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Seconds;                    // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Milliseconds;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Days_1;                     // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Hours_1;                    // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Minutes_1;                  // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Seconds_1;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Milliseconds_1;             // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D2F[0x2];                                     // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFirstExpiredBPP_ReturnValue;            // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFirstExpiredRoseOrb_ReturnValue;        // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D30[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue_1;          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue_2;          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFirstExpiredBPP_ReturnValue_1;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFirstExpiredRoseOrb_ReturnValue_1;      // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D31[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue_1;                     // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue_2;  // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Days_2;                     // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Hours_2;                    // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Minutes_2;                  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Seconds_2;                  // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Milliseconds_2;             // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0156(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb) == 0x000158, "Wrong size on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CustomEvent_bWasSuccessful_1) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CustomEvent_ErrorCode_1) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CustomEvent_ErrorCode_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BooleanAND_ReturnValue) == 0x00001D, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CustomEvent_bWasSuccessful) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CustomEvent_ErrorCode) == 0x00002C, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000030, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetLoginBonusActiveIds_IdList) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetLoginBonusActiveIds_IdList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_Request_GetCryptocurrency_ReturnValue) == 0x000058, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_Request_GetCryptocurrency_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000060, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetLoginBonusComponent_ReturnValue) == 0x000068, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetLoginBonusComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CustomEvent_IsFinish) == 0x000070, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CustomEvent_IsFinish' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_Greater_IntInt_ReturnValue) == 0x000079, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_IsStandalone_ReturnValue) == 0x00007A, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000080, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetRmShopComponent_ReturnValue) == 0x000088, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetRmShopComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CustomEvent_Result) == 0x000090, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CustomEvent_RetCode) == 0x000094, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, K2Node_CustomEvent_Cryptocurrency) == 0x000098, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::K2Node_CustomEvent_Cryptocurrency' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_UtcNow_ReturnValue) == 0x0000C0, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x0000C8, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_Subtract_DateTimeDateTime_ReturnValue_1) == 0x0000D0, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_Subtract_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Days) == 0x0000D8, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Days' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Hours) == 0x0000DC, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Hours' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Minutes) == 0x0000E0, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Minutes' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Seconds) == 0x0000E4, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Seconds' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Milliseconds) == 0x0000E8, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Milliseconds' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Days_1) == 0x0000EC, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Days_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Hours_1) == 0x0000F0, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Hours_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Minutes_1) == 0x0000F4, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Minutes_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Seconds_1) == 0x0000F8, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Seconds_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Milliseconds_1) == 0x0000FC, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Milliseconds_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000100, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000101, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_Less_IntInt_ReturnValue) == 0x000102, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_Less_IntInt_ReturnValue_1) == 0x000103, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BooleanAND_ReturnValue_1) == 0x000104, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BooleanAND_ReturnValue_2) == 0x000105, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetSBGameInstance_ReturnValue) == 0x000108, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BooleanOR_ReturnValue) == 0x000110, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_IsFirstExpiredBPP_ReturnValue) == 0x000111, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_IsFirstExpiredBPP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_IsFirstExpiredRoseOrb_ReturnValue) == 0x000112, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_IsFirstExpiredRoseOrb_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BooleanOR_ReturnValue_1) == 0x000113, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetSBGameInstance_ReturnValue_1) == 0x000118, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetSBGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GetSBGameInstance_ReturnValue_2) == 0x000120, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GetSBGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_IsFirstExpiredBPP_ReturnValue_1) == 0x000128, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_IsFirstExpiredBPP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_IsFirstExpiredRoseOrb_ReturnValue_1) == 0x000129, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_IsFirstExpiredRoseOrb_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_UtcNow_ReturnValue_1) == 0x000130, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_UtcNow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_Subtract_DateTimeDateTime_ReturnValue_2) == 0x000138, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_Subtract_DateTimeDateTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Days_2) == 0x000140, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Days_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Hours_2) == 0x000144, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Hours_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Minutes_2) == 0x000148, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Minutes_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Seconds_2) == 0x00014C, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Seconds_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BreakTimespan_Milliseconds_2) == 0x000150, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BreakTimespan_Milliseconds_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_Less_IntInt_ReturnValue_2) == 0x000154, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000155, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb, CallFunc_BooleanAND_ReturnValue_3) == 0x000156, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.�������_0
// 0x0030 (0x0030 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D32[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      Cryptocurrency;                                    // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0) == 0x000030, "Wrong size on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0, Result) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0::Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0, RetCode) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0::RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0, Cryptocurrency) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0::Cryptocurrency' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCheckRequest
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest final
{
public:
	bool                                          IsFinish;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest) == 0x000001, "Wrong size on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest, IsFinish) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest::IsFinish' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.GetDetailWork
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D33[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork, bWasSuccessful) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork, ErrorCode) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork::ErrorCode' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCompletefunc
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D34[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc, bWasSuccessful) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc, ErrorCode) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc::ErrorCode' has a wrong offset!");

}

