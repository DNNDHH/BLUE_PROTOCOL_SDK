#pragma once

 

// Package: MyCharaMenu_Other

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FreeBuffTypeToText_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.ExecuteUbergraph_MyCharaMenu_Other
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other) == 0x000004, "Wrong alignment on MyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other");
static_assert(sizeof(MyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other) == 0x000004, "Wrong size on MyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other");
static_assert(offsetof(MyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other, EntryPoint) == 0x000000, "Member 'MyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other::EntryPoint' has a wrong offset!");

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveOutGameBuff
// 0x03E0 (0x03E0 - 0x0000)
struct MyCharaMenu_Other_C_UpdateActiveOutGameBuff final
{
public:
	struct FSBActiveItemData                      TargetActiveData;                                  // 0x0000(0x0020)(Edit, BlueprintVisible)
	struct FItemMasterData                        TargetMasterData;                                  // 0x0020(0x00D0)(Edit, BlueprintVisible)
	EOutGameBuffType                              NowType;                                           // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ACB[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBActiveItemData>              ActiveItems;                                       // 0x00F8(0x0010)(Edit, BlueprintVisible)
	struct FDateTime                              LimitTime;                                         // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Value;                                             // 0x0110(0x0018)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   BuffName;                                          // 0x0130(0x0018)(Edit, BlueprintVisible)
	class FText                                   Category;                                          // 0x0148(0x0018)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ACC[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0173(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ACD[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Other_C*                        CallFunc_TryGetActiveListItem_Item;                // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBActiveItemData                      CallFunc_Array_Get_Item;                           // 0x0190(0x0020)()
	EOutGameBuffType                              CallFunc_GetBuffType_ReturnValue;                  // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ACE[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameBuffTypeText_ReturnValue;          // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ACF[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01D0(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AD0[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBOutGameBuffMasterData               CallFunc_GetOutGameBuffMasterData_ReturnValue;     // 0x01EC(0x000C)(ConstParm, NoDestructor)
	EOutGameBuffType                              CallFunc_GetBuffType_ReturnValue_1;                // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AD1[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetBuffValue_ReturnValue;                 // 0x0200(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AD2[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AD3[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0240(0x00D0)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0310(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0328(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0368(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AD4[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0390(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AD5[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03B0(0x0018)()
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x03C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBActiveItemData>              CallFunc_GetActiveItems_BP_ReturnValue;            // 0x03D0(0x0010)(ReferenceParm)
};
static_assert(alignof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff) == 0x000008, "Wrong alignment on MyCharaMenu_Other_C_UpdateActiveOutGameBuff");
static_assert(sizeof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff) == 0x0003E0, "Wrong size on MyCharaMenu_Other_C_UpdateActiveOutGameBuff");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, TargetActiveData) == 0x000000, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::TargetActiveData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, TargetMasterData) == 0x000020, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::TargetMasterData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, NowType) == 0x0000F0, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::NowType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, ActiveItems) == 0x0000F8, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::ActiveItems' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, LimitTime) == 0x000108, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::LimitTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, Value) == 0x000110, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, MasterDataManager) == 0x000128, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::MasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, BuffName) == 0x000130, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::BuffName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, Category) == 0x000148, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::Category' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, Temp_int_Variable) == 0x000160, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, Temp_int_Variable_1) == 0x000164, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Conv_IntToByte_ReturnValue) == 0x000168, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Add_IntInt_ReturnValue) == 0x00016C, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetValidValue_ReturnValue) == 0x000170, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000171, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000172, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000173, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000174, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, Temp_int_Array_Index_Variable) == 0x000178, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_TryGetActiveListItem_Item) == 0x000180, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_TryGetActiveListItem_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, Temp_int_Loop_Counter_Variable) == 0x000188, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Add_IntInt_ReturnValue_1) == 0x00018C, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Array_Get_Item) == 0x000190, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetBuffType_ReturnValue) == 0x0001B0, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetBuffType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetGameBuffTypeText_ReturnValue) == 0x0001B8, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetGameBuffTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Array_Length_ReturnValue) == 0x0001C8, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Conv_StringToText_ReturnValue) == 0x0001D0, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Less_IntInt_ReturnValue) == 0x0001E8, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetOutGameBuffMasterData_ReturnValue) == 0x0001EC, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetOutGameBuffMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetBuffType_ReturnValue_1) == 0x0001F8, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetBuffType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001F9, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetBuffValue_ReturnValue) == 0x000200, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetBuffValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetMasterDataManager_IsValid) == 0x000218, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetMasterDataManager_ReturnValue) == 0x000220, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000228, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetItemMasterData_IsExists) == 0x000238, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetItemMasterData_ReturnValue) == 0x000240, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000310, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, K2Node_MakeStruct_FormatArgumentData) == 0x000328, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, K2Node_MakeArray_Array) == 0x000368, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000378, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_MakeLiteralInt_ReturnValue) == 0x000388, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000390, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Less_IntInt_ReturnValue_1) == 0x0003A8, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_Format_ReturnValue) == 0x0003B0, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x0003C8, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveOutGameBuff, CallFunc_GetActiveItems_BP_ReturnValue) == 0x0003D0, "Member 'MyCharaMenu_Other_C_UpdateActiveOutGameBuff::CallFunc_GetActiveItems_BP_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveNetCafeBuff
// 0x0160 (0x0160 - 0x0000)
struct MyCharaMenu_Other_C_UpdateActiveNetCafeBuff final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AD6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Other_C*                        CallFunc_TryGetActiveListItem_Item;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0040)(HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AD7[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AD8[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNetworkCafeMessageManager*           CallFunc_GetNetworkCafeMessageManager_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBNetworkCafeBuffsMasterData>  CallFunc_BP_GetNetworkCafeBuffsMaster_ReturnValue; // 0x00E8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsNetworkCafe_ReturnValue;                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AD9[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBNetworkCafeBuffsMasterData          CallFunc_Array_Get_Item;                           // 0x00FC(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ADA[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBOutGameBuffMasterData               CallFunc_GetOutGameBuffMasterData_ReturnValue;     // 0x0114(0x000C)(ConstParm, NoDestructor)
	class FText                                   CallFunc_GetBuffValue_ReturnValue;                 // 0x0120(0x0018)()
	class FString                                 CallFunc_GetGameBuffTypeText_ReturnValue;          // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0148(0x0018)()
};
static_assert(alignof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff) == 0x000008, "Wrong alignment on MyCharaMenu_Other_C_UpdateActiveNetCafeBuff");
static_assert(sizeof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff) == 0x000160, "Wrong size on MyCharaMenu_Other_C_UpdateActiveNetCafeBuff");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_TryGetActiveListItem_Item) == 0x000008, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_TryGetActiveListItem_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000010, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000020, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, Temp_int_Loop_Counter_Variable) == 0x0000A0, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, K2Node_MakeArray_Array) == 0x0000A8, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_Add_IntInt_ReturnValue) == 0x0000D0, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_GetMasterDataManager_IsValid) == 0x0000D4, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D8, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_GetNetworkCafeMessageManager_ReturnValue) == 0x0000E0, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_GetNetworkCafeMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_BP_GetNetworkCafeBuffsMaster_ReturnValue) == 0x0000E8, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_BP_GetNetworkCafeBuffsMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_IsNetworkCafe_ReturnValue) == 0x0000F8, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_IsNetworkCafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_Array_Get_Item) == 0x0000FC, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_Array_Length_ReturnValue) == 0x000108, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_FTrunc_ReturnValue) == 0x00010C, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_GetOutGameBuffMasterData_ReturnValue) == 0x000114, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_GetOutGameBuffMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_GetBuffValue_ReturnValue) == 0x000120, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_GetBuffValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_GetGameBuffTypeText_ReturnValue) == 0x000138, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_GetGameBuffTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateActiveNetCafeBuff, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000148, "Member 'MyCharaMenu_Other_C_UpdateActiveNetCafeBuff::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.CreateStockOutGameBuff
// 0x0420 (0x0420 - 0x0000)
struct MyCharaMenu_Other_C_CreateStockOutGameBuff final
{
public:
	bool                                          bTop;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bFirst;                                            // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EOutGameBuffType                              LastBuff;                                          // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ADB[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Value;                                             // 0x0008(0x0018)(Edit, BlueprintVisible)
	class FText                                   Buff;                                              // 0x0020(0x0018)(Edit, BlueprintVisible)
	class FText                                   ItemName;                                          // 0x0038(0x0018)(Edit, BlueprintVisible)
	class FText                                   Amount;                                            // 0x0050(0x0018)(Edit, BlueprintVisible)
	TArray<struct FItemMasterData>                DataList;                                          // 0x0068(0x0010)(Edit, BlueprintVisible)
	struct FItemMasterData                        SwapData;                                          // 0x0078(0x00D0)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ADC[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0168(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ADD[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEffect_OtherStock_C*                   CallFunc_Create_ReturnValue;                       // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ADE[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_OtherStockLine_C*               CallFunc_Create_ReturnValue_1;                     // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x01A0(0x0018)()
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ADF[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x01C8(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AE0[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEffect_OtherStockLine_C*               CallFunc_Create_ReturnValue_2;                     // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBOwnedBuffItemData>           CallFunc_GetOwnedBuffItemData_ReturnValue;         // 0x0200(0x0010)(ReferenceParm)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBOwnedBuffItemData                   CallFunc_Array_Get_Item;                           // 0x0218(0x00D8)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AE1[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EOutGameBuffType                              CallFunc_GetBuffType_ReturnValue;                  // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AE2[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0310(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0328(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AE3[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0370(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0380(0x0018)()
	struct FSBOutGameBuffMasterData               CallFunc_GetOutGameBuffMasterData_ReturnValue;     // 0x0398(0x000C)(ConstParm, NoDestructor)
	uint8                                         Pad_8AE4[0x4];                                     // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameBuffTypeText_ReturnValue;          // 0x03A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetBuffValue_ReturnValue;                 // 0x03B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x03D0(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x03E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AE5[0x4];                                     // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0400(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Other_C_CreateStockOutGameBuff) == 0x000008, "Wrong alignment on MyCharaMenu_Other_C_CreateStockOutGameBuff");
static_assert(sizeof(MyCharaMenu_Other_C_CreateStockOutGameBuff) == 0x000420, "Wrong size on MyCharaMenu_Other_C_CreateStockOutGameBuff");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, bTop) == 0x000000, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::bTop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, bFirst) == 0x000001, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::bFirst' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, LastBuff) == 0x000002, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::LastBuff' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, Value) == 0x000008, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, Buff) == 0x000020, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::Buff' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, ItemName) == 0x000038, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::ItemName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, Amount) == 0x000050, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::Amount' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, DataList) == 0x000068, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::DataList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, SwapData) == 0x000078, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::SwapData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, MasterDataManager) == 0x000148, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::MasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, Temp_int_Array_Index_Variable) == 0x000150, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000154, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000158, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Conv_StringToText_ReturnValue) == 0x000168, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Not_PreBool_ReturnValue) == 0x000180, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, Temp_int_Loop_Counter_Variable) == 0x000184, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Create_ReturnValue) == 0x000188, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Add_IntInt_ReturnValue) == 0x000190, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Create_ReturnValue_1) == 0x000198, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, Temp_text_Variable) == 0x0001A0, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_AddChild_ReturnValue) == 0x0001B8, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, Temp_bool_Variable) == 0x0001C0, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, K2Node_Select_Default) == 0x0001C8, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_GetMasterDataManager_IsValid) == 0x0001E0, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001E8, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Create_ReturnValue_2) == 0x0001F0, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_AddChild_ReturnValue_1) == 0x0001F8, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_GetOwnedBuffItemData_ReturnValue) == 0x000200, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_GetOwnedBuffItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_AddChild_ReturnValue_2) == 0x000210, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Array_Get_Item) == 0x000218, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Array_Length_ReturnValue) == 0x0002F0, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Less_IntInt_ReturnValue) == 0x0002F4, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_GetItemText_ReturnValue) == 0x0002F8, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_GetBuffType_ReturnValue) == 0x000308, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_GetBuffType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000310, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, K2Node_MakeStruct_FormatArgumentData) == 0x000328, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000368, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, K2Node_MakeArray_Array) == 0x000370, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Format_ReturnValue) == 0x000380, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_GetOutGameBuffMasterData_ReturnValue) == 0x000398, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_GetOutGameBuffMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_GetGameBuffTypeText_ReturnValue) == 0x0003A8, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_GetGameBuffTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_GetBuffValue_ReturnValue) == 0x0003B8, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_GetBuffValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0003D0, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Conv_IntToString_ReturnValue) == 0x0003E8, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Array_Length_ReturnValue_1) == 0x0003F8, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000400, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_CreateStockOutGameBuff, CallFunc_Greater_IntInt_ReturnValue) == 0x000418, "Member 'MyCharaMenu_Other_C_CreateStockOutGameBuff::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.GetBuffValue
// 0x0130 (0x0130 - 0x0000)
struct MyCharaMenu_Other_C_GetBuffValue final
{
public:
	int32                                         BaseValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRate;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EOutGameBuffType                              InBuffType;                                        // 0x0005(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AE6[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AE7[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AE8[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0040(0x0018)()
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0058(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0100(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0118(0x0018)()
};
static_assert(alignof(MyCharaMenu_Other_C_GetBuffValue) == 0x000008, "Wrong alignment on MyCharaMenu_Other_C_GetBuffValue");
static_assert(sizeof(MyCharaMenu_Other_C_GetBuffValue) == 0x000130, "Wrong size on MyCharaMenu_Other_C_GetBuffValue");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, BaseValue) == 0x000000, "Member 'MyCharaMenu_Other_C_GetBuffValue::BaseValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, IsRate) == 0x000004, "Member 'MyCharaMenu_Other_C_GetBuffValue::IsRate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, InBuffType) == 0x000005, "Member 'MyCharaMenu_Other_C_GetBuffValue::InBuffType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, ReturnValue) == 0x000008, "Member 'MyCharaMenu_Other_C_GetBuffValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, Temp_bool_Variable) == 0x000020, "Member 'MyCharaMenu_Other_C_GetBuffValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000021, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000030, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000034, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000038, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_FloatToText_ReturnValue) == 0x000040, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000058, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_TextToString_ReturnValue) == 0x000070, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000080, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Concat_StrStr_ReturnValue) == 0x000090, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A0, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_IntToString_ReturnValue) == 0x0000E0, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000F0, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000100, "Member 'MyCharaMenu_Other_C_GetBuffValue::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_GetBuffValue, K2Node_Select_Default) == 0x000118, "Member 'MyCharaMenu_Other_C_GetBuffValue::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.TryGetActiveListItem
// 0x0050 (0x0050 - 0x0000)
struct MyCharaMenu_Other_C_TryGetActiveListItem final
{
public:
	class UEffect_Other_C*                        Item;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEffect_Other_C*                        Swap;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AE9[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AEA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Other_C*                        K2Node_DynamicCast_AsEffect_Other;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AEB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Other_C*                        CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Other_C_TryGetActiveListItem) == 0x000008, "Wrong alignment on MyCharaMenu_Other_C_TryGetActiveListItem");
