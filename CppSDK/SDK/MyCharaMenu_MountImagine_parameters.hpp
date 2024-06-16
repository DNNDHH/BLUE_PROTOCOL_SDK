#pragma once

 

// Package: MyCharaMenu_MountImagine

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InventoryItemData_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.ExecuteUbergraph_MyCharaMenu_MountImagine
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C3E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_ComponentBoundEvent_SelectItem;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine) == 0x000008, "Wrong alignment on MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine");
static_assert(sizeof(MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine) == 0x000010, "Wrong size on MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine");
static_assert(offsetof(MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine, EntryPoint) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine, K2Node_ComponentBoundEvent_SelectItem) == 0x000008, "Member 'MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_MountImagine_C_BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_MountImagine_C_BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature");
static_assert(sizeof(MyCharaMenu_MountImagine_C_BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature) == 0x000008, "Wrong size on MyCharaMenu_MountImagine_C_BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature");
static_assert(offsetof(MyCharaMenu_MountImagine_C_BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature, SelectItem) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature::SelectItem' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.Setup
// 0x0258 (0x0258 - 0x0000)
struct MyCharaMenu_MountImagine_C_Setup final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0010(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          LocalIsUsed;                                       // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C3F[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  LocalMountImagineMasterData;                       // 0x0078(0x0070)(Edit, BlueprintVisible)
	struct FSBCharacterMountImagineData           LocalMountImagineData;                             // 0x00E8(0x0028)(Edit, BlueprintVisible)
	float                                         CurrentST;                                         // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHP;                                             // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetInventoryMountImagine_OutEnabled;      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C40[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterMountImagineData           CallFunc_GetInventoryMountImagine_OutMountImagineData; // 0x0120(0x0028)()
	bool                                          CallFunc_GetInventoryMountImagine_OutIsUsed;       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C41[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterMountImagineText_ReturnValue;    // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0160(0x0018)()
	bool                                          CallFunc_FindMountImagineMaster_bIsValid;          // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C42[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_FindMountImagineMaster_MountImagineMaster; // 0x0180(0x0070)()
	struct FInventoryItemData                     CallFunc_CreateInventoryData_OutInventryItemData;  // 0x01F0(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_OutIsEnable;          // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_Setup) == 0x000008, "Wrong alignment on MyCharaMenu_MountImagine_C_Setup");
static_assert(sizeof(MyCharaMenu_MountImagine_C_Setup) == 0x000258, "Wrong size on MyCharaMenu_MountImagine_C_Setup");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, InUniqueId) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_Setup::InUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, LocalInventoryItemData) == 0x000010, "Member 'MyCharaMenu_MountImagine_C_Setup::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, LocalIsUsed) == 0x000070, "Member 'MyCharaMenu_MountImagine_C_Setup::LocalIsUsed' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, LocalMountImagineMasterData) == 0x000078, "Member 'MyCharaMenu_MountImagine_C_Setup::LocalMountImagineMasterData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, LocalMountImagineData) == 0x0000E8, "Member 'MyCharaMenu_MountImagine_C_Setup::LocalMountImagineData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CurrentST) == 0x000110, "Member 'MyCharaMenu_MountImagine_C_Setup::CurrentST' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, MaxHP) == 0x000114, "Member 'MyCharaMenu_MountImagine_C_Setup::MaxHP' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_GetInventoryMountImagine_OutEnabled) == 0x000118, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_GetInventoryMountImagine_OutEnabled' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_GetInventoryMountImagine_OutMountImagineData) == 0x000120, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_GetInventoryMountImagine_OutMountImagineData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_GetInventoryMountImagine_OutIsUsed) == 0x000148, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_GetInventoryMountImagine_OutIsUsed' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000149, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_GetMasterMountImagineText_ReturnValue) == 0x000150, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_GetMasterMountImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000160, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_FindMountImagineMaster_bIsValid) == 0x000178, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_FindMountImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_FindMountImagineMaster_MountImagineMaster) == 0x000180, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_FindMountImagineMaster_MountImagineMaster' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_CreateInventoryData_OutInventryItemData) == 0x0001F0, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_CreateInventoryData_OutInventryItemData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_CreateInventoryData_OutIsEnable) == 0x000250, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_CreateInventoryData_OutIsEnable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000251, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000252, "Member 'MyCharaMenu_MountImagine_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.GetInventoryMountImagine
// 0x02C8 (0x02C8 - 0x0000)
struct MyCharaMenu_MountImagine_C_GetInventoryMountImagine final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          OutEnabled;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C43[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterMountImagineData           OutMountImagineData;                               // 0x0018(0x0028)(Parm, OutParm)
	bool                                          OutIsUsed;                                         // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C44[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalUsedBlockNum;                                 // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalUniqueId;                                     // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0058(0x0118)(Edit, BlueprintVisible)
	class USBOwnItemListContainer*                LocalEquipmentBag;                                 // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C45[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_BP_GetItem_ReturnValue;                   // 0x0188(0x0118)(ConstParm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C46[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C47[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine) == 0x000008, "Wrong alignment on MyCharaMenu_MountImagine_C_GetInventoryMountImagine");
static_assert(sizeof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine) == 0x0002C8, "Wrong size on MyCharaMenu_MountImagine_C_GetInventoryMountImagine");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, InUniqueId) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::InUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, OutEnabled) == 0x000010, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::OutEnabled' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, OutMountImagineData) == 0x000018, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::OutMountImagineData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, OutIsUsed) == 0x000040, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::OutIsUsed' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, LocalUsedBlockNum) == 0x000044, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::LocalUsedBlockNum' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, LocalUniqueId) == 0x000048, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, LocalOwnItemInfo) == 0x000058, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, LocalEquipmentBag) == 0x000170, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::LocalEquipmentBag' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, Temp_int_Variable) == 0x000178, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_GetUseBlockNum_ReturnValue) == 0x00017C, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000180, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, Temp_int_Variable_1) == 0x000184, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_BP_GetItem_ReturnValue) == 0x000188, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_BP_GetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_Subtract_IntInt_ReturnValue) == 0x0002A0, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0002A4, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_Add_IntInt_ReturnValue) == 0x0002A8, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_GetNetworkDataCache_IsValid) == 0x0002AC, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0002B0, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_GetEquipmentBag_ReturnValue) == 0x0002B8, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_GetInventoryMountImagine, CallFunc_IsValid_ReturnValue) == 0x0002C0, "Member 'MyCharaMenu_MountImagine_C_GetInventoryMountImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.CreateInventoryData
// 0x01A8 (0x01A8 - 0x0000)
struct MyCharaMenu_MountImagine_C_CreateInventoryData final
{
public:
	struct FSBCharacterMountImagineData           InMountImagine;                                    // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInventoryItemData                     OutInventryItemData;                               // 0x0028(0x0060)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          OutIsEnable;                                       // 0x0088(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C48[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalImagineId;                                    // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalUniqueId;                                     // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMountImagineMaster_bIsValid;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C49[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_FindMountImagineMaster_MountImagineMaster; // 0x00A8(0x0070)()
	class FString                                 CallFunc_GetMasterMountImagineText_ReturnValue;    // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0140(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_CreateInventoryData) == 0x000008, "Wrong alignment on MyCharaMenu_MountImagine_C_CreateInventoryData");
static_assert(sizeof(MyCharaMenu_MountImagine_C_CreateInventoryData) == 0x0001A8, "Wrong size on MyCharaMenu_MountImagine_C_CreateInventoryData");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, InMountImagine) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::InMountImagine' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, OutInventryItemData) == 0x000028, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::OutInventryItemData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, OutIsEnable) == 0x000088, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::OutIsEnable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, LocalImagineId) == 0x00008C, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::LocalImagineId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, LocalUniqueId) == 0x000090, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, CallFunc_FindMountImagineMaster_bIsValid) == 0x0000A0, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::CallFunc_FindMountImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, CallFunc_FindMountImagineMaster_MountImagineMaster) == 0x0000A8, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::CallFunc_FindMountImagineMaster_MountImagineMaster' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, CallFunc_GetMasterMountImagineText_ReturnValue) == 0x000118, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::CallFunc_GetMasterMountImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, K2Node_MakeStruct_InventoryItemData) == 0x000140, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_CreateInventoryData, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0001A0, "Member 'MyCharaMenu_MountImagine_C_CreateInventoryData::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetIsImagineUsed
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_MountImagine_C_SetIsImagineUsed final
{
public:
	bool                                          InIsUsed;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_SetIsImagineUsed) == 0x000001, "Wrong alignment on MyCharaMenu_MountImagine_C_SetIsImagineUsed");
