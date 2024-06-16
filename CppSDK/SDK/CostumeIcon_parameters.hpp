#pragma once

 

// Package: CostumeIcon

#include "Basic.hpp"

#include "CharaParts_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CostumeIcon.CostumeIcon_C.OnClickedCostumeIcon__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature final
{
public:
	int32                                         OutItemIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature) == 0x000008, "Wrong alignment on CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature");
static_assert(sizeof(CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature) == 0x000018, "Wrong size on CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature");
static_assert(offsetof(CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature, OutItemIndex) == 0x000000, "Member 'CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature::OutItemIndex' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature, OutUniqueId) == 0x000008, "Member 'CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function CostumeIcon.CostumeIcon_C.ExecuteUbergraph_CostumeIcon
// 0x00D0 (0x00D0 - 0x0000)
struct CostumeIcon_C_ExecuteUbergraph_CostumeIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_534C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FCostumeData                           K2Node_CustomEvent_CostumeData;                    // 0x0020(0x0020)(NoDestructor)
	int32                                         K2Node_CustomEvent_InItemIndex;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InUniqueId;                     // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_MountImagineId;                 // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender;                 // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon) == 0x000008, "Wrong alignment on CostumeIcon_C_ExecuteUbergraph_CostumeIcon");
static_assert(sizeof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon) == 0x0000D0, "Wrong size on CostumeIcon_C_ExecuteUbergraph_CostumeIcon");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, EntryPoint) == 0x000000, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, K2Node_CustomEvent_ItemIndex) == 0x000008, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, K2Node_CustomEvent_UniqueId) == 0x000010, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, K2Node_CustomEvent_CostumeData) == 0x000020, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::K2Node_CustomEvent_CostumeData' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, K2Node_CustomEvent_InItemIndex) == 0x000040, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::K2Node_CustomEvent_InItemIndex' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, K2Node_CustomEvent_InUniqueId) == 0x000048, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::K2Node_CustomEvent_InUniqueId' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, K2Node_CustomEvent_MountImagineId) == 0x000058, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::K2Node_CustomEvent_MountImagineId' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, K2Node_ComponentBoundEvent_Sender) == 0x000068, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000080, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, CallFunc_Concat_StrStr_ReturnValue) == 0x000090, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A0, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000B0, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_ExecuteUbergraph_CostumeIcon, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000C0, "Member 'CostumeIcon_C_ExecuteUbergraph_CostumeIcon::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");