static_assert(sizeof(MyCharaMenu_Other_C_TryGetActiveListItem) == 0x000050, "Wrong size on MyCharaMenu_Other_C_TryGetActiveListItem");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, Item) == 0x000000, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, Swap) == 0x000008, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::Swap' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, Temp_int_Variable) == 0x000010, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, CallFunc_GetChildrenCount_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, K2Node_DynamicCast_AsEffect_Other) == 0x000030, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::K2Node_DynamicCast_AsEffect_Other' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, CallFunc_Create_ReturnValue) == 0x000040, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_TryGetActiveListItem, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'MyCharaMenu_Other_C_TryGetActiveListItem::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.FixActiveList
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_Other_C_FixActiveList final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Other_C_FixActiveList) == 0x000008, "Wrong alignment on MyCharaMenu_Other_C_FixActiveList");
static_assert(sizeof(MyCharaMenu_Other_C_FixActiveList) == 0x000020, "Wrong size on MyCharaMenu_Other_C_FixActiveList");
static_assert(offsetof(MyCharaMenu_Other_C_FixActiveList, Temp_int_Variable) == 0x000000, "Member 'MyCharaMenu_Other_C_FixActiveList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_FixActiveList, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'MyCharaMenu_Other_C_FixActiveList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_FixActiveList, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_Other_C_FixActiveList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_FixActiveList, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'MyCharaMenu_Other_C_FixActiveList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_FixActiveList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'MyCharaMenu_Other_C_FixActiveList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_FixActiveList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'MyCharaMenu_Other_C_FixActiveList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateFreeBuff
// 0x0250 (0x0250 - 0x0000)
struct MyCharaMenu_Other_C_UpdateFreeBuff final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AEC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0040)(HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AED[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	class USBPlayerFreeBuffPointComponent*        CallFunc_GetPlayerFreeBuffPointComponent_ReturnValue; // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEffect_Other_C*                        CallFunc_TryGetActiveListItem_Item;                // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AEE[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBFreeBuffPlayerBuffTimeInfo>  CallFunc_GetFreeBuffPlayerBuffTimeInfoLists_ReturnValue; // 0x0108(0x0010)(ConstParm, ReferenceParm)
	struct FSBFreeBuffPlayerBuffTimeInfo          CallFunc_Array_Get_Item;                           // 0x0118(0x0018)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AEF[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Free_Buff_Text_Text;                  // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBStatusAlimentConfig                 CallFunc_Get_Free_Buff_Text_Out_Row;               // 0x0148(0x0090)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AF0[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01F0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AF1[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0220(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0238(0x0018)()
};
static_assert(alignof(MyCharaMenu_Other_C_UpdateFreeBuff) == 0x000008, "Wrong alignment on MyCharaMenu_Other_C_UpdateFreeBuff");
static_assert(sizeof(MyCharaMenu_Other_C_UpdateFreeBuff) == 0x000250, "Wrong size on MyCharaMenu_Other_C_UpdateFreeBuff");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, Temp_bool_Variable) == 0x000000, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, Temp_text_Variable) == 0x000010, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000028, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000038, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, K2Node_MakeArray_Array) == 0x0000C0, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_GetPlayerFreeBuffPointComponent_ReturnValue) == 0x0000F0, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_GetPlayerFreeBuffPointComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_TryGetActiveListItem_Item) == 0x0000F8, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_TryGetActiveListItem_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_IsValid_ReturnValue_1) == 0x000100, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_GetFreeBuffPlayerBuffTimeInfoLists_ReturnValue) == 0x000108, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_GetFreeBuffPlayerBuffTimeInfoLists_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Array_Get_Item) == 0x000118, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Array_Length_ReturnValue) == 0x000130, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Less_IntInt_ReturnValue) == 0x000134, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Get_Free_Buff_Text_Text) == 0x000138, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Get_Free_Buff_Text_Text' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Get_Free_Buff_Text_Out_Row) == 0x000148, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Get_Free_Buff_Text_Out_Row' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Array_Length_ReturnValue_1) == 0x0001D8, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Conv_IntToString_ReturnValue) == 0x0001E0, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Conv_IntToText_ReturnValue) == 0x0001F0, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Concat_StrStr_ReturnValue) == 0x000208, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000218, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000220, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_UpdateFreeBuff, K2Node_Select_Default) == 0x000238, "Member 'MyCharaMenu_Other_C_UpdateFreeBuff::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.Get Free Buff Text
// 0x01B8 (0x01B8 - 0x0000)
struct MyCharaMenu_Other_C_Get_Free_Buff_Text final
{
public:
	ESBFreeBuffPointType                          Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AF2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBStatusAlimentConfig                 Out_Row;                                           // 0x0018(0x0090)(Parm, OutParm)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AF3[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AF4[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x00D8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AF5[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStatusAlimentConfig                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x00F8(0x0090)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AF6[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFreeBuffTypeToText                    CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x018C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AF7[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AF8[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Other_C_Get_Free_Buff_Text) == 0x000008, "Wrong alignment on MyCharaMenu_Other_C_Get_Free_Buff_Text");
static_assert(sizeof(MyCharaMenu_Other_C_Get_Free_Buff_Text) == 0x0001B8, "Wrong size on MyCharaMenu_Other_C_Get_Free_Buff_Text");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, Type) == 0x000000, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::Type' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, Text) == 0x000008, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::Text' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, Out_Row) == 0x000018, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::Out_Row' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000A8, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, Temp_int_Array_Index_Variable) == 0x0000B8, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C0, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, Temp_int_Loop_Counter_Variable) == 0x0000D0, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0000D8, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000F8, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000188, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_Less_IntInt_ReturnValue) == 0x000189, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x00018C, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000194, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_Add_IntInt_ReturnValue) == 0x000198, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001A0, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Other_C_Get_Free_Buff_Text, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001B0, "Member 'MyCharaMenu_Other_C_Get_Free_Buff_Text::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

