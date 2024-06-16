#pragma once

 

// Package: EventShopCheckList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "EventShopCheckList_ItemType_structs.hpp"
#include "EventShopCheckList_DestType_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function EventShopCheckList.EventShopCheckList_C.ExecuteUbergraph_EventShopCheckList
// 0x0158 (0x0158 - 0x0000)
struct EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64EA[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64EB[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64EC[0x1];                                     // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64ED[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64EE[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0138(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList) == 0x000008, "Wrong alignment on EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList");
static_assert(sizeof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList) == 0x000158, "Wrong size on EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, EntryPoint) == 0x000000, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_MakeLiteralInt_ReturnValue) == 0x000004, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, Temp_int_Variable) == 0x000008, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, Temp_int_Variable_1) == 0x00000C, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000020, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, Temp_bool_Variable) == 0x000024, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, Temp_bool_Variable_1) == 0x000025, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, Temp_bool_Variable_2) == 0x000026, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, Temp_string_Variable) == 0x000028, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_PlaySE_ReturnValue) == 0x000038, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Not_PreBool_ReturnValue) == 0x00003C, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Not_PreBool_ReturnValue_1) == 0x00003D, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Not_PreBool_ReturnValue_2) == 0x00003E, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_BooleanAND_ReturnValue) == 0x000050, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000068, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000078, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000088, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_MakeLiteralString_ReturnValue) == 0x000098, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, K2Node_Select_Default) == 0x0000A8, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, K2Node_Select_Default_1) == 0x0000B8, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x0000C8, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000D8, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000E8, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_PlayAnimation_ReturnValue) == 0x0000F8, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, K2Node_Select_Default_2) == 0x000100, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000110, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_PlayAnimation_ReturnValue_1) == 0x000120, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000128, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Conv_StringToText_ReturnValue) == 0x000138, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_PlaySE_ReturnValue_1) == 0x000150, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList, CallFunc_Not_PreBool_ReturnValue_3) == 0x000154, "Member 'EventShopCheckList_C_ExecuteUbergraph_EventShopCheckList::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.Get Item Type
// 0x0008 (0x0008 - 0x0000)
struct EventShopCheckList_C_Get_Item_Type final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Type;                                              // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_Get_Item_Type) == 0x000004, "Wrong alignment on EventShopCheckList_C_Get_Item_Type");
static_assert(sizeof(EventShopCheckList_C_Get_Item_Type) == 0x000008, "Wrong size on EventShopCheckList_C_Get_Item_Type");
static_assert(offsetof(EventShopCheckList_C_Get_Item_Type, ID) == 0x000000, "Member 'EventShopCheckList_C_Get_Item_Type::ID' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Get_Item_Type, Type) == 0x000004, "Member 'EventShopCheckList_C_Get_Item_Type::Type' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Get_Item_Type, CallFunc_Conv_IntToByte_ReturnValue) == 0x000005, "Member 'EventShopCheckList_C_Get_Item_Type::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Get_Item_Type, CallFunc_GetValidValue_ReturnValue) == 0x000006, "Member 'EventShopCheckList_C_Get_Item_Type::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Get_Item_Type, K2Node_SwitchEnum_CmpSuccess) == 0x000007, "Member 'EventShopCheckList_C_Get_Item_Type::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.Initialize
// 0x0078 (0x0078 - 0x0000)
struct EventShopCheckList_C_Initialize final
{
public:
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64EF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64F0[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_1;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_2;       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_3;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_C_Initialize) == 0x000008, "Wrong alignment on EventShopCheckList_C_Initialize");
static_assert(sizeof(EventShopCheckList_C_Initialize) == 0x000078, "Wrong size on EventShopCheckList_C_Initialize");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetNetworkDataCache_IsValid) == 0x000000, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'EventShopCheckList_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetStorage_ReturnValue) == 0x000028, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000030, "Member 'EventShopCheckList_C_Initialize::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'EventShopCheckList_C_Initialize::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000040, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetCharacterStorage_ReturnValue) == 0x000048, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetInventory_ReturnValue) == 0x000050, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue_1) == 0x000058, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue_2) == 0x000060, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetStorage_ReturnValue_1) == 0x000068, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue_3) == 0x000070, "Member 'EventShopCheckList_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue_3' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.CreateIconList
// 0x01C8 (0x01C8 - 0x0000)
struct EventShopCheckList_C_CreateIconList final
{
public:
	bool                                          L_IsEquipmentGender;                               // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64F1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 L_ItemName;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     L_ItemType;                                        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             L_ItemRewardType;                                  // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64F2[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_ItemId;                                          // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SelectNum;                                       // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_AttarId;                                         // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventShopPurchaseItemInfo           L_ProductData;                                     // 0x0028(0x0030)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64F3[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Icon_C*             CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64F4[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetPlayerGender_OutGender;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64F5[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0080(0x0088)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64F6[0x5];                                     // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x0110(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable;                                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64F7[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64F8[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_1;                              // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64F9[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64FA[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64FB[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x0184(0x0034)(NoDestructor)
	EEquipableGender                              Temp_byte_Variable_2;                              // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            K2Node_Select_Default;                             // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     CallFunc_Get_Item_Type_Type;                       // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x01BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64FC[0x2];                                     // 0x01BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_C_CreateIconList) == 0x000008, "Wrong alignment on EventShopCheckList_C_CreateIconList");
static_assert(sizeof(EventShopCheckList_C_CreateIconList) == 0x0001C8, "Wrong size on EventShopCheckList_C_CreateIconList");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, L_IsEquipmentGender) == 0x000000, "Member 'EventShopCheckList_C_CreateIconList::L_IsEquipmentGender' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, L_ItemName) == 0x000008, "Member 'EventShopCheckList_C_CreateIconList::L_ItemName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, L_ItemType) == 0x000018, "Member 'EventShopCheckList_C_CreateIconList::L_ItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, L_ItemRewardType) == 0x000019, "Member 'EventShopCheckList_C_CreateIconList::L_ItemRewardType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, L_ItemId) == 0x00001C, "Member 'EventShopCheckList_C_CreateIconList::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, L_SelectNum) == 0x000020, "Member 'EventShopCheckList_C_CreateIconList::L_SelectNum' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, L_AttarId) == 0x000024, "Member 'EventShopCheckList_C_CreateIconList::L_AttarId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, L_ProductData) == 0x000028, "Member 'EventShopCheckList_C_CreateIconList::L_ProductData' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, Temp_int_Array_Index_Variable) == 0x000058, "Member 'EventShopCheckList_C_CreateIconList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Create_ReturnValue) == 0x000060, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_GetMasterDataManager_IsValid) == 0x000068, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_GetPlayerGender_OutGender) == 0x000078, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_GetPlayerGender_OutGender' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000079, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000080, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Not_PreBool_ReturnValue) == 0x000108, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000109, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_BooleanAND_ReturnValue) == 0x00010A, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Array_Get_Item) == 0x000110, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, Temp_byte_Variable) == 0x000144, "Member 'EventShopCheckList_C_CreateIconList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, Temp_int_Loop_Counter_Variable) == 0x000148, "Member 'EventShopCheckList_C_CreateIconList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Less_IntInt_ReturnValue) == 0x00014C, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Add_IntInt_ReturnValue) == 0x000150, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, Temp_byte_Variable_1) == 0x000154, "Member 'EventShopCheckList_C_CreateIconList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Percent_IntInt_ReturnValue) == 0x000158, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Multiply_IntInt_ReturnValue) == 0x00015C, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Divide_IntInt_ReturnValue) == 0x000160, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_GetMasterDataManager_IsValid_1) == 0x000164, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000168, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, K2Node_MakeStruct_Margin) == 0x000170, "Member 'EventShopCheckList_C_CreateIconList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000180, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x000184, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, Temp_byte_Variable_2) == 0x0001B8, "Member 'EventShopCheckList_C_CreateIconList::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, K2Node_Select_Default) == 0x0001B9, "Member 'EventShopCheckList_C_CreateIconList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Get_Item_Type_Type) == 0x0001BA, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Get_Item_Type_Type' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001BB, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_Conv_IntToByte_ReturnValue) == 0x0001BC, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_GetValidValue_ReturnValue) == 0x0001BD, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateIconList, CallFunc_AddChildToGrid_ReturnValue) == 0x0001C0, "Member 'EventShopCheckList_C_CreateIconList::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_I
// 0x0160 (0x0160 - 0x0000)
struct EventShopCheckList_C_CreateItemList_Storage_I final
{
public:
	int32                                         L_Storage_Limit;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Storage_Now;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsOver;                                          // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64FD[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Destination_C*      L_WBP_Dest;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsCreateDest;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64FE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 L_ItemName;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     L_ItemType;                                        // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             L_ItemRewardType;                                  // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64FF[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_ItemId;                                          // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SelectNum;                                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6500[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopPurchaseItemInfo           L_ProductData;                                     // 0x0040(0x0030)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6501[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6502[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackableNum_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6503[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6504[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Destination_C*      CallFunc_Create_ReturnValue;                       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCheckListItemType_IsOk;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6505[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Item_Storage_C*     CallFunc_Create_ReturnValue_1;                     // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6506[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6507[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6508[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x00EC(0x0034)(NoDestructor)
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x0120(0x0030)()
	EItemType                                     CallFunc_Get_Item_Type_Type;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6509[0x1];                                     // 0x0153(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_CreateItemList_Storage_I) == 0x000008, "Wrong alignment on EventShopCheckList_C_CreateItemList_Storage_I");
static_assert(sizeof(EventShopCheckList_C_CreateItemList_Storage_I) == 0x000160, "Wrong size on EventShopCheckList_C_CreateItemList_Storage_I");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_Storage_Limit) == 0x000000, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_Storage_Limit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_Storage_Now) == 0x000004, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_Storage_Now' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_IsOver) == 0x000008, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_IsOver' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_WBP_Dest) == 0x000010, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_WBP_Dest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_IsCreateDest) == 0x000018, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_IsCreateDest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_ItemName) == 0x000020, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_ItemName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_ItemType) == 0x000030, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_ItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_ItemRewardType) == 0x000031, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_ItemRewardType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_ItemId) == 0x000034, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_SelectNum) == 0x000038, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_SelectNum' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, L_ProductData) == 0x000040, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::L_ProductData' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_GetItemName_OutName) == 0x000070, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_GetItemName_ReturnValue) == 0x000080, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Greater_IntInt_ReturnValue) == 0x000088, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, Temp_int_Array_Index_Variable) == 0x00008C, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_GetStackableNum_ReturnValue) == 0x000090, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_GetStackableNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x000094, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_AddChild_ReturnValue) == 0x000098, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Not_PreBool_ReturnValue) == 0x0000A0, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A8, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Create_ReturnValue) == 0x0000B0, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_GetCheckListItemType_IsOk) == 0x0000B8, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_GetCheckListItemType_IsOk' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Create_ReturnValue_1) == 0x0000C0, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000C8, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_AddChild_ReturnValue_1) == 0x0000D0, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_GetMasterDataManager_IsValid) == 0x0000D8, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000E0, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x0000E8, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x0000EC, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Array_Get_Item) == 0x000120, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Get_Item_Type_Type) == 0x000150, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Get_Item_Type_Type' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Conv_IntToByte_ReturnValue) == 0x000151, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_GetValidValue_ReturnValue) == 0x000152, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Array_Length_ReturnValue) == 0x000154, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'EventShopCheckList_C_CreateItemList_Storage_I::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_E
// 0x0158 (0x0158 - 0x0000)
struct EventShopCheckList_C_CreateItemList_Storage_E final
{
public:
	int32                                         L_Storage_Limit;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Storage_Now;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsOver;                                          // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_650A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Destination_C*      L_WBP_Dest;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsCreateDest;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_650B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 L_ItemName;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     L_ItemType;                                        // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             L_ItemRewardType;                                  // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_650C[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_ItemId;                                          // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SelectNum;                                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_650D[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopPurchaseItemInfo           L_ProductData;                                     // 0x0040(0x0030)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_650E[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCheckListItemType_IsOk;                // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_650F[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemTypeNum_ReturnValue;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6510[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Destination_C*      CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6511[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6512[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Bag_C*         CallFunc_Create_ReturnValue_1;                     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6513[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6514[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x00E4(0x0034)(NoDestructor)
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x0118(0x0030)()
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6515[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_CreateItemList_Storage_E) == 0x000008, "Wrong alignment on EventShopCheckList_C_CreateItemList_Storage_E");
static_assert(sizeof(EventShopCheckList_C_CreateItemList_Storage_E) == 0x000158, "Wrong size on EventShopCheckList_C_CreateItemList_Storage_E");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_Storage_Limit) == 0x000000, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_Storage_Limit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_Storage_Now) == 0x000004, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_Storage_Now' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_IsOver) == 0x000008, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_IsOver' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_WBP_Dest) == 0x000010, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_WBP_Dest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_IsCreateDest) == 0x000018, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_IsCreateDest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_ItemName) == 0x000020, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_ItemName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_ItemType) == 0x000030, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_ItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_ItemRewardType) == 0x000031, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_ItemRewardType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_ItemId) == 0x000034, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_SelectNum) == 0x000038, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_SelectNum' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, L_ProductData) == 0x000040, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::L_ProductData' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, Temp_int_Array_Index_Variable) == 0x000070, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Greater_IntInt_ReturnValue) == 0x000074, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00007C, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_GetCheckListItemType_IsOk) == 0x00007D, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_GetCheckListItemType_IsOk' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_GetCapacity_ReturnValue) == 0x000080, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_GetItemTypeNum_ReturnValue) == 0x000084, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_GetItemTypeNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_GetUseBlockNum_ReturnValue) == 0x000088, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Create_ReturnValue) == 0x000090, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Subtract_IntInt_ReturnValue) == 0x000098, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Clamp_ReturnValue) == 0x00009C, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000A0, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Not_PreBool_ReturnValue) == 0x0000A1, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A8, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_AddChild_ReturnValue) == 0x0000B0, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Create_ReturnValue_1) == 0x0000B8, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000C0, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C4, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_AddChild_ReturnValue_1) == 0x0000C8, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_GetMasterDataManager_IsValid) == 0x0000D0, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D8, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x0000E0, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x0000E4, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Array_Get_Item) == 0x000118, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Conv_IntToByte_ReturnValue) == 0x000148, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Array_Length_ReturnValue) == 0x00014C, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_GetValidValue_ReturnValue) == 0x000150, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_E, CallFunc_Less_IntInt_ReturnValue) == 0x000151, "Member 'EventShopCheckList_C_CreateItemList_Storage_E::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_I_Craft
// 0x0210 (0x0210 - 0x0000)
struct EventShopCheckList_C_CreateItemList_Storage_I_Craft final
{
public:
	int32                                         L_Storage_Limit;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Storage_Now;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsOver;                                          // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6516[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Destination_C*      L_WBP_Dest;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsCreateDest;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6517[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 L_ItemName;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     L_ItemType;                                        // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             L_ItemRewardType;                                  // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6518[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_ItemId;                                          // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SelectNum;                                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6519[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopPurchaseItemInfo           L_ProductData;                                     // 0x0040(0x0030)(Edit, BlueprintVisible)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_651A[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackableNum_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCheckListItemType_IsOk;                // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_651B[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_Destination_C*      CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Storage_C*     CallFunc_Create_ReturnValue_1;                     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_651C[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_651D[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x00C4(0x0034)(NoDestructor)
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x00F8(0x0030)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_651E[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0130(0x00D0)()
	EItemType                                     CallFunc_Get_Item_Type_Type;                       // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_651F[0x1];                                     // 0x0203(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_CreateItemList_Storage_I_Craft) == 0x000008, "Wrong alignment on EventShopCheckList_C_CreateItemList_Storage_I_Craft");
static_assert(sizeof(EventShopCheckList_C_CreateItemList_Storage_I_Craft) == 0x000210, "Wrong size on EventShopCheckList_C_CreateItemList_Storage_I_Craft");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_Storage_Limit) == 0x000000, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_Storage_Limit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_Storage_Now) == 0x000004, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_Storage_Now' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_IsOver) == 0x000008, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_IsOver' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_WBP_Dest) == 0x000010, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_WBP_Dest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_IsCreateDest) == 0x000018, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_IsCreateDest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_ItemName) == 0x000020, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_ItemName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_ItemType) == 0x000030, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_ItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_ItemRewardType) == 0x000031, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_ItemRewardType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_ItemId) == 0x000034, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_SelectNum) == 0x000038, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_SelectNum' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, L_ProductData) == 0x000040, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::L_ProductData' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Greater_IntInt_ReturnValue) == 0x000074, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, Temp_int_Array_Index_Variable) == 0x000078, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_GetStackableNum_ReturnValue) == 0x00007C, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_GetStackableNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x000080, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Not_PreBool_ReturnValue) == 0x000084, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_GetCheckListItemType_IsOk) == 0x000085, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_GetCheckListItemType_IsOk' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, Temp_int_Loop_Counter_Variable) == 0x000088, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Add_IntInt_ReturnValue_1) == 0x00008C, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Create_ReturnValue) == 0x000090, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Create_ReturnValue_1) == 0x000098, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_AddChild_ReturnValue) == 0x0000A0, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_AddChild_ReturnValue_1) == 0x0000A8, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000B0, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_GetMasterDataManager_IsValid) == 0x0000B4, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000B8, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x0000C0, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x0000C4, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_GetItemMasterData_IsExists) == 0x000128, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_GetItemMasterData_ReturnValue) == 0x000130, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Get_Item_Type_Type) == 0x000200, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Get_Item_Type_Type' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000201, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Conv_IntToByte_ReturnValue) == 0x000202, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Array_Length_ReturnValue) == 0x000204, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_GetValidValue_ReturnValue) == 0x000208, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_Less_IntInt_ReturnValue) == 0x000209, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Storage_I_Craft, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00020A, "Member 'EventShopCheckList_C_CreateItemList_Storage_I_Craft::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.Create Item List Bag_I
// 0x0210 (0x0210 - 0x0000)
struct EventShopCheckList_C_Create_Item_List_Bag_I final
{
public:
	int32                                         L_Storage_Limit;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Storage_Now;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_Destination_C*      L_WBP_Dest;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsCreateDest;                                    // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6520[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_SelectNum;                                       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_ItemId;                                          // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     L_ItemType;                                        // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             L_ItemRewardType;                                  // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6521[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_AttarId;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6522[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopPurchaseItemInfo           L_ProductData;                                     // 0x0028(0x0030)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6523[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6524[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Destination_C*      CallFunc_Create_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCheckListItemType_IsOk;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6525[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6526[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6527[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6528[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Item_Bag_C*         CallFunc_Create_ReturnValue_1;                     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6529[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_652A[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x00C4(0x0034)(NoDestructor)
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x00F8(0x0030)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_652B[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0130(0x00D0)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_652C[0x1];                                     // 0x0203(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_Create_Item_List_Bag_I) == 0x000008, "Wrong alignment on EventShopCheckList_C_Create_Item_List_Bag_I");
static_assert(sizeof(EventShopCheckList_C_Create_Item_List_Bag_I) == 0x000210, "Wrong size on EventShopCheckList_C_Create_Item_List_Bag_I");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_Storage_Limit) == 0x000000, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_Storage_Limit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_Storage_Now) == 0x000004, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_Storage_Now' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_WBP_Dest) == 0x000008, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_WBP_Dest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_IsCreateDest) == 0x000010, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_IsCreateDest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_SelectNum) == 0x000014, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_SelectNum' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_ItemId) == 0x000018, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_ItemType) == 0x00001C, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_ItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_ItemRewardType) == 0x00001D, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_ItemRewardType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_AttarId) == 0x000020, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_AttarId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, L_ProductData) == 0x000028, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::L_ProductData' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, Temp_int_Array_Index_Variable) == 0x000058, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Greater_IntInt_ReturnValue) == 0x00005C, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000064, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Create_ReturnValue) == 0x000068, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_GetCheckListItemType_IsOk) == 0x000070, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_GetCheckListItemType_IsOk' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_GetCapacity_ReturnValue) == 0x000074, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_GetUseBlockNum_ReturnValue) == 0x000078, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_MakeLiteralByte_ReturnValue) == 0x00007C, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Not_PreBool_ReturnValue) == 0x00007D, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_AddChild_ReturnValue) == 0x000088, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Add_IntInt_ReturnValue_1) == 0x000090, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Create_ReturnValue_1) == 0x000098, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_AddChild_ReturnValue_1) == 0x0000A0, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000A8, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000AC, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_GetMasterDataManager_IsValid) == 0x0000B0, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000B8, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x0000C0, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x0000C4, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_GetItemMasterData_IsExists) == 0x000128, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_GetItemMasterData_ReturnValue) == 0x000130, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000200, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Conv_IntToByte_ReturnValue) == 0x000201, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_GetValidValue_ReturnValue) == 0x000202, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Array_Length_ReturnValue) == 0x000204, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_I, CallFunc_Less_IntInt_ReturnValue) == 0x000208, "Member 'EventShopCheckList_C_Create_Item_List_Bag_I::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.Create Item List Bag_E
// 0x0138 (0x0138 - 0x0000)
struct EventShopCheckList_C_Create_Item_List_Bag_E final
{
public:
	int32                                         L_Storage_Limit;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Storage_Now;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_Destination_C*      L_WBP_Dest;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsCreateDest;                                    // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_652D[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_SelectNum;                                       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             L_ItemRewardType;                                  // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_652E[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_AttarId;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventShopPurchaseItemInfo           L_ProductData;                                     // 0x0020(0x0030)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_652F[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6530[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemTypeNum_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6531[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Destination_C*      CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCheckListItemType_IsOk;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6532[0x1];                                     // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6533[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Bag_C*         CallFunc_Create_ReturnValue_1;                     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6534[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6535[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x00C4(0x0034)(NoDestructor)
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x00F8(0x0030)()
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6536[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_Create_Item_List_Bag_E) == 0x000008, "Wrong alignment on EventShopCheckList_C_Create_Item_List_Bag_E");
static_assert(sizeof(EventShopCheckList_C_Create_Item_List_Bag_E) == 0x000138, "Wrong size on EventShopCheckList_C_Create_Item_List_Bag_E");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, L_Storage_Limit) == 0x000000, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::L_Storage_Limit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, L_Storage_Now) == 0x000004, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::L_Storage_Now' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, L_WBP_Dest) == 0x000008, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::L_WBP_Dest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, L_IsCreateDest) == 0x000010, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::L_IsCreateDest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, L_SelectNum) == 0x000014, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::L_SelectNum' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, L_ItemRewardType) == 0x000018, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::L_ItemRewardType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, L_AttarId) == 0x00001C, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::L_AttarId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, L_ProductData) == 0x000020, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::L_ProductData' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, Temp_int_Array_Index_Variable) == 0x000050, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Greater_IntInt_ReturnValue) == 0x000054, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00005C, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_GetCapacity_ReturnValue) == 0x000060, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_GetItemTypeNum_ReturnValue) == 0x000064, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_GetItemTypeNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_GetUseBlockNum_ReturnValue) == 0x000068, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Subtract_IntInt_ReturnValue) == 0x00006C, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Clamp_ReturnValue) == 0x000070, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Create_ReturnValue) == 0x000078, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_GetCheckListItemType_IsOk) == 0x000080, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_GetCheckListItemType_IsOk' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_MakeLiteralByte_ReturnValue) == 0x000081, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Not_PreBool_ReturnValue) == 0x000082, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Add_IntInt_ReturnValue_1) == 0x000088, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_AddChild_ReturnValue) == 0x000090, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Create_ReturnValue_1) == 0x000098, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000A0, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000A4, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_AddChild_ReturnValue_1) == 0x0000A8, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_GetMasterDataManager_IsValid) == 0x0000B0, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000B8, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x0000C0, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x0000C4, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Conv_IntToByte_ReturnValue) == 0x000128, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Array_Length_ReturnValue) == 0x00012C, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_GetValidValue_ReturnValue) == 0x000130, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_Create_Item_List_Bag_E, CallFunc_Less_IntInt_ReturnValue) == 0x000131, "Member 'EventShopCheckList_C_Create_Item_List_Bag_E::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Other
// 0x01A8 (0x01A8 - 0x0000)
struct EventShopCheckList_C_CreateItemList_Other final
{
public:
	int32                                         L_ItemCount;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6537[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Item_Reward3_C*     L_WBP3;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Reward2_C*     L_WBP2;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Reward1_C*     L_WBP1;                                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsOver;                                          // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6538[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_Storage_Limit;                                   // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Storage_Now;                                     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6539[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Destination_C*      L_WBP_Dest;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsCreateDest;                                    // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_653A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 L_ItemName;                                        // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         L_SelectNum;                                       // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_ItemId;                                          // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     L_ItemType;                                        // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             L_ItemRewardType;                                  // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_653B[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopPurchaseItemInfo           L_ProductData;                                     // 0x0060(0x0030)(Edit, BlueprintVisible)
	bool                                          CallFunc_CheckOther2_AlreadyHave_IsOver;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_653C[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemNameByOther_Name;                  // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLimitItemOther_Num;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStock_ItemOther_Num;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemOtherType_IsOk;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EventShopCheckList_ItemType                   CallFunc_GetItemOtherType_CheckListOtherType;      // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_653D[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Destination_C*      CallFunc_Create_ReturnValue;                       // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCheckListItemType_IsOk;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_653E[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackableNum_ReturnValue;              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_653F[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Item_Reward1_C*     CallFunc_Create_ReturnValue_1;                     // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6540[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCheckList_Item_Reward2_C*     CallFunc_Create_ReturnValue_2;                     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Reward3_C*     CallFunc_Create_ReturnValue_3;                     // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_3;                   // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6541[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6542[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x0134(0x0034)(NoDestructor)
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x0168(0x0030)()
	EItemType                                     CallFunc_Get_Item_Type_Type;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6543[0x1];                                     // 0x019B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_CreateItemList_Other) == 0x000008, "Wrong alignment on EventShopCheckList_C_CreateItemList_Other");
static_assert(sizeof(EventShopCheckList_C_CreateItemList_Other) == 0x0001A8, "Wrong size on EventShopCheckList_C_CreateItemList_Other");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_ItemCount) == 0x000000, "Member 'EventShopCheckList_C_CreateItemList_Other::L_ItemCount' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_WBP3) == 0x000008, "Member 'EventShopCheckList_C_CreateItemList_Other::L_WBP3' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_WBP2) == 0x000010, "Member 'EventShopCheckList_C_CreateItemList_Other::L_WBP2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_WBP1) == 0x000018, "Member 'EventShopCheckList_C_CreateItemList_Other::L_WBP1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_IsOver) == 0x000020, "Member 'EventShopCheckList_C_CreateItemList_Other::L_IsOver' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_Storage_Limit) == 0x000024, "Member 'EventShopCheckList_C_CreateItemList_Other::L_Storage_Limit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_Storage_Now) == 0x000028, "Member 'EventShopCheckList_C_CreateItemList_Other::L_Storage_Now' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_WBP_Dest) == 0x000030, "Member 'EventShopCheckList_C_CreateItemList_Other::L_WBP_Dest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_IsCreateDest) == 0x000038, "Member 'EventShopCheckList_C_CreateItemList_Other::L_IsCreateDest' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_ItemName) == 0x000040, "Member 'EventShopCheckList_C_CreateItemList_Other::L_ItemName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_SelectNum) == 0x000050, "Member 'EventShopCheckList_C_CreateItemList_Other::L_SelectNum' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_ItemId) == 0x000054, "Member 'EventShopCheckList_C_CreateItemList_Other::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_ItemType) == 0x000058, "Member 'EventShopCheckList_C_CreateItemList_Other::L_ItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_ItemRewardType) == 0x000059, "Member 'EventShopCheckList_C_CreateItemList_Other::L_ItemRewardType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, L_ProductData) == 0x000060, "Member 'EventShopCheckList_C_CreateItemList_Other::L_ProductData' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_CheckOther2_AlreadyHave_IsOver) == 0x000090, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_CheckOther2_AlreadyHave_IsOver' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetItemNameByOther_Name) == 0x000098, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetItemNameByOther_Name' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, Temp_int_Array_Index_Variable) == 0x0000A8, "Member 'EventShopCheckList_C_CreateItemList_Other::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetLimitItemOther_Num) == 0x0000AC, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetLimitItemOther_Num' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetStock_ItemOther_Num) == 0x0000B0, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetStock_ItemOther_Num' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B8, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetItemOtherType_IsOk) == 0x0000B9, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetItemOtherType_IsOk' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetItemOtherType_CheckListOtherType) == 0x0000BA, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetItemOtherType_CheckListOtherType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, K2Node_SwitchEnum_CmpSuccess) == 0x0000BB, "Member 'EventShopCheckList_C_CreateItemList_Other::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Create_ReturnValue) == 0x0000C0, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetCheckListItemType_IsOk) == 0x0000C8, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetCheckListItemType_IsOk' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetStackableNum_ReturnValue) == 0x0000CC, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetStackableNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x0000D0, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Create_ReturnValue_1) == 0x0000D8, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_AddChild_ReturnValue) == 0x0000E0, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000E8, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Not_PreBool_ReturnValue) == 0x0000E9, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Create_ReturnValue_2) == 0x0000F0, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Create_ReturnValue_3) == 0x0000F8, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, Temp_int_Loop_Counter_Variable) == 0x000100, "Member 'EventShopCheckList_C_CreateItemList_Other::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Add_IntInt_ReturnValue_1) == 0x000104, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_AddChild_ReturnValue_1) == 0x000108, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_AddChild_ReturnValue_2) == 0x000110, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_AddChild_ReturnValue_3) == 0x000118, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_AddChild_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Multiply_IntInt_ReturnValue) == 0x000120, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetMasterDataManager_IsValid) == 0x000124, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetMasterDataManager_ReturnValue) == 0x000128, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000130, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x000134, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Array_Get_Item) == 0x000168, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Get_Item_Type_Type) == 0x000198, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Get_Item_Type_Type' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Conv_IntToByte_ReturnValue) == 0x000199, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_GetValidValue_ReturnValue) == 0x00019A, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Array_Length_ReturnValue) == 0x00019C, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CreateItemList_Other, CallFunc_Less_IntInt_ReturnValue) == 0x0001A0, "Member 'EventShopCheckList_C_CreateItemList_Other::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.CheckDestination
// 0x0002 (0x0002 - 0x0000)
struct EventShopCheckList_C_CheckDestination final
{
public:
	ESBRewardItemType                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EventShopCheckList_ItemType                   NewParam1;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_C_CheckDestination) == 0x000001, "Wrong alignment on EventShopCheckList_C_CheckDestination");