// Function CostumeIcon.CostumeIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CostumeIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CostumeIcon_C_PreConstruct) == 0x000001, "Wrong alignment on CostumeIcon_C_PreConstruct");
static_assert(sizeof(CostumeIcon_C_PreConstruct) == 0x000001, "Wrong size on CostumeIcon_C_PreConstruct");
static_assert(offsetof(CostumeIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CostumeIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CostumeIcon.CostumeIcon_C.BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CostumeIcon_C_BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CostumeIcon_C_BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on CostumeIcon_C_BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(CostumeIcon_C_BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong size on CostumeIcon_C_BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(CostumeIcon_C_BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'CostumeIcon_C_BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function CostumeIcon.CostumeIcon_C.SetMountImagineData
// 0x0028 (0x0028 - 0x0000)
struct CostumeIcon_C_SetMountImagineData final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Param_MountImagineId;                              // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CostumeIcon_C_SetMountImagineData) == 0x000008, "Wrong alignment on CostumeIcon_C_SetMountImagineData");
static_assert(sizeof(CostumeIcon_C_SetMountImagineData) == 0x000028, "Wrong size on CostumeIcon_C_SetMountImagineData");
static_assert(offsetof(CostumeIcon_C_SetMountImagineData, InItemIndex) == 0x000000, "Member 'CostumeIcon_C_SetMountImagineData::InItemIndex' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetMountImagineData, InUniqueId) == 0x000008, "Member 'CostumeIcon_C_SetMountImagineData::InUniqueId' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetMountImagineData, Param_MountImagineId) == 0x000018, "Member 'CostumeIcon_C_SetMountImagineData::Param_MountImagineId' has a wrong offset!");

// Function CostumeIcon.CostumeIcon_C.SetCostumeData
// 0x0038 (0x0038 - 0x0000)
struct CostumeIcon_C_SetCostumeData final
{
public:
	int32                                         Param_ItemIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5350[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_UniqueId;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FCostumeData                           CostumeData;                                       // 0x0018(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CostumeIcon_C_SetCostumeData) == 0x000008, "Wrong alignment on CostumeIcon_C_SetCostumeData");
static_assert(sizeof(CostumeIcon_C_SetCostumeData) == 0x000038, "Wrong size on CostumeIcon_C_SetCostumeData");
static_assert(offsetof(CostumeIcon_C_SetCostumeData, Param_ItemIndex) == 0x000000, "Member 'CostumeIcon_C_SetCostumeData::Param_ItemIndex' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetCostumeData, Param_UniqueId) == 0x000008, "Member 'CostumeIcon_C_SetCostumeData::Param_UniqueId' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetCostumeData, CostumeData) == 0x000018, "Member 'CostumeIcon_C_SetCostumeData::CostumeData' has a wrong offset!");

// Function CostumeIcon.CostumeIcon_C.SetColorIconBage
// 0x0190 (0x0190 - 0x0000)
struct CostumeIcon_C_SetColorIconBage final
{
public:
	struct FCostumeData                           CostumeData;                                       // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         LocalCostumeMaterialId;                            // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LocalCostumeColor;                                 // 0x0024(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5351[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       NewLocalVar_0;                                     // 0x0038(0x0088)(Edit, BlueprintVisible)
	class UDataTable*                             TmpCharaPartsDB;                                   // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_1;                              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_2;                              // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_3;                              // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_4;                              // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               K2Node_Select_Default;                             // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x00CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5352[0x2];                                     // 0x00D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x00D8(0x0088)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5353[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0164(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid; // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation; // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5354[0x2];                                     // 0x016E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsData*                        CallFunc_GetPartsData_ReturnValue;                 // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetPartsMaterialColor_ReturnValue;        // 0x0178(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CostumeIcon_C_SetColorIconBage) == 0x000008, "Wrong alignment on CostumeIcon_C_SetColorIconBage");
static_assert(sizeof(CostumeIcon_C_SetColorIconBage) == 0x000190, "Wrong size on CostumeIcon_C_SetColorIconBage");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CostumeData) == 0x000000, "Member 'CostumeIcon_C_SetColorIconBage::CostumeData' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, LocalCostumeMaterialId) == 0x000020, "Member 'CostumeIcon_C_SetColorIconBage::LocalCostumeMaterialId' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, LocalCostumeColor) == 0x000024, "Member 'CostumeIcon_C_SetColorIconBage::LocalCostumeColor' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, NewLocalVar_0) == 0x000038, "Member 'CostumeIcon_C_SetColorIconBage::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, TmpCharaPartsDB) == 0x0000C0, "Member 'CostumeIcon_C_SetColorIconBage::TmpCharaPartsDB' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, Temp_byte_Variable) == 0x0000C8, "Member 'CostumeIcon_C_SetColorIconBage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, Temp_byte_Variable_1) == 0x0000C9, "Member 'CostumeIcon_C_SetColorIconBage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, Temp_byte_Variable_2) == 0x0000CA, "Member 'CostumeIcon_C_SetColorIconBage::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, Temp_byte_Variable_3) == 0x0000CB, "Member 'CostumeIcon_C_SetColorIconBage::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, Temp_byte_Variable_4) == 0x0000CC, "Member 'CostumeIcon_C_SetColorIconBage::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, K2Node_Select_Default) == 0x0000CD, "Member 'CostumeIcon_C_SetColorIconBage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x0000CE, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_EqualEqual_FloatFloat_ReturnValue_1) == 0x0000CF, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_EqualEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_EqualEqual_FloatFloat_ReturnValue_2) == 0x0000D0, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_EqualEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_BooleanAND_ReturnValue) == 0x0000D1, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D2, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_Not_PreBool_ReturnValue) == 0x0000D3, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D4, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_FindCostumeMaster_bIsValid) == 0x0000D5, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_FindCostumeMaster_CostumeMaster) == 0x0000D8, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, K2Node_SwitchEnum_CmpSuccess) == 0x000160, "Member 'CostumeIcon_C_SetColorIconBage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_Conv_StringToName_ReturnValue) == 0x000164, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid) == 0x00016C, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation) == 0x00016D, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_GetPartsData_ReturnValue) == 0x000170, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_GetPartsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_GetPartsMaterialColor_ReturnValue) == 0x000178, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_GetPartsMaterialColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CostumeIcon_C_SetColorIconBage, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'CostumeIcon_C_SetColorIconBage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

