#pragma once

 

// Package: TokenList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TokenList.TokenList_C.ExecuteUbergraph_TokenList
// 0x02B0 (0x02B0 - 0x0000)
struct TokenList_C_ExecuteUbergraph_TokenList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTokenItem_C*                           CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57DE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMasterToken>                   CallFunc_GetMasterTokenArray_ReturnValue;          // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenItem_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57E0[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57E1[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_GetCryptocurrency_ReturnValue;    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0061(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57E2[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0064(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      K2Node_CustomEvent_Cryptocurrency;                 // 0x0068(0x0028)(ConstParm, NoDestructor)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRmShopComponent*                     CallFunc_GetRmShopComponent_ReturnValue;           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTokenItem_C*                           CallFunc_Create_ReturnValue_2;                     // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item_2;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item_3;                         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FSBExpiredTokenStates& States)> K2Node_CreateDelegate_OutputDelegate;              // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTokenItem_C*                           CallFunc_Create_ReturnValue_3;                     // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode, struct FSBCryptoCurrency& Cryptocurrency)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBTokenStates                         K2Node_CustomEvent_States_1;                       // 0x0140(0x0010)(ConstParm)
	struct FSBExpiredTokenStates                  K2Node_CustomEvent_States;                         // 0x0150(0x0010)(ConstParm)
	struct FSBExpiredToken                        CallFunc_Array_Get_Item_4;                         // 0x0160(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57E3[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57E4[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Category;                       // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E5[0x2];                                     // 0x01A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FSBTokenStates& States)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57E6[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57E7[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x01D0(0x0058)()
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_3;                   // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57E8[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57E9[0x6];                                     // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenItem_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_GetExpiredList_ReturnValue;       // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57EA[0x6];                                     // 0x026A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBToken*                               CallFunc_SpawnObject_ReturnValue;                  // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_DeleteExpired_ReturnValue;        // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57EB[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenItem_C*                           CallFunc_Create_ReturnValue_5;                     // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_4;                   // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DateTimeDateTime_ReturnValue;        // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TokenList_C_ExecuteUbergraph_TokenList) == 0x000008, "Wrong alignment on TokenList_C_ExecuteUbergraph_TokenList");
static_assert(sizeof(TokenList_C_ExecuteUbergraph_TokenList) == 0x0002B0, "Wrong size on TokenList_C_ExecuteUbergraph_TokenList");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, EntryPoint) == 0x000000, "Member 'TokenList_C_ExecuteUbergraph_TokenList::EntryPoint' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'TokenList_C_ExecuteUbergraph_TokenList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetMasterDataManager_IsValid) == 0x000010, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetMasterTokenArray_ReturnValue) == 0x000020, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetMasterTokenArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Create_ReturnValue_1) == 0x000038, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CustomEvent_Result_1) == 0x000040, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'TokenList_C_ExecuteUbergraph_TokenList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetMoney_ReturnValue) == 0x000050, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, Temp_int_Loop_Counter_Variable_1) == 0x000054, "Member 'TokenList_C_ExecuteUbergraph_TokenList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, Temp_int_Array_Index_Variable_1) == 0x000058, "Member 'TokenList_C_ExecuteUbergraph_TokenList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Request_GetCryptocurrency_ReturnValue) == 0x000060, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Request_GetCryptocurrency_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CustomEvent_Result) == 0x000061, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CustomEvent_RetCode) == 0x000064, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CustomEvent_Cryptocurrency) == 0x000068, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CustomEvent_Cryptocurrency' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Array_Get_Item) == 0x000090, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000098, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetRmShopComponent_ReturnValue) == 0x0000B0, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetRmShopComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_AddChild_ReturnValue) == 0x0000B8, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000C0, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Create_ReturnValue_2) == 0x0000D0, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Array_Get_Item_2) == 0x0000D8, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_AddChild_ReturnValue_1) == 0x0000E0, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000E8, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Array_Get_Item_3) == 0x0000F8, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CreateDelegate_OutputDelegate) == 0x000100, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000110, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Create_ReturnValue_3) == 0x000120, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_AddChild_ReturnValue_2) == 0x000128, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000130, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CustomEvent_States_1) == 0x000140, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CustomEvent_States_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CustomEvent_States) == 0x000150, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CustomEvent_States' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Array_Get_Item_4) == 0x000160, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Array_Length_ReturnValue_1) == 0x000190, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000194, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Array_Length_ReturnValue_2) == 0x000198, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Greater_IntInt_ReturnValue) == 0x00019C, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CustomEvent_Category) == 0x0001A0, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CustomEvent_Category' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Conv_IntToByte_ReturnValue) == 0x0001A4, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetValidValue_ReturnValue) == 0x0001A5, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001A8, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetMasterDataManager_IsValid_1) == 0x0001B8, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x0001C0, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_BP_FindMasterToken_bIsValid) == 0x0001C8, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_BP_FindMasterToken_ReturnValue) == 0x0001D0, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_AddChild_ReturnValue_3) == 0x000228, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_AddChild_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetNetworkDataCache_IsValid) == 0x000230, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000238, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000240, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000248, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_IsValid_ReturnValue) == 0x000249, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Create_ReturnValue_4) == 0x000250, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_GetPlayerController_ReturnValue) == 0x000258, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000260, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, K2Node_DynamicCast_bSuccess) == 0x000268, "Member 'TokenList_C_ExecuteUbergraph_TokenList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Request_GetExpiredList_ReturnValue) == 0x000269, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Request_GetExpiredList_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_SpawnObject_ReturnValue) == 0x000270, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Request_DeleteExpired_ReturnValue) == 0x000278, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Request_DeleteExpired_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Create_ReturnValue_5) == 0x000280, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_AddChild_ReturnValue_4) == 0x000288, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_AddChild_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_MakeTimespan_ReturnValue) == 0x000290, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_SBUtcNow_ReturnValue) == 0x000298, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x0002A0, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_ExecuteUbergraph_TokenList, CallFunc_Less_DateTimeDateTime_ReturnValue) == 0x0002A8, "Member 'TokenList_C_ExecuteUbergraph_TokenList::CallFunc_Less_DateTimeDateTime_ReturnValue' has a wrong offset!");

