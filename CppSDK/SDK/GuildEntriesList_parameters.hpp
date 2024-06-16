#pragma once

 

// Package: GuildEntriesList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildEntriesList.GuildEntriesList_C.OnClickedGuildEntry__DelegateSignature
// 0x00E0 (0x00E0 - 0x0000)
struct GuildEntriesList_C_OnClickedGuildEntry__DelegateSignature final
{
public:
	struct FGuildEntryData                        GuildEntryData;                                    // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildEntriesList_C_OnClickedGuildEntry__DelegateSignature) == 0x000008, "Wrong alignment on GuildEntriesList_C_OnClickedGuildEntry__DelegateSignature");
static_assert(sizeof(GuildEntriesList_C_OnClickedGuildEntry__DelegateSignature) == 0x0000E0, "Wrong size on GuildEntriesList_C_OnClickedGuildEntry__DelegateSignature");
static_assert(offsetof(GuildEntriesList_C_OnClickedGuildEntry__DelegateSignature, GuildEntryData) == 0x000000, "Member 'GuildEntriesList_C_OnClickedGuildEntry__DelegateSignature::GuildEntryData' has a wrong offset!");

// Function GuildEntriesList.GuildEntriesList_C.ExecuteUbergraph_GuildEntriesList
// 0x0608 (0x0608 - 0x0000)
struct GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AED[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildEntryItem_C*                      CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AEE[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGuildEntryData& GuildEntry, class UGuildEntryItem_C* SelectedBtn)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AEF[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AF0[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        K2Node_CustomEvent_GuildEntry;                     // 0x0060(0x00E0)()
	class UGuildEntryItem_C*                      K2Node_CustomEvent_SelectedBtn;                    // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x0148(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AF1[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AF2[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildEntryItem_C*                      CallFunc_Create_ReturnValue_1;                     // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildEntryData                        K2Node_MakeStruct_GuildEntryData;                  // 0x0168(0x00E0)()
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_MultiGate_FirstRun;                         // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AF3[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_MultiGate_Data;                             // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_MultiGate_ScratchBool;                      // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AF4[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_MultiGate_ScratchIndex;                     // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0268(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AF5[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0270(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AF6[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0280(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AF7[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0288(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue_1;             // 0x0298(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildEntryItem_C*                      K2Node_DynamicCast_AsGuild_Entry_Item;             // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AF8[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildEntryItem_C*                      K2Node_DynamicCast_AsGuild_Entry_Item_1;           // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AF9[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AFA[0x2];                                     // 0x02DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x02E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsAccept;                       // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AFB[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InEntryId;                      // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AFC[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0300(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0308(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData_CS>             CallFunc_GetPlayerInviteList_CS_ReturnValue;       // 0x0310(0x0010)(ReferenceParm)
	TArray<struct FGuildEntryData_CS>             CallFunc_GetPlayerEntryList_CS_ReturnValue;        // 0x0320(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerEntryList_ReturnValue;           // 0x0338(0x0010)(ReferenceParm)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerInviteList_ReturnValue;          // 0x0348(0x0010)(ReferenceParm)
	struct FGuildEntryData                        CallFunc_Array_Get_Item_2;                         // 0x0358(0x00E0)()
	struct FGuildEntryData                        CallFunc_Array_Get_Item_3;                         // 0x0438(0x00E0)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AFD[0x3];                                     // 0x0519(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x051C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0520(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0524(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0525(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0526(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AFE[0x1];                                     // 0x0527(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x052C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x052D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AFF[0x2];                                     // 0x052E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x0530(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0534(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B00[0x2];                                     // 0x053A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x053C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B01[0x2];                                     // 0x0542(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0544(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6B02[0x4];                                     // 0x0554(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x0558(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildEntryEmptyItem_C*                 CallFunc_Create_ReturnValue_2;                     // 0x0560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_InviteData_ReturnValue;           // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_GetSendedEntries_ReturnValue;     // 0x0569(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_InviteData_ReturnValue_1;         // 0x056A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x056B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B03[0x4];                                     // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildEntryEmptyItem_C*                 CallFunc_Create_ReturnValue_3;                     // 0x0570(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_3;                   // 0x0578(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, bool IsAccept, const class FString& InEntryId)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0580(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x0590(0x0010)(ZeroConstructor, NoDestructor)
	class UGuildEntryItem_C*                      CallFunc_Create_ReturnValue_4;                     // 0x05A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_4;                   // 0x05A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_5;                   // 0x05B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_5;            // 0x05B8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_6;            // 0x05C8(0x0010)(ZeroConstructor, NoDestructor)
	struct FGuildEntryData_CS                     K2Node_MakeStruct_GuildEntryData_CS;               // 0x05D8(0x0030)()
};
static_assert(alignof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList) == 0x000008, "Wrong alignment on GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList");
static_assert(sizeof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList) == 0x000608, "Wrong size on GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, EntryPoint) == 0x000000, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_int_Array_Index_Variable) == 0x000028, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_bool_Has_Been_Initd_Variable) == 0x000030, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_int_Array_Index_Variable_2) == 0x00004C, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_bool_IsClosed_Variable) == 0x000050, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_Event_IsDesignTime) == 0x000051, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_int_Loop_Counter_Variable_2) == 0x000054, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000058, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CustomEvent_GuildEntry) == 0x000060, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CustomEvent_GuildEntry' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CustomEvent_SelectedBtn) == 0x000140, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CustomEvent_SelectedBtn' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CustomEvent_RetCode_4) == 0x000148, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00014C, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_int_Array_Index_Variable_3) == 0x000150, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Create_ReturnValue_1) == 0x000158, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_AddChild_ReturnValue) == 0x000160, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_MakeStruct_GuildEntryData) == 0x000168, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_MakeStruct_GuildEntryData' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_AddChild_ReturnValue_1) == 0x000248, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_AddChild_ReturnValue_2) == 0x000250, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_MultiGate_FirstRun) == 0x000258, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_MultiGate_FirstRun' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_MultiGate_Data) == 0x00025C, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_MultiGate_Data' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_MultiGate_ScratchBool) == 0x000260, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_MultiGate_ScratchBool' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_MultiGate_ScratchIndex) == 0x000264, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_MultiGate_ScratchIndex' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CustomEvent_RetCode_3) == 0x000268, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00026C, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CustomEvent_RetCode_2) == 0x000270, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000274, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_int_Loop_Counter_Variable_3) == 0x000278, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Add_IntInt_ReturnValue_3) == 0x00027C, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CustomEvent_RetCode_1) == 0x000280, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000284, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_GetAllChildren_ReturnValue) == 0x000288, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_GetAllChildren_ReturnValue_1) == 0x000298, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_GetAllChildren_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Get_Item) == 0x0002A8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Get_Item_1) == 0x0002B0, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_DynamicCast_AsGuild_Entry_Item) == 0x0002B8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_DynamicCast_AsGuild_Entry_Item' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_DynamicCast_bSuccess) == 0x0002C0, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_DynamicCast_AsGuild_Entry_Item_1) == 0x0002C8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_DynamicCast_AsGuild_Entry_Item_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_DynamicCast_bSuccess_1) == 0x0002D0, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Length_ReturnValue) == 0x0002D4, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Length_ReturnValue_1) == 0x0002D8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Less_IntInt_ReturnValue) == 0x0002DC, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002DD, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CustomEvent_RetCode) == 0x0002E0, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CustomEvent_IsAccept) == 0x0002E4, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CustomEvent_IsAccept' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CustomEvent_InEntryId) == 0x0002E8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CustomEvent_InEntryId' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0002F8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_GetGuildComp_ReturnValue) == 0x000300, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_GetGuildComp_ReturnValue_1) == 0x000308, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_GetPlayerInviteList_CS_ReturnValue) == 0x000310, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_GetPlayerInviteList_CS_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_GetPlayerEntryList_CS_ReturnValue) == 0x000320, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_GetPlayerEntryList_CS_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Length_ReturnValue_2) == 0x000330, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Length_ReturnValue_3) == 0x000334, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_GetPlayerEntryList_ReturnValue) == 0x000338, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_GetPlayerEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_GetPlayerInviteList_ReturnValue) == 0x000348, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_GetPlayerInviteList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Get_Item_2) == 0x000358, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Get_Item_3) == 0x000438, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Not_PreBool_ReturnValue) == 0x000518, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Length_ReturnValue_4) == 0x00051C, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Length_ReturnValue_5) == 0x000520, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Less_IntInt_ReturnValue_2) == 0x000524, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000525, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Greater_IntInt_ReturnValue) == 0x000526, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Length_ReturnValue_6) == 0x000528, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_BooleanAND_ReturnValue) == 0x00052C, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Less_IntInt_ReturnValue_3) == 0x00052D, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Array_Length_ReturnValue_7) == 0x000530, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, Temp_int_Variable) == 0x000534, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x000538, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000539, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Add_IntInt_ReturnValue_4) == 0x00053C, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000540, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_BooleanAND_ReturnValue_1) == 0x000541, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000544, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_GetGuildComp_ReturnValue_2) == 0x000558, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Create_ReturnValue_2) == 0x000560, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Request_InviteData_ReturnValue) == 0x000568, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Request_InviteData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Request_GetSendedEntries_ReturnValue) == 0x000569, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Request_GetSendedEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Request_InviteData_ReturnValue_1) == 0x00056A, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Request_InviteData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_IsValid_ReturnValue) == 0x00056B, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Create_ReturnValue_3) == 0x000570, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_AddChild_ReturnValue_3) == 0x000578, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_AddChild_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000580, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CreateDelegate_OutputDelegate_4) == 0x000590, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_Create_ReturnValue_4) == 0x0005A0, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_AddChild_ReturnValue_4) == 0x0005A8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_AddChild_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, CallFunc_AddChild_ReturnValue_5) == 0x0005B0, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::CallFunc_AddChild_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CreateDelegate_OutputDelegate_5) == 0x0005B8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_CreateDelegate_OutputDelegate_6) == 0x0005C8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList, K2Node_MakeStruct_GuildEntryData_CS) == 0x0005D8, "Member 'GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList::K2Node_MakeStruct_GuildEntryData_CS' has a wrong offset!");

// Function GuildEntriesList.GuildEntriesList_C.OnInviteArraiment
// 0x0018 (0x0018 - 0x0000)
struct GuildEntriesList_C_OnInviteArraiment final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAccept;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B04[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InEntryId;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesList_C_OnInviteArraiment) == 0x000008, "Wrong alignment on GuildEntriesList_C_OnInviteArraiment");
static_assert(sizeof(GuildEntriesList_C_OnInviteArraiment) == 0x000018, "Wrong size on GuildEntriesList_C_OnInviteArraiment");
static_assert(offsetof(GuildEntriesList_C_OnInviteArraiment, RetCode) == 0x000000, "Member 'GuildEntriesList_C_OnInviteArraiment::RetCode' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_OnInviteArraiment, IsAccept) == 0x000004, "Member 'GuildEntriesList_C_OnInviteArraiment::IsAccept' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_OnInviteArraiment, InEntryId) == 0x000008, "Member 'GuildEntriesList_C_OnInviteArraiment::InEntryId' has a wrong offset!");

