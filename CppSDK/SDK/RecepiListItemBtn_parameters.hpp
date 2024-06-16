#pragma once

 

// Package: RecepiListItemBtn

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function RecepiListItemBtn.RecepiListItemBtn_C.OnSelect__DelegateSignature
// 0x0040 (0x0040 - 0x0000)
struct RecepiListItemBtn_C_OnSelect__DelegateSignature final
{
public:
	struct FMasterImagineRecepi                   MasterData;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class URecepiListItemBtn_C*                   SelectedItem;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RecepiListItemBtn_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on RecepiListItemBtn_C_OnSelect__DelegateSignature");
static_assert(sizeof(RecepiListItemBtn_C_OnSelect__DelegateSignature) == 0x000040, "Wrong size on RecepiListItemBtn_C_OnSelect__DelegateSignature");
static_assert(offsetof(RecepiListItemBtn_C_OnSelect__DelegateSignature, MasterData) == 0x000000, "Member 'RecepiListItemBtn_C_OnSelect__DelegateSignature::MasterData' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_OnSelect__DelegateSignature, SelectedItem) == 0x000038, "Member 'RecepiListItemBtn_C_OnSelect__DelegateSignature::SelectedItem' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.ExecuteUbergraph_RecepiListItemBtn
// 0x03D0 (0x03D0 - 0x0000)
struct RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RecepiId)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59F4[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F5[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   K2Node_CustomEvent_ImagineRecpiData;               // 0x0030(0x0038)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59F6[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetAdventurerRankText_ReturnValue;        // 0x0078(0x0018)()
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F7[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x0098(0x00B0)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0148(0x0018)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0178(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59F8[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01C8(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59F9[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName;       // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01F8(0x0018)()
	bool                                          K2Node_CustomEvent_IsCrafted;                      // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59FA[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59FB[0x6];                                     // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59FC[0x6];                                     // 0x022A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue;             // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RecepiId;                       // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineRecepi_IsExist;                // 0x023D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59FD[0x2];                                     // 0x023E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  CallFunc_FindImagineRecepi_ReturnValue;            // 0x0240(0x0008)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59FE[0x6];                                     // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59FF[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegistReadedID_bIsValid;                  // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A00[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x02BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A01[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData;                  // 0x02E8(0x000C)(NoDestructor)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue;           // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A02[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x02F8(0x0028)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A03[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0328(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0350(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0378(0x0028)()
	bool                                          Temp_bool_Variable_2;                              // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTimeoutItem_ReturnValue;                // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x03A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTimeoutTargetImagineRecepi_ReturnValue; // 0x03A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue; // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x03A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x03A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A04[0x1];                                     // 0x03A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_2;                           // 0x03A8(0x0028)()
};
static_assert(alignof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn) == 0x000008, "Wrong alignment on RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn");
static_assert(sizeof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn) == 0x0003D0, "Wrong size on RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, EntryPoint) == 0x000000, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, Temp_bool_Variable) == 0x000014, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_MakeLiteralByte_ReturnValue) == 0x000028, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000029, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00002A, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00002B, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_CustomEvent_ImagineRecpiData) == 0x000030, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_CustomEvent_ImagineRecpiData' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetMasterDataManager_IsValid) == 0x000068, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetAdventurerRankText_ReturnValue) == 0x000078, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetAdventurerRankText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x000090, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_FindMasterImagine_ReturnValue) == 0x000098, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Conv_IntToText_ReturnValue) == 0x000148, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Conv_StringToName_ReturnValue) == 0x000160, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetMasterImagineText_ReturnValue) == 0x000168, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetDataTableRowFromName_OutRow) == 0x000178, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001C0, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Conv_StringToText_ReturnValue) == 0x0001C8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_SwitchEnum_CmpSuccess) == 0x0001E0, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetImagineArtsTypeName_OutTypeName) == 0x0001E8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetImagineArtsTypeName_OutTypeName' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001F8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_CustomEvent_IsCrafted) == 0x000210, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_CustomEvent_IsCrafted' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetAdventurerRank_ReturnValue) == 0x000214, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Not_PreBool_ReturnValue) == 0x000218, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Less_IntInt_ReturnValue) == 0x000219, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetSBPlayerController_ReturnValue) == 0x000220, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_IsValid_ReturnValue) == 0x000228, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_IsValid_ReturnValue_1) == 0x000229, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetImaginLabComp_ReturnValue) == 0x000230, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetImaginLabComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_CustomEvent_RecepiId) == 0x000238, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_CustomEvent_RecepiId' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_IsValid_ReturnValue_2) == 0x00023C, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_FindImagineRecepi_IsExist) == 0x00023D, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_FindImagineRecepi_IsExist' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_FindImagineRecepi_ReturnValue) == 0x000240, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_FindImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_IsValid_ReturnValue_3) == 0x000248, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, Temp_bool_Variable_1) == 0x000249, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Conv_IntToString_ReturnValue) == 0x000250, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000260, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Concat_StrStr_ReturnValue) == 0x000268, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000278, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetPlayerId_ReturnValue) == 0x000288, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetCharacterId_ReturnValue) == 0x000298, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0002A8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_RegistReadedID_bIsValid) == 0x0002B8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_RegistReadedID_bIsValid' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_MakeLiteralName_ReturnValue) == 0x0002BC, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_CustomEvent_Sender) == 0x0002C8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_CustomEvent_Param) == 0x0002D0, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_GetCharacterId_ReturnValue_1) == 0x0002D8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_MakeStruct_SBWishListData) == 0x0002E8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_MakeStruct_SBWishListData' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_IsRegistedWishlist_ReturnValue) == 0x0002F4, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_IsRegistedWishlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_MakeStruct_SlateColor) == 0x0002F8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_Select_Default) == 0x000320, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_MakeStruct_SlateColor_1) == 0x000328, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_MakeStruct_SlateColor_2) == 0x000350, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_MakeStruct_SlateColor_3) == 0x000378, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, Temp_bool_Variable_2) == 0x0003A0, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_IsTimeoutItem_ReturnValue) == 0x0003A1, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_IsTimeoutItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_Select_Default_1) == 0x0003A2, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_IsTimeoutTargetImagineRecepi_ReturnValue) == 0x0003A3, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_IsTimeoutTargetImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue) == 0x0003A4, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_BooleanOR_ReturnValue) == 0x0003A5, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, CallFunc_BooleanOR_ReturnValue_1) == 0x0003A6, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn, K2Node_Select_Default_2) == 0x0003A8, "Member 'RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn::K2Node_Select_Default_2' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.OnUpdateReward
// 0x0010 (0x0010 - 0x0000)
struct RecepiListItemBtn_C_OnUpdateReward final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RecepiListItemBtn_C_OnUpdateReward) == 0x000008, "Wrong alignment on RecepiListItemBtn_C_OnUpdateReward");
static_assert(sizeof(RecepiListItemBtn_C_OnUpdateReward) == 0x000010, "Wrong size on RecepiListItemBtn_C_OnUpdateReward");
static_assert(offsetof(RecepiListItemBtn_C_OnUpdateReward, Sender) == 0x000000, "Member 'RecepiListItemBtn_C_OnUpdateReward::Sender' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_OnUpdateReward, Param) == 0x000008, "Member 'RecepiListItemBtn_C_OnUpdateReward::Param' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.OnRecepiUpdated
// 0x0004 (0x0004 - 0x0000)
struct RecepiListItemBtn_C_OnRecepiUpdated final
{
public:
	int32                                         RecepiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RecepiListItemBtn_C_OnRecepiUpdated) == 0x000004, "Wrong alignment on RecepiListItemBtn_C_OnRecepiUpdated");
static_assert(sizeof(RecepiListItemBtn_C_OnRecepiUpdated) == 0x000004, "Wrong size on RecepiListItemBtn_C_OnRecepiUpdated");
static_assert(offsetof(RecepiListItemBtn_C_OnRecepiUpdated, RecepiId) == 0x000000, "Member 'RecepiListItemBtn_C_OnRecepiUpdated::RecepiId' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.Set Crafted
// 0x0001 (0x0001 - 0x0000)
struct RecepiListItemBtn_C_Set_Crafted final
{
public:
	bool                                          Param_IsCrafted;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RecepiListItemBtn_C_Set_Crafted) == 0x000001, "Wrong alignment on RecepiListItemBtn_C_Set_Crafted");
static_assert(sizeof(RecepiListItemBtn_C_Set_Crafted) == 0x000001, "Wrong size on RecepiListItemBtn_C_Set_Crafted");
static_assert(offsetof(RecepiListItemBtn_C_Set_Crafted, Param_IsCrafted) == 0x000000, "Member 'RecepiListItemBtn_C_Set_Crafted::Param_IsCrafted' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.Set RecepiData
// 0x0038 (0x0038 - 0x0000)
struct RecepiListItemBtn_C_Set_RecepiData final
{
public:
	struct FMasterImagineRecepi                   Param_ImagineRecpiData;                            // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(RecepiListItemBtn_C_Set_RecepiData) == 0x000008, "Wrong alignment on RecepiListItemBtn_C_Set_RecepiData");
static_assert(sizeof(RecepiListItemBtn_C_Set_RecepiData) == 0x000038, "Wrong size on RecepiListItemBtn_C_Set_RecepiData");
static_assert(offsetof(RecepiListItemBtn_C_Set_RecepiData, Param_ImagineRecpiData) == 0x000000, "Member 'RecepiListItemBtn_C_Set_RecepiData::Param_ImagineRecpiData' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.GetRecepi
// 0x0040 (0x0040 - 0x0000)
struct RecepiListItemBtn_C_GetRecepi final
{
public:
	struct FMasterImagineRecepi                   Master;                                            // 0x0000(0x0038)(Parm, OutParm)
	bool                                          bIsCrafted;                                        // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RecepiListItemBtn_C_GetRecepi) == 0x000008, "Wrong alignment on RecepiListItemBtn_C_GetRecepi");
static_assert(sizeof(RecepiListItemBtn_C_GetRecepi) == 0x000040, "Wrong size on RecepiListItemBtn_C_GetRecepi");
static_assert(offsetof(RecepiListItemBtn_C_GetRecepi, Master) == 0x000000, "Member 'RecepiListItemBtn_C_GetRecepi::Master' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_GetRecepi, bIsCrafted) == 0x000038, "Member 'RecepiListItemBtn_C_GetRecepi::bIsCrafted' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.Bind Wishlist Update
// 0x0020 (0x0020 - 0x0000)
struct RecepiListItemBtn_C_Bind_Wishlist_Update final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A05[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RecepiListItemBtn_C_Bind_Wishlist_Update) == 0x000008, "Wrong alignment on RecepiListItemBtn_C_Bind_Wishlist_Update");
static_assert(sizeof(RecepiListItemBtn_C_Bind_Wishlist_Update) == 0x000020, "Wrong size on RecepiListItemBtn_C_Bind_Wishlist_Update");
static_assert(offsetof(RecepiListItemBtn_C_Bind_Wishlist_Update, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'RecepiListItemBtn_C_Bind_Wishlist_Update::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_Bind_Wishlist_Update, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'RecepiListItemBtn_C_Bind_Wishlist_Update::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_Bind_Wishlist_Update, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'RecepiListItemBtn_C_Bind_Wishlist_Update::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.Unbind Wishlist Update
// 0x0020 (0x0020 - 0x0000)
struct RecepiListItemBtn_C_Unbind_Wishlist_Update final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A06[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RecepiListItemBtn_C_Unbind_Wishlist_Update) == 0x000008, "Wrong alignment on RecepiListItemBtn_C_Unbind_Wishlist_Update");
static_assert(sizeof(RecepiListItemBtn_C_Unbind_Wishlist_Update) == 0x000020, "Wrong size on RecepiListItemBtn_C_Unbind_Wishlist_Update");
static_assert(offsetof(RecepiListItemBtn_C_Unbind_Wishlist_Update, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'RecepiListItemBtn_C_Unbind_Wishlist_Update::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_Unbind_Wishlist_Update, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'RecepiListItemBtn_C_Unbind_Wishlist_Update::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_Unbind_Wishlist_Update, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'RecepiListItemBtn_C_Unbind_Wishlist_Update::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.SetSelectedVisible
// 0x0005 (0x0005 - 0x0000)
struct RecepiListItemBtn_C_SetSelectedVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RecepiListItemBtn_C_SetSelectedVisible) == 0x000001, "Wrong alignment on RecepiListItemBtn_C_SetSelectedVisible");
static_assert(sizeof(RecepiListItemBtn_C_SetSelectedVisible) == 0x000005, "Wrong size on RecepiListItemBtn_C_SetSelectedVisible");
static_assert(offsetof(RecepiListItemBtn_C_SetSelectedVisible, bVisible) == 0x000000, "Member 'RecepiListItemBtn_C_SetSelectedVisible::bVisible' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_SetSelectedVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'RecepiListItemBtn_C_SetSelectedVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_SetSelectedVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'RecepiListItemBtn_C_SetSelectedVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_SetSelectedVisible, Temp_bool_Variable) == 0x000003, "Member 'RecepiListItemBtn_C_SetSelectedVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_SetSelectedVisible, K2Node_Select_Default) == 0x000004, "Member 'RecepiListItemBtn_C_SetSelectedVisible::K2Node_Select_Default' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateTimeLimit
// 0x0030 (0x0030 - 0x0000)
struct RecepiListItemBtn_C_UpdateTimeLimit final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RecepiListItemBtn_C_UpdateTimeLimit) == 0x000008, "Wrong alignment on RecepiListItemBtn_C_UpdateTimeLimit");
static_assert(sizeof(RecepiListItemBtn_C_UpdateTimeLimit) == 0x000030, "Wrong size on RecepiListItemBtn_C_UpdateTimeLimit");
static_assert(offsetof(RecepiListItemBtn_C_UpdateTimeLimit, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'RecepiListItemBtn_C_UpdateTimeLimit::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_UpdateTimeLimit, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'RecepiListItemBtn_C_UpdateTimeLimit::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_UpdateTimeLimit, CallFunc_IsEmpty_ReturnValue) == 0x000028, "Member 'RecepiListItemBtn_C_UpdateTimeLimit::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateNewMark
// 0x0040 (0x0040 - 0x0000)
struct RecepiListItemBtn_C_UpdateNewMark final
{
public:
	int32                                         RecepiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A07[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadedID_IsValid;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedID_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RecepiListItemBtn_C_UpdateNewMark) == 0x000008, "Wrong alignment on RecepiListItemBtn_C_UpdateNewMark");
static_assert(sizeof(RecepiListItemBtn_C_UpdateNewMark) == 0x000040, "Wrong size on RecepiListItemBtn_C_UpdateNewMark");
static_assert(offsetof(RecepiListItemBtn_C_UpdateNewMark, RecepiId) == 0x000000, "Member 'RecepiListItemBtn_C_UpdateNewMark::RecepiId' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_UpdateNewMark, CallFunc_GetPlayerId_ReturnValue) == 0x000008, "Member 'RecepiListItemBtn_C_UpdateNewMark::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_UpdateNewMark, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'RecepiListItemBtn_C_UpdateNewMark::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_UpdateNewMark, CallFunc_GetCharacterId_ReturnValue) == 0x000028, "Member 'RecepiListItemBtn_C_UpdateNewMark::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_UpdateNewMark, CallFunc_IsReadedID_IsValid) == 0x000038, "Member 'RecepiListItemBtn_C_UpdateNewMark::CallFunc_IsReadedID_IsValid' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_UpdateNewMark, CallFunc_IsReadedID_ReturnValue) == 0x000039, "Member 'RecepiListItemBtn_C_UpdateNewMark::CallFunc_IsReadedID_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecepiListItemBtn_C_UpdateNewMark, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'RecepiListItemBtn_C_UpdateNewMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