// Function TokenList.TokenList_C.SetTokenList
// 0x0004 (0x0004 - 0x0000)
struct TokenList_C_SetTokenList final
{
public:
	int32                                         Category;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenList_C_SetTokenList) == 0x000004, "Wrong alignment on TokenList_C_SetTokenList");
static_assert(sizeof(TokenList_C_SetTokenList) == 0x000004, "Wrong size on TokenList_C_SetTokenList");
static_assert(offsetof(TokenList_C_SetTokenList, Category) == 0x000000, "Member 'TokenList_C_SetTokenList::Category' has a wrong offset!");

// Function TokenList.TokenList_C.OnGetExpiredList
// 0x0010 (0x0010 - 0x0000)
struct TokenList_C_OnGetExpiredList final
{
public:
	struct FSBExpiredTokenStates                  States;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TokenList_C_OnGetExpiredList) == 0x000008, "Wrong alignment on TokenList_C_OnGetExpiredList");
static_assert(sizeof(TokenList_C_OnGetExpiredList) == 0x000010, "Wrong size on TokenList_C_OnGetExpiredList");
static_assert(offsetof(TokenList_C_OnGetExpiredList, States) == 0x000000, "Member 'TokenList_C_OnGetExpiredList::States' has a wrong offset!");

// Function TokenList.TokenList_C.GetStateList
// 0x0010 (0x0010 - 0x0000)
struct TokenList_C_GetStateList final
{
public:
	struct FSBTokenStates                         States;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TokenList_C_GetStateList) == 0x000008, "Wrong alignment on TokenList_C_GetStateList");
static_assert(sizeof(TokenList_C_GetStateList) == 0x000010, "Wrong size on TokenList_C_GetStateList");
static_assert(offsetof(TokenList_C_GetStateList, States) == 0x000000, "Member 'TokenList_C_GetStateList::States' has a wrong offset!");

// Function TokenList.TokenList_C.GetCryptocurerncy
// 0x0030 (0x0030 - 0x0000)
struct TokenList_C_GetCryptocurerncy final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57EC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      Cryptocurrency;                                    // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(TokenList_C_GetCryptocurerncy) == 0x000008, "Wrong alignment on TokenList_C_GetCryptocurerncy");
static_assert(sizeof(TokenList_C_GetCryptocurerncy) == 0x000030, "Wrong size on TokenList_C_GetCryptocurerncy");
static_assert(offsetof(TokenList_C_GetCryptocurerncy, Result) == 0x000000, "Member 'TokenList_C_GetCryptocurerncy::Result' has a wrong offset!");
static_assert(offsetof(TokenList_C_GetCryptocurerncy, RetCode) == 0x000004, "Member 'TokenList_C_GetCryptocurerncy::RetCode' has a wrong offset!");
static_assert(offsetof(TokenList_C_GetCryptocurerncy, Cryptocurrency) == 0x000008, "Member 'TokenList_C_GetCryptocurerncy::Cryptocurrency' has a wrong offset!");

// Function TokenList.TokenList_C.OnGetMyCharacterInfoDelegate_����_0
// 0x0001 (0x0001 - 0x0000)
struct TokenList_C_OnGetMyCharacterInfoDelegate______0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TokenList_C_OnGetMyCharacterInfoDelegate______0) == 0x000001, "Wrong alignment on TokenList_C_OnGetMyCharacterInfoDelegate______0");
static_assert(sizeof(TokenList_C_OnGetMyCharacterInfoDelegate______0) == 0x000001, "Wrong size on TokenList_C_OnGetMyCharacterInfoDelegate______0");
static_assert(offsetof(TokenList_C_OnGetMyCharacterInfoDelegate______0, Result) == 0x000000, "Member 'TokenList_C_OnGetMyCharacterInfoDelegate______0::Result' has a wrong offset!");