static_assert(sizeof(MyCharaMenu_MountImagine_C_SetIsImagineUsed) == 0x000002, "Wrong size on MyCharaMenu_MountImagine_C_SetIsImagineUsed");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetIsImagineUsed, InIsUsed) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_SetIsImagineUsed::InIsUsed' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetIsImagineUsed, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MyCharaMenu_MountImagine_C_SetIsImagineUsed::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetImagineUsedIconVisibility
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility");
static_assert(sizeof(MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility) == 0x000006, "Wrong size on MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetExpiryDateTimeVisibility
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility");
static_assert(sizeof(MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility) == 0x000006, "Wrong size on MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetItemIconVisibility
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_MountImagine_C_SetItemIconVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_SetItemIconVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_MountImagine_C_SetItemIconVisibility");
static_assert(sizeof(MyCharaMenu_MountImagine_C_SetItemIconVisibility) == 0x000006, "Wrong size on MyCharaMenu_MountImagine_C_SetItemIconVisibility");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetItemIconVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_SetItemIconVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetItemIconVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_MountImagine_C_SetItemIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetItemIconVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharaMenu_MountImagine_C_SetItemIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetItemIconVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_MountImagine_C_SetItemIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetItemIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_MountImagine_C_SetItemIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetItemIconVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_MountImagine_C_SetItemIconVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetIMountImagineProfileVisibility
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility");
static_assert(sizeof(MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility) == 0x000006, "Wrong size on MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetBlankIconVisibility
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_MountImagine_C_SetBlankIconVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_SetBlankIconVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_MountImagine_C_SetBlankIconVisibility");
static_assert(sizeof(MyCharaMenu_MountImagine_C_SetBlankIconVisibility) == 0x000006, "Wrong size on MyCharaMenu_MountImagine_C_SetBlankIconVisibility");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetBlankIconVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_SetBlankIconVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetBlankIconVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_MountImagine_C_SetBlankIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetBlankIconVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharaMenu_MountImagine_C_SetBlankIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetBlankIconVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_MountImagine_C_SetBlankIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetBlankIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_MountImagine_C_SetBlankIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetBlankIconVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_MountImagine_C_SetBlankIconVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetNoEquipVisibility
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_MountImagine_C_SetNoEquipVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_MountImagine_C_SetNoEquipVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_MountImagine_C_SetNoEquipVisibility");
static_assert(sizeof(MyCharaMenu_MountImagine_C_SetNoEquipVisibility) == 0x000006, "Wrong size on MyCharaMenu_MountImagine_C_SetNoEquipVisibility");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetNoEquipVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_MountImagine_C_SetNoEquipVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetNoEquipVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_MountImagine_C_SetNoEquipVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetNoEquipVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharaMenu_MountImagine_C_SetNoEquipVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetNoEquipVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_MountImagine_C_SetNoEquipVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetNoEquipVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_MountImagine_C_SetNoEquipVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_MountImagine_C_SetNoEquipVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_MountImagine_C_SetNoEquipVisibility::K2Node_Select_Default' has a wrong offset!");

}

