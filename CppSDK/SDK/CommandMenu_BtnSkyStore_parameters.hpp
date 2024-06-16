#pragma once

 

// Package: CommandMenu_BtnSkyStore

#include "Basic.hpp"


namespace SDK::Params
{

// Function CommandMenu_BtnSkyStore.CommandMenu_BtnSkyStore_C.ExecuteUbergraph_CommandMenu_BtnSkyStore
// 0x0028 (0x0028 - 0x0000)
struct CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E70[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore) == 0x000008, "Wrong alignment on CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore");
static_assert(sizeof(CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore) == 0x000028, "Wrong size on CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore");
static_assert(offsetof(CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore, EntryPoint) == 0x000000, "Member 'CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}