// Function GuildEntriesList.GuildEntriesList_C.OnCompleteCancelEntry
// 0x0004 (0x0004 - 0x0000)
struct GuildEntriesList_C_OnCompleteCancelEntry final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesList_C_OnCompleteCancelEntry) == 0x000004, "Wrong alignment on GuildEntriesList_C_OnCompleteCancelEntry");
static_assert(sizeof(GuildEntriesList_C_OnCompleteCancelEntry) == 0x000004, "Wrong size on GuildEntriesList_C_OnCompleteCancelEntry");
static_assert(offsetof(GuildEntriesList_C_OnCompleteCancelEntry, RetCode) == 0x000000, "Member 'GuildEntriesList_C_OnCompleteCancelEntry::RetCode' has a wrong offset!");

// Function GuildEntriesList.GuildEntriesList_C.OnCompletedGuildEntry
// 0x0004 (0x0004 - 0x0000)
struct GuildEntriesList_C_OnCompletedGuildEntry final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesList_C_OnCompletedGuildEntry) == 0x000004, "Wrong alignment on GuildEntriesList_C_OnCompletedGuildEntry");
static_assert(sizeof(GuildEntriesList_C_OnCompletedGuildEntry) == 0x000004, "Wrong size on GuildEntriesList_C_OnCompletedGuildEntry");
static_assert(offsetof(GuildEntriesList_C_OnCompletedGuildEntry, RetCode) == 0x000000, "Member 'GuildEntriesList_C_OnCompletedGuildEntry::RetCode' has a wrong offset!");

// Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetSendedEntries
// 0x0004 (0x0004 - 0x0000)
struct GuildEntriesList_C_OnCompletedGetSendedEntries final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesList_C_OnCompletedGetSendedEntries) == 0x000004, "Wrong alignment on GuildEntriesList_C_OnCompletedGetSendedEntries");
static_assert(sizeof(GuildEntriesList_C_OnCompletedGetSendedEntries) == 0x000004, "Wrong size on GuildEntriesList_C_OnCompletedGetSendedEntries");
static_assert(offsetof(GuildEntriesList_C_OnCompletedGetSendedEntries, RetCode) == 0x000000, "Member 'GuildEntriesList_C_OnCompletedGetSendedEntries::RetCode' has a wrong offset!");

// Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetInviteList
// 0x0004 (0x0004 - 0x0000)
struct GuildEntriesList_C_OnCompletedGetInviteList final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesList_C_OnCompletedGetInviteList) == 0x000004, "Wrong alignment on GuildEntriesList_C_OnCompletedGetInviteList");
static_assert(sizeof(GuildEntriesList_C_OnCompletedGetInviteList) == 0x000004, "Wrong size on GuildEntriesList_C_OnCompletedGetInviteList");
static_assert(offsetof(GuildEntriesList_C_OnCompletedGetInviteList, RetCode) == 0x000000, "Member 'GuildEntriesList_C_OnCompletedGetInviteList::RetCode' has a wrong offset!");