// Function TokenList.TokenList_C.SetTokenListFunc
// 0x0118 (0x0118 - 0x0000)
struct TokenList_C_SetTokenListFunc final
{
public:
	struct FSBTokenStates                         TokenStates;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Addcnt;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57ED[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              EndTime;                                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57EE[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTokenState                          CallFunc_Array_Get_Item;                           // 0x0028(0x0048)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57EF[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57F0[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenItem_C*                           CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57F1[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57F2[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x00B0(0x0058)()
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TokenList_C_SetTokenListFunc) == 0x000008, "Wrong alignment on TokenList_C_SetTokenListFunc");
static_assert(sizeof(TokenList_C_SetTokenListFunc) == 0x000118, "Wrong size on TokenList_C_SetTokenListFunc");
static_assert(offsetof(TokenList_C_SetTokenListFunc, TokenStates) == 0x000000, "Member 'TokenList_C_SetTokenListFunc::TokenStates' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, Addcnt) == 0x000010, "Member 'TokenList_C_SetTokenListFunc::Addcnt' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, EndTime) == 0x000018, "Member 'TokenList_C_SetTokenListFunc::EndTime' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, Temp_int_Array_Index_Variable) == 0x000020, "Member 'TokenList_C_SetTokenListFunc::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_Array_Get_Item) == 0x000028, "Member 'TokenList_C_SetTokenListFunc::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'TokenList_C_SetTokenListFunc::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'TokenList_C_SetTokenListFunc::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_DateTimeMinValue_ReturnValue) == 0x000078, "Member 'TokenList_C_SetTokenListFunc::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'TokenList_C_SetTokenListFunc::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'TokenList_C_SetTokenListFunc::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_Add_IntInt_ReturnValue_1) == 0x000088, "Member 'TokenList_C_SetTokenListFunc::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_Create_ReturnValue) == 0x000090, "Member 'TokenList_C_SetTokenListFunc::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, Temp_int_Variable) == 0x000098, "Member 'TokenList_C_SetTokenListFunc::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_AddChild_ReturnValue) == 0x0000A0, "Member 'TokenList_C_SetTokenListFunc::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_BP_FindMasterToken_bIsValid) == 0x0000A8, "Member 'TokenList_C_SetTokenListFunc::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_BP_FindMasterToken_ReturnValue) == 0x0000B0, "Member 'TokenList_C_SetTokenListFunc::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000108, "Member 'TokenList_C_SetTokenListFunc::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000110, "Member 'TokenList_C_SetTokenListFunc::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetTokenListFunc, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000111, "Member 'TokenList_C_SetTokenListFunc::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function TokenList.TokenList_C.SetExpiredTokenListFunc
// 0x0108 (0x0108 - 0x0000)
struct TokenList_C_SetExpiredTokenListFunc final
{
public:
	struct FSBExpiredTokenStates                  SBExpiredTokenStates;                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Addcnt;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57F3[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBExpiredToken                        CallFunc_Array_Get_Item;                           // 0x0020(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57F4[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57F5[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DateTimeDateTime_ReturnValue;        // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57F6[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenItem_C*                           CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57F7[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x00A0(0x0058)()
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TokenList_C_SetExpiredTokenListFunc) == 0x000008, "Wrong alignment on TokenList_C_SetExpiredTokenListFunc");
static_assert(sizeof(TokenList_C_SetExpiredTokenListFunc) == 0x000108, "Wrong size on TokenList_C_SetExpiredTokenListFunc");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, SBExpiredTokenStates) == 0x000000, "Member 'TokenList_C_SetExpiredTokenListFunc::SBExpiredTokenStates' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, Addcnt) == 0x000010, "Member 'TokenList_C_SetExpiredTokenListFunc::Addcnt' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, Temp_int_Array_Index_Variable) == 0x000014, "Member 'TokenList_C_SetExpiredTokenListFunc::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Array_Get_Item) == 0x000020, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'TokenList_C_SetExpiredTokenListFunc::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_SBUtcNow_ReturnValue) == 0x000060, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Add_IntInt_ReturnValue_1) == 0x000068, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_MakeTimespan_ReturnValue) == 0x000070, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x000078, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, Temp_int_Variable) == 0x000080, "Member 'TokenList_C_SetExpiredTokenListFunc::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Less_DateTimeDateTime_ReturnValue) == 0x000084, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Less_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_Create_ReturnValue) == 0x000088, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_AddChild_ReturnValue) == 0x000090, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_BP_FindMasterToken_bIsValid) == 0x000098, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_BP_FindMasterToken_ReturnValue) == 0x0000A0, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_GetEventTermEndTime_OutEndTime) == 0x0000F8, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(TokenList_C_SetExpiredTokenListFunc, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000100, "Member 'TokenList_C_SetExpiredTokenListFunc::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");

}

