#pragma once

 

// Package: OwnGashaTicketItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnSelectTicket__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature final
{
public:
	struct FSBGashaTickets                        Param_TicketData;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature) == 0x000004, "Wrong alignment on OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature");
static_assert(sizeof(OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature) == 0x00000C, "Wrong size on OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature");
static_assert(offsetof(OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature, Param_TicketData) == 0x000000, "Member 'OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature::Param_TicketData' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature, Amount) == 0x000008, "Member 'OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature::Amount' has a wrong offset!");

// Function OwnGashaTicketItem.OwnGashaTicketItem_C.ExecuteUbergraph_OwnGashaTicketItem
// 0x00A0 (0x00A0 - 0x0000)
struct OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4605[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4606[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4607[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TokenId;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTextureL_Texture;             // 0x0040(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTexture_Texture;              // 0x0068(0x0028)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4608[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 K2Node_Select_Default;                             // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem) == 0x000008, "Wrong alignment on OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem");
static_assert(sizeof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem) == 0x0000A0, "Wrong size on OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, EntryPoint) == 0x000000, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, Temp_object_Variable) == 0x000020, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, K2Node_DynamicCast_AsTexture_2D) == 0x000028, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, Temp_int_Variable) == 0x000034, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, K2Node_Event_IsDesignTime) == 0x000038, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, K2Node_CustomEvent_TokenId) == 0x00003C, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::K2Node_CustomEvent_TokenId' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, CallFunc_GetTokenIconTextureL_Texture) == 0x000040, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::CallFunc_GetTokenIconTextureL_Texture' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, CallFunc_GetTokenIconTexture_Texture) == 0x000068, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::CallFunc_GetTokenIconTexture_Texture' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, K2Node_SwitchInteger_CmpSuccess) == 0x000090, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000091, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem, K2Node_Select_Default) == 0x000098, "Member 'OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem::K2Node_Select_Default' has a wrong offset!");

// Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetIconTexture
// 0x0004 (0x0004 - 0x0000)
struct OwnGashaTicketItem_C_SetIconTexture final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OwnGashaTicketItem_C_SetIconTexture) == 0x000004, "Wrong alignment on OwnGashaTicketItem_C_SetIconTexture");
static_assert(sizeof(OwnGashaTicketItem_C_SetIconTexture) == 0x000004, "Wrong size on OwnGashaTicketItem_C_SetIconTexture");
static_assert(offsetof(OwnGashaTicketItem_C_SetIconTexture, TokenID) == 0x000000, "Member 'OwnGashaTicketItem_C_SetIconTexture::TokenID' has a wrong offset!");

// Function OwnGashaTicketItem.OwnGashaTicketItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OwnGashaTicketItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OwnGashaTicketItem_C_PreConstruct) == 0x000001, "Wrong alignment on OwnGashaTicketItem_C_PreConstruct");
static_assert(sizeof(OwnGashaTicketItem_C_PreConstruct) == 0x000001, "Wrong size on OwnGashaTicketItem_C_PreConstruct");
static_assert(offsetof(OwnGashaTicketItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OwnGashaTicketItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnLoaded_B24768C447D1D1C1B9F53D83D080C74E
// 0x0008 (0x0008 - 0x0000)
struct OwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E) == 0x000008, "Wrong alignment on OwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E");
static_assert(sizeof(OwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E) == 0x000008, "Wrong size on OwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E");
static_assert(offsetof(OwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E, Loaded) == 0x000000, "Member 'OwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E::Loaded' has a wrong offset!");

// Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetOwnTicketList
// 0x00D0 (0x00D0 - 0x0000)
struct OwnGashaTicketItem_C_SetOwnTicketList final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4609[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_460A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0038(0x0058)()
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_460B[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OwnGashaTicketItem_C_SetOwnTicketList) == 0x000008, "Wrong alignment on OwnGashaTicketItem_C_SetOwnTicketList");
static_assert(sizeof(OwnGashaTicketItem_C_SetOwnTicketList) == 0x0000D0, "Wrong size on OwnGashaTicketItem_C_SetOwnTicketList");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, TokenID) == 0x000000, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::TokenID' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, Amount) == 0x000004, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::Amount' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_BP_FindMasterToken_bIsValid) == 0x000030, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000038, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000090, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000098, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_GetMasterTokenText_ReturnValue) == 0x0000A0, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetOwnTicketList, CallFunc_SetDateTime_ReturnValue) == 0x0000C8, "Member 'OwnGashaTicketItem_C_SetOwnTicketList::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

// Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetExecutionTicketSelect
// 0x0218 (0x0218 - 0x0000)
struct OwnGashaTicketItem_C_SetExecutionTicketSelect final
{
public:
	struct FSBGashaTickets                        InGashaTicketData;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Gender;                                            // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountHave;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GenderId;                                          // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_460C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ExecutionConfirmText;                              // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_460D[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_460E[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0068(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_460F[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x00F0(0x0028)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0130(0x0028)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0158(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4610[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4611[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4612[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0190(0x0058)()
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4613[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0200(0x0018)()
};
static_assert(alignof(OwnGashaTicketItem_C_SetExecutionTicketSelect) == 0x000008, "Wrong alignment on OwnGashaTicketItem_C_SetExecutionTicketSelect");
static_assert(sizeof(OwnGashaTicketItem_C_SetExecutionTicketSelect) == 0x000218, "Wrong size on OwnGashaTicketItem_C_SetExecutionTicketSelect");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, InGashaTicketData) == 0x000000, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::InGashaTicketData' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, Amount) == 0x000008, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::Amount' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, Gender) == 0x00000C, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::Gender' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, Param_Index) == 0x000010, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::Param_Index' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, AmountHave) == 0x000014, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::AmountHave' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, GenderId) == 0x000018, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::GenderId' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, ExecutionConfirmText) == 0x000020, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::ExecutionConfirmText' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, Temp_bool_Variable) == 0x000030, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000031, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_Greater_IntInt_ReturnValue) == 0x000032, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, Temp_int_Variable) == 0x000050, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000058, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000068, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_Multiply_IntInt_ReturnValue) == 0x000098, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, K2Node_MakeArray_Array) == 0x0000E0, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_GetImpossibleColor_ReturnValue) == 0x0000F0, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_Format_ReturnValue) == 0x000118, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, K2Node_MakeStruct_SlateColor) == 0x000130, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000158, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000170, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000171, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, K2Node_Select_Default) == 0x000174, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_GetMasterDataManager_IsValid) == 0x000178, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_GetMasterDataManager_ReturnValue) == 0x000180, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_BP_FindMasterToken_bIsValid) == 0x000188, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000190, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_GetMasterTokenText_ReturnValue) == 0x0001E8, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_GetTokenAmount_ReturnValue) == 0x0001F8, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OwnGashaTicketItem_C_SetExecutionTicketSelect, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000200, "Member 'OwnGashaTicketItem_C_SetExecutionTicketSelect::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function OwnGashaTicketItem.OwnGashaTicketItem_C.GetAmount
// 0x0004 (0x0004 - 0x0000)
struct OwnGashaTicketItem_C_GetAmount final
{
public:
	int32                                         OutAmount;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OwnGashaTicketItem_C_GetAmount) == 0x000004, "Wrong alignment on OwnGashaTicketItem_C_GetAmount");
static_assert(sizeof(OwnGashaTicketItem_C_GetAmount) == 0x000004, "Wrong size on OwnGashaTicketItem_C_GetAmount");
static_assert(offsetof(OwnGashaTicketItem_C_GetAmount, OutAmount) == 0x000000, "Member 'OwnGashaTicketItem_C_GetAmount::OutAmount' has a wrong offset!");

}