// Function GuildEntriesList.GuildEntriesList_C.OnCompletedOnClickedGuildEntry
// 0x00E8 (0x00E8 - 0x0000)
struct GuildEntriesList_C_OnCompletedOnClickedGuildEntry final
{
public:
	struct FGuildEntryData                        GuildEntry;                                        // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UGuildEntryItem_C*                      SelectedBtn;                                       // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesList_C_OnCompletedOnClickedGuildEntry) == 0x000008, "Wrong alignment on GuildEntriesList_C_OnCompletedOnClickedGuildEntry");
static_assert(sizeof(GuildEntriesList_C_OnCompletedOnClickedGuildEntry) == 0x0000E8, "Wrong size on GuildEntriesList_C_OnCompletedOnClickedGuildEntry");
static_assert(offsetof(GuildEntriesList_C_OnCompletedOnClickedGuildEntry, GuildEntry) == 0x000000, "Member 'GuildEntriesList_C_OnCompletedOnClickedGuildEntry::GuildEntry' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_OnCompletedOnClickedGuildEntry, SelectedBtn) == 0x0000E0, "Member 'GuildEntriesList_C_OnCompletedOnClickedGuildEntry::SelectedBtn' has a wrong offset!");

// Function GuildEntriesList.GuildEntriesList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildEntriesList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildEntriesList_C_PreConstruct) == 0x000001, "Wrong alignment on GuildEntriesList_C_PreConstruct");
static_assert(sizeof(GuildEntriesList_C_PreConstruct) == 0x000001, "Wrong size on GuildEntriesList_C_PreConstruct");
static_assert(offsetof(GuildEntriesList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildEntriesList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildEntriesList.GuildEntriesList_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildEntriesList_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesList_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildEntriesList_C_GetGuildComp");
static_assert(sizeof(GuildEntriesList_C_GetGuildComp) == 0x000018, "Wrong size on GuildEntriesList_C_GetGuildComp");
static_assert(offsetof(GuildEntriesList_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildEntriesList_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildEntriesList_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesList_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildEntriesList_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

}

