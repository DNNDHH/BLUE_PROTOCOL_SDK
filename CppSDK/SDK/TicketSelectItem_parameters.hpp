#pragma once

 

// Package: TicketSelectItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function TicketSelectItem.TicketSelectItem_C.SetTextId
// 0x00E8 (0x00E8 - 0x0000)
struct TicketSelectItem_C_SetTextId final
{
public:
	int32                                         TicketId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43E3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           TokenData;                                         // 0x0008(0x0058)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindTokenMaster_bIsValid;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E4[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_FindTokenMaster_TokenMaster;              // 0x0078(0x0058)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D0(0x0018)()
};
static_assert(alignof(TicketSelectItem_C_SetTextId) == 0x000008, "Wrong alignment on TicketSelectItem_C_SetTextId");
static_assert(sizeof(TicketSelectItem_C_SetTextId) == 0x0000E8, "Wrong size on TicketSelectItem_C_SetTextId");
static_assert(offsetof(TicketSelectItem_C_SetTextId, TicketId) == 0x000000, "Member 'TicketSelectItem_C_SetTextId::TicketId' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_SetTextId, TokenData) == 0x000008, "Member 'TicketSelectItem_C_SetTextId::TokenData' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_SetTextId, CallFunc_GetMasterTokenText_ReturnValue) == 0x000060, "Member 'TicketSelectItem_C_SetTextId::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_SetTextId, CallFunc_FindTokenMaster_bIsValid) == 0x000070, "Member 'TicketSelectItem_C_SetTextId::CallFunc_FindTokenMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_SetTextId, CallFunc_FindTokenMaster_TokenMaster) == 0x000078, "Member 'TicketSelectItem_C_SetTextId::CallFunc_FindTokenMaster_TokenMaster' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_SetTextId, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'TicketSelectItem_C_SetTextId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function TicketSelectItem.TicketSelectItem_C.UpdateTokenNum
// 0x00D0 (0x00D0 - 0x0000)
struct TicketSelectItem_C_UpdateTokenNum final
{
public:
	bool                                          CallFunc_isValidTokenID_Valid;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E6[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E7[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBTicketData                    CallFunc_FindTicketData_ReturnValue;               // 0x00B4(0x001C)(ConstParm, NoDestructor)
};
static_assert(alignof(TicketSelectItem_C_UpdateTokenNum) == 0x000008, "Wrong alignment on TicketSelectItem_C_UpdateTokenNum");
static_assert(sizeof(TicketSelectItem_C_UpdateTokenNum) == 0x0000D0, "Wrong size on TicketSelectItem_C_UpdateTokenNum");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, CallFunc_isValidTokenID_Valid) == 0x000000, "Member 'TicketSelectItem_C_UpdateTokenNum::CallFunc_isValidTokenID_Valid' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'TicketSelectItem_C_UpdateTokenNum::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'TicketSelectItem_C_UpdateTokenNum::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'TicketSelectItem_C_UpdateTokenNum::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, K2Node_MakeArray_Array) == 0x000070, "Member 'TicketSelectItem_C_UpdateTokenNum::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, CallFunc_GetSBPlayerController_ReturnValue) == 0x000080, "Member 'TicketSelectItem_C_UpdateTokenNum::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, CallFunc_Format_ReturnValue) == 0x000088, "Member 'TicketSelectItem_C_UpdateTokenNum::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'TicketSelectItem_C_UpdateTokenNum::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, CallFunc_GetStackBComponent_ReturnValue) == 0x0000A8, "Member 'TicketSelectItem_C_UpdateTokenNum::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'TicketSelectItem_C_UpdateTokenNum::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_UpdateTokenNum, CallFunc_FindTicketData_ReturnValue) == 0x0000B4, "Member 'TicketSelectItem_C_UpdateTokenNum::CallFunc_FindTicketData_ReturnValue' has a wrong offset!");

// Function TicketSelectItem.TicketSelectItem_C.isValidTokenID
// 0x0002 (0x0002 - 0x0000)
struct TicketSelectItem_C_IsValidTokenID final
{
public:
	bool                                          Valid;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TicketSelectItem_C_IsValidTokenID) == 0x000001, "Wrong alignment on TicketSelectItem_C_IsValidTokenID");
static_assert(sizeof(TicketSelectItem_C_IsValidTokenID) == 0x000002, "Wrong size on TicketSelectItem_C_IsValidTokenID");
static_assert(offsetof(TicketSelectItem_C_IsValidTokenID, Valid) == 0x000000, "Member 'TicketSelectItem_C_IsValidTokenID::Valid' has a wrong offset!");
static_assert(offsetof(TicketSelectItem_C_IsValidTokenID, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000001, "Member 'TicketSelectItem_C_IsValidTokenID::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