static_assert(sizeof(EventShopCheckList_C_CheckDestination) == 0x000002, "Wrong size on EventShopCheckList_C_CheckDestination");
static_assert(offsetof(EventShopCheckList_C_CheckDestination, Type) == 0x000000, "Member 'EventShopCheckList_C_CheckDestination::Type' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckDestination, NewParam1) == 0x000001, "Member 'EventShopCheckList_C_CheckDestination::NewParam1' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.GetCheckListItemType
// 0x0009 (0x0009 - 0x0000)
struct EventShopCheckList_C_GetCheckListItemType final
{
public:
	ESBRewardItemType                             RewardItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EventShopCheckList_DestType                   DestType;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOk;                                              // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_5;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_GetCheckListItemType) == 0x000001, "Wrong alignment on EventShopCheckList_C_GetCheckListItemType");
static_assert(sizeof(EventShopCheckList_C_GetCheckListItemType) == 0x000009, "Wrong size on EventShopCheckList_C_GetCheckListItemType");
static_assert(offsetof(EventShopCheckList_C_GetCheckListItemType, RewardItemType) == 0x000000, "Member 'EventShopCheckList_C_GetCheckListItemType::RewardItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetCheckListItemType, DestType) == 0x000001, "Member 'EventShopCheckList_C_GetCheckListItemType::DestType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetCheckListItemType, IsOk) == 0x000002, "Member 'EventShopCheckList_C_GetCheckListItemType::IsOk' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetCheckListItemType, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'EventShopCheckList_C_GetCheckListItemType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetCheckListItemType, K2Node_SwitchEnum_CmpSuccess_1) == 0x000004, "Member 'EventShopCheckList_C_GetCheckListItemType::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetCheckListItemType, K2Node_SwitchEnum_CmpSuccess_2) == 0x000005, "Member 'EventShopCheckList_C_GetCheckListItemType::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetCheckListItemType, K2Node_SwitchEnum_CmpSuccess_3) == 0x000006, "Member 'EventShopCheckList_C_GetCheckListItemType::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetCheckListItemType, K2Node_SwitchEnum_CmpSuccess_4) == 0x000007, "Member 'EventShopCheckList_C_GetCheckListItemType::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetCheckListItemType, K2Node_SwitchEnum_CmpSuccess_5) == 0x000008, "Member 'EventShopCheckList_C_GetCheckListItemType::K2Node_SwitchEnum_CmpSuccess_5' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.GetStock_ItemOther
// 0x0040 (0x0040 - 0x0000)
struct EventShopCheckList_C_GetStock_ItemOther final
{
public:
	ESBRewardItemType                             RewardItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6544[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_ItemId;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6545[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPoint_ReturnValue;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbFree_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBPPoint_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue_1;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLiquidMemoryNum_Num;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNowLevelClassExpPoint_ReturnValue;     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_C_GetStock_ItemOther) == 0x000008, "Wrong alignment on EventShopCheckList_C_GetStock_ItemOther");
static_assert(sizeof(EventShopCheckList_C_GetStock_ItemOther) == 0x000040, "Wrong size on EventShopCheckList_C_GetStock_ItemOther");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, RewardItemType) == 0x000000, "Member 'EventShopCheckList_C_GetStock_ItemOther::RewardItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, ItemId) == 0x000004, "Member 'EventShopCheckList_C_GetStock_ItemOther::ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, Num) == 0x000008, "Member 'EventShopCheckList_C_GetStock_ItemOther::Num' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, L_ItemId) == 0x00000C, "Member 'EventShopCheckList_C_GetStock_ItemOther::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000010, "Member 'EventShopCheckList_C_GetStock_ItemOther::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'EventShopCheckList_C_GetStock_ItemOther::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, CallFunc_GetPoint_ReturnValue) == 0x00001C, "Member 'EventShopCheckList_C_GetStock_ItemOther::CallFunc_GetPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, CallFunc_GetRoseOrbFree_ReturnValue) == 0x000020, "Member 'EventShopCheckList_C_GetStock_ItemOther::CallFunc_GetRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, CallFunc_GetBPPoint_ReturnValue) == 0x000024, "Member 'EventShopCheckList_C_GetStock_ItemOther::CallFunc_GetBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, CallFunc_GetTokenAmount_ReturnValue) == 0x000028, "Member 'EventShopCheckList_C_GetStock_ItemOther::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, CallFunc_GetTokenAmount_ReturnValue_1) == 0x00002C, "Member 'EventShopCheckList_C_GetStock_ItemOther::CallFunc_GetTokenAmount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, CallFunc_GetLiquidMemoryNum_Num) == 0x000030, "Member 'EventShopCheckList_C_GetStock_ItemOther::CallFunc_GetLiquidMemoryNum_Num' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, CallFunc_GetNowLevelClassExpPoint_ReturnValue) == 0x000034, "Member 'EventShopCheckList_C_GetStock_ItemOther::CallFunc_GetNowLevelClassExpPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetStock_ItemOther, CallFunc_GetMoney_ReturnValue) == 0x000038, "Member 'EventShopCheckList_C_GetStock_ItemOther::CallFunc_GetMoney_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.GetLimitItemOther
// 0x0038 (0x0038 - 0x0000)
struct EventShopCheckList_C_GetLimitItemOther final
{
public:
	ESBRewardItemType                             RewardItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6546[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_ItemId;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6547[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRoseOrbMax_ReturnValue;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBPPointMax_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBPMax_ReturnValue;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSeasonRankPointMax_ReturnValue;        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6548[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenMax_Limit;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetExpMax_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoneyMax_ReturnValue;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_C_GetLimitItemOther) == 0x000004, "Wrong alignment on EventShopCheckList_C_GetLimitItemOther");
static_assert(sizeof(EventShopCheckList_C_GetLimitItemOther) == 0x000038, "Wrong size on EventShopCheckList_C_GetLimitItemOther");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, RewardItemType) == 0x000000, "Member 'EventShopCheckList_C_GetLimitItemOther::RewardItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, ItemId) == 0x000004, "Member 'EventShopCheckList_C_GetLimitItemOther::ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, Num) == 0x000008, "Member 'EventShopCheckList_C_GetLimitItemOther::Num' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, L_ItemId) == 0x00000C, "Member 'EventShopCheckList_C_GetLimitItemOther::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'EventShopCheckList_C_GetLimitItemOther::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, CallFunc_GetRoseOrbMax_ReturnValue) == 0x000014, "Member 'EventShopCheckList_C_GetLimitItemOther::CallFunc_GetRoseOrbMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, CallFunc_GetBPPointMax_ReturnValue) == 0x000018, "Member 'EventShopCheckList_C_GetLimitItemOther::CallFunc_GetBPPointMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, CallFunc_GetBPMax_ReturnValue) == 0x00001C, "Member 'EventShopCheckList_C_GetLimitItemOther::CallFunc_GetBPMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, CallFunc_GetSeasonRankPointMax_ReturnValue) == 0x000020, "Member 'EventShopCheckList_C_GetLimitItemOther::CallFunc_GetSeasonRankPointMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, CallFunc_MakeLiteralByte_ReturnValue) == 0x000024, "Member 'EventShopCheckList_C_GetLimitItemOther::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, CallFunc_GetTokenMax_Limit) == 0x000028, "Member 'EventShopCheckList_C_GetLimitItemOther::CallFunc_GetTokenMax_Limit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'EventShopCheckList_C_GetLimitItemOther::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, CallFunc_GetExpMax_ReturnValue) == 0x000030, "Member 'EventShopCheckList_C_GetLimitItemOther::CallFunc_GetExpMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLimitItemOther, CallFunc_GetMoneyMax_ReturnValue) == 0x000034, "Member 'EventShopCheckList_C_GetLimitItemOther::CallFunc_GetMoneyMax_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.GetItemOtherType
// 0x0004 (0x0004 - 0x0000)
struct EventShopCheckList_C_GetItemOtherType final
{
public:
	ESBRewardItemType                             RewardItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOk;                                              // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EventShopCheckList_ItemType                   CheckListOtherType;                                // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_GetItemOtherType) == 0x000001, "Wrong alignment on EventShopCheckList_C_GetItemOtherType");
static_assert(sizeof(EventShopCheckList_C_GetItemOtherType) == 0x000004, "Wrong size on EventShopCheckList_C_GetItemOtherType");
static_assert(offsetof(EventShopCheckList_C_GetItemOtherType, RewardItemType) == 0x000000, "Member 'EventShopCheckList_C_GetItemOtherType::RewardItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemOtherType, IsOk) == 0x000001, "Member 'EventShopCheckList_C_GetItemOtherType::IsOk' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemOtherType, CheckListOtherType) == 0x000002, "Member 'EventShopCheckList_C_GetItemOtherType::CheckListOtherType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemOtherType, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'EventShopCheckList_C_GetItemOtherType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.GetLiquidMemoryNum
// 0x0080 (0x0080 - 0x0000)
struct EventShopCheckList_C_GetLiquidMemoryNum final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryInfo>            OwnLiquidMemoryInfos;                              // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         L_LiquidMemoryId;                                  // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6549[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    NetworkDataCache;                                  // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_654A[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_Array_Get_Item;                           // 0x0038(0x0028)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_654B[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryInfo>            CallFunc_GetLiquidMemoryInfos_ReturnValue;         // 0x0070(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(EventShopCheckList_C_GetLiquidMemoryNum) == 0x000008, "Wrong alignment on EventShopCheckList_C_GetLiquidMemoryNum");
static_assert(sizeof(EventShopCheckList_C_GetLiquidMemoryNum) == 0x000080, "Wrong size on EventShopCheckList_C_GetLiquidMemoryNum");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, ID) == 0x000000, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::ID' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, Num) == 0x000004, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::Num' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, OwnLiquidMemoryInfos) == 0x000008, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::OwnLiquidMemoryInfos' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, L_LiquidMemoryId) == 0x000018, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::L_LiquidMemoryId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, NetworkDataCache) == 0x000020, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::NetworkDataCache' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, Temp_int_Array_Index_Variable) == 0x000028, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, CallFunc_Array_Get_Item) == 0x000038, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000065, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, CallFunc_GetNetworkDataCache_IsValid) == 0x000066, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000068, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetLiquidMemoryNum, CallFunc_GetLiquidMemoryInfos_ReturnValue) == 0x000070, "Member 'EventShopCheckList_C_GetLiquidMemoryNum::CallFunc_GetLiquidMemoryInfos_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.SetDisabledExchangeButton
// 0x0001 (0x0001 - 0x0000)
struct EventShopCheckList_C_SetDisabledExchangeButton final
{
public:
	bool                                          Disabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_SetDisabledExchangeButton) == 0x000001, "Wrong alignment on EventShopCheckList_C_SetDisabledExchangeButton");
