#pragma once

 

// Package: GameLogout

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GameLogout.GameLogout_C
// 0x0020 (0x0298 - 0x0278)
class UGameLogout_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          DoLogout;                                          // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40CC[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LogoutCountdownTime;                               // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCountdownUI_C*                         CountdownUI;                                       // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameQuit;                                          // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_GameLogout(int32 EntryPoint);
	void OnEndCountdown(ECountdownResult Result);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GameLogout_C">();
	}
	static class UGameLogout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameLogout_C>();
	}
};
static_assert(alignof(UGameLogout_C) == 0x000008, "Wrong alignment on UGameLogout_C");
static_assert(sizeof(UGameLogout_C) == 0x000298, "Wrong size on UGameLogout_C");
static_assert(offsetof(UGameLogout_C, UberGraphFrame) == 0x000278, "Member 'UGameLogout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGameLogout_C, DoLogout) == 0x000280, "Member 'UGameLogout_C::DoLogout' has a wrong offset!");
static_assert(offsetof(UGameLogout_C, LogoutCountdownTime) == 0x000284, "Member 'UGameLogout_C::LogoutCountdownTime' has a wrong offset!");
static_assert(offsetof(UGameLogout_C, CountdownUI) == 0x000288, "Member 'UGameLogout_C::CountdownUI' has a wrong offset!");
static_assert(offsetof(UGameLogout_C, GameQuit) == 0x000290, "Member 'UGameLogout_C::GameQuit' has a wrong offset!");

}