static_assert(sizeof(EventShopCheckList_C_SetDisabledExchangeButton) == 0x000001, "Wrong size on EventShopCheckList_C_SetDisabledExchangeButton");
static_assert(offsetof(EventShopCheckList_C_SetDisabledExchangeButton, Disabled) == 0x000000, "Member 'EventShopCheckList_C_SetDisabledExchangeButton::Disabled' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.CheckOther2_AlreadyHave
// 0x0030 (0x0030 - 0x0000)
struct EventShopCheckList_C_CheckOther2_AlreadyHave final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             RewardItemType;                                    // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOver;                                            // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_654C[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_ItemId;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_654D[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerStampPossession_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerEmotePossession_ReturnValue;      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAchievementPossession_ReturnValue;      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLearned_ReturnValue;                    // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLearned_ReturnValue_1;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHaveCutomPartsById_Ret;                 // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_CheckOther2_AlreadyHave) == 0x000008, "Wrong alignment on EventShopCheckList_C_CheckOther2_AlreadyHave");
static_assert(sizeof(EventShopCheckList_C_CheckOther2_AlreadyHave) == 0x000030, "Wrong size on EventShopCheckList_C_CheckOther2_AlreadyHave");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, ItemId) == 0x000000, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, RewardItemType) == 0x000004, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::RewardItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, IsOver) == 0x000005, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::IsOver' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, L_ItemId) == 0x000008, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, K2Node_SwitchEnum_CmpSuccess) == 0x00000C, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, CallFunc_GetImaginLabComp_ReturnValue) == 0x000010, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::CallFunc_GetImaginLabComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, CallFunc_GetCraftComponent_ReturnValue) == 0x000018, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, CallFunc_GetSBPlayerState_ReturnValue) == 0x000020, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, CallFunc_IsPlayerStampPossession_ReturnValue) == 0x000028, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::CallFunc_IsPlayerStampPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, CallFunc_IsPlayerEmotePossession_ReturnValue) == 0x000029, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::CallFunc_IsPlayerEmotePossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, CallFunc_IsAchievementPossession_ReturnValue) == 0x00002A, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::CallFunc_IsAchievementPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, CallFunc_IsLearned_ReturnValue) == 0x00002B, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::CallFunc_IsLearned_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, CallFunc_IsLearned_ReturnValue_1) == 0x00002C, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::CallFunc_IsLearned_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_CheckOther2_AlreadyHave, CallFunc_IsHaveCutomPartsById_Ret) == 0x00002D, "Member 'EventShopCheckList_C_CheckOther2_AlreadyHave::CallFunc_IsHaveCutomPartsById_Ret' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.GetTokenMax
// 0x0078 (0x0078 - 0x0000)
struct EventShopCheckList_C_GetTokenMax final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Limit;                                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_654E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_654F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0020(0x0058)()
};
static_assert(alignof(EventShopCheckList_C_GetTokenMax) == 0x000008, "Wrong alignment on EventShopCheckList_C_GetTokenMax");
static_assert(sizeof(EventShopCheckList_C_GetTokenMax) == 0x000078, "Wrong size on EventShopCheckList_C_GetTokenMax");
static_assert(offsetof(EventShopCheckList_C_GetTokenMax, TokenID) == 0x000000, "Member 'EventShopCheckList_C_GetTokenMax::TokenID' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetTokenMax, Limit) == 0x000004, "Member 'EventShopCheckList_C_GetTokenMax::Limit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetTokenMax, CallFunc_GetMasterDataManager_IsValid) == 0x000008, "Member 'EventShopCheckList_C_GetTokenMax::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetTokenMax, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'EventShopCheckList_C_GetTokenMax::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetTokenMax, CallFunc_BP_FindMasterToken_bIsValid) == 0x000018, "Member 'EventShopCheckList_C_GetTokenMax::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetTokenMax, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000020, "Member 'EventShopCheckList_C_GetTokenMax::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.GetItemNameByOther
// 0x05A0 (0x05A0 - 0x0000)
struct EventShopCheckList_C_GetItemNameByOther final
{
public:
	ESBRewardItemType                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6550[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   L_MasterDataMgr;                                   // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6551[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x0028(0x0088)(ConstParm)
	bool                                          CallFunc_FindStampMasterData_IsExists;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6552[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_FindStampMasterData_ReturnValue;          // 0x00B8(0x0020)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6553[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x00E0(0x00D0)()
	class FString                                 CallFunc_GetStampSetText_ReturnValue;              // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6554[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x01D8(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindRecipeSetMasterData_isExists;         // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6555[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRecipeSetMasterData                   CallFunc_FindRecipeSetMasterData_ReturnValue;      // 0x02A0(0x0018)(ConstParm)
	class FString                                 CallFunc_GetAdventureBoardBoardName_ReturnValue;   // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetRecipeSetText_ReturnValue;             // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6556[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x02E0(0x0058)()
	bool                                          CallFunc_BP_FindLiquidMemoryMaster_IsExists;       // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6557[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_BP_FindLiquidMemoryMaster_ReturnValue;    // 0x0340(0x0038)()
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLiquidMemoryText_ReturnValue;          // 0x0388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6558[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6559[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x03B0(0x00B0)()
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_655A[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x0468(0x0078)()
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x04E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x04F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSBMasterAdventureCardDecorationDataForBP_bIsExists; // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_655B[0x3];                                     // 0x0501(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAdventureCardDecoration       CallFunc_FindSBMasterAdventureCardDecorationDataForBP_ReturnValue; // 0x0504(0x0010)(ConstParm, NoDestructor)
	uint8                                         Pad_655C[0x4];                                     // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetStampIDToCategoryNameAndStampI_ReturnValue; // 0x0518(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0530(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAdventureCardDecorationText_ReturnValue; // 0x0540(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0550(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetRewardName_ReturnValue;                // 0x0560(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEmotionName_ReturnValue;               // 0x0578(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_655D[0x7];                                     // 0x0589(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0590(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_C_GetItemNameByOther) == 0x000008, "Wrong alignment on EventShopCheckList_C_GetItemNameByOther");
static_assert(sizeof(EventShopCheckList_C_GetItemNameByOther) == 0x0005A0, "Wrong size on EventShopCheckList_C_GetItemNameByOther");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, Type) == 0x000000, "Member 'EventShopCheckList_C_GetItemNameByOther::Type' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, ID) == 0x000004, "Member 'EventShopCheckList_C_GetItemNameByOther::ID' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, Param_Name) == 0x000008, "Member 'EventShopCheckList_C_GetItemNameByOther::Param_Name' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, L_MasterDataMgr) == 0x000018, "Member 'EventShopCheckList_C_GetItemNameByOther::L_MasterDataMgr' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'EventShopCheckList_C_GetItemNameByOther::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindCraftMasterData_isExists) == 0x000021, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindCraftMasterData_ReturnValue) == 0x000028, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindStampMasterData_IsExists) == 0x0000B0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindStampMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindStampMasterData_ReturnValue) == 0x0000B8, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindStampMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetItemMasterData_IsExists) == 0x0000D8, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetItemMasterData_ReturnValue) == 0x0000E0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetStampSetText_ReturnValue) == 0x0001B0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetStampSetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetItemText_ReturnValue) == 0x0001C0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetWeaponMasterData_IsExists) == 0x0001D0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0001D8, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetWeaponText_ReturnValue) == 0x000288, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindRecipeSetMasterData_isExists) == 0x000298, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindRecipeSetMasterData_isExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindRecipeSetMasterData_ReturnValue) == 0x0002A0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindRecipeSetMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetAdventureBoardBoardName_ReturnValue) == 0x0002B8, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetAdventureBoardBoardName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetRecipeSetText_ReturnValue) == 0x0002C8, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetRecipeSetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_BP_FindMasterToken_bIsValid) == 0x0002D8, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_BP_FindMasterToken_ReturnValue) == 0x0002E0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_BP_FindLiquidMemoryMaster_IsExists) == 0x000338, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_BP_FindLiquidMemoryMaster_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_BP_FindLiquidMemoryMaster_ReturnValue) == 0x000340, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_BP_FindLiquidMemoryMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetMasterTokenText_ReturnValue) == 0x000378, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetLiquidMemoryText_ReturnValue) == 0x000388, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetLiquidMemoryText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetMasterDataManager_IsValid) == 0x000398, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetMasterDataManager_ReturnValue) == 0x0003A0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindMasterImagineData_IsExists) == 0x0003A8, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindMasterImagineData_ReturnValue) == 0x0003B0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetAchievementMasterData_IsExists) == 0x000460, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetAchievementMasterData_ReturnValue) == 0x000468, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetMasterImagineText_ReturnValue) == 0x0004E0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetAchievementName_ReturnValue) == 0x0004F0, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindSBMasterAdventureCardDecorationDataForBP_bIsExists) == 0x000500, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindSBMasterAdventureCardDecorationDataForBP_bIsExists' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_FindSBMasterAdventureCardDecorationDataForBP_ReturnValue) == 0x000504, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_FindSBMasterAdventureCardDecorationDataForBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetStampIDToCategoryNameAndStampI_ReturnValue) == 0x000518, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetStampIDToCategoryNameAndStampI_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_Conv_TextToString_ReturnValue) == 0x000530, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetAdventureCardDecorationText_ReturnValue) == 0x000540, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetAdventureCardDecorationText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_Conv_IntToString_ReturnValue) == 0x000550, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetRewardName_ReturnValue) == 0x000560, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetRewardName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_Conv_StringToName_ReturnValue) == 0x000570, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, CallFunc_GetEmotionName_ReturnValue) == 0x000578, "Member 'EventShopCheckList_C_GetItemNameByOther::CallFunc_GetEmotionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, Temp_bool_Variable) == 0x000588, "Member 'EventShopCheckList_C_GetItemNameByOther::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_GetItemNameByOther, K2Node_Select_Default) == 0x000590, "Member 'EventShopCheckList_C_GetItemNameByOther::K2Node_Select_Default' has a wrong offset!");

// Function EventShopCheckList.EventShopCheckList_C.IsHaveCutomPartsById
// 0x0048 (0x0048 - 0x0000)
struct EventShopCheckList_C_IsHaveCutomPartsById final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsHave;                                            // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_655E[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_655F[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDecorationData>                CallFunc_GetAdventureCardDecorationDataList_ReturnValue; // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6560[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDecorationData                        CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_C_IsHaveCutomPartsById) == 0x000008, "Wrong alignment on EventShopCheckList_C_IsHaveCutomPartsById");
static_assert(sizeof(EventShopCheckList_C_IsHaveCutomPartsById) == 0x000048, "Wrong size on EventShopCheckList_C_IsHaveCutomPartsById");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, ID) == 0x000000, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::ID' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, Ret) == 0x000004, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::Ret' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, IsHave) == 0x000005, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::IsHave' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, Temp_bool_True_if_break_was_hit_Variable) == 0x000006, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, Temp_int_Array_Index_Variable) == 0x000008, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, CallFunc_GetAdventureCardDecorationDataList_ReturnValue) == 0x000018, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::CallFunc_GetAdventureCardDecorationDataList_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, CallFunc_Array_Get_Item) == 0x000030, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_C_IsHaveCutomPartsById, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000042, "Member 'EventShopCheckList_C_IsHaveCutomPartsById::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

