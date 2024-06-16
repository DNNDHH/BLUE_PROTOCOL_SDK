#pragma once

 

// Package: BP_SitTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "BP_GimmickBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SitTarget.BP_SitTarget_C
// 0x0030 (0x02E0 - 0x02B0)
class ABP_SitTarget_C final : public ABP_GimmickBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SitTarget_C;                     // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cone;                                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SceneTurnDir;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MovePointDistance;                                 // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MovePointYaw;                                      // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TurnSit;                                           // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5323[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SitTurn_Yaw;                                       // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSitTargetSoundType                         SitTargetSoundType;                                // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableTurn;                                        // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EnableTurn8Dir;                                    // 0x02DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EnableSideTurn;                                    // 0x02DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_SitTarget(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void UserConstructionScript();
	void Get_Interaction_Target_Component(class USBInteractionTargetComponent** Comp);

	ESBSitTargetSoundType GetSitTargetSoundType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SitTarget_C">();
	}
	static class ABP_SitTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SitTarget_C>();
	}
};
static_assert(alignof(ABP_SitTarget_C) == 0x000008, "Wrong alignment on ABP_SitTarget_C");
static_assert(sizeof(ABP_SitTarget_C) == 0x0002E0, "Wrong size on ABP_SitTarget_C");
static_assert(offsetof(ABP_SitTarget_C, UberGraphFrame_BP_SitTarget_C) == 0x0002B0, "Member 'ABP_SitTarget_C::UberGraphFrame_BP_SitTarget_C' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, Cone) == 0x0002B8, "Member 'ABP_SitTarget_C::Cone' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, SceneTurnDir) == 0x0002C0, "Member 'ABP_SitTarget_C::SceneTurnDir' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, MovePointDistance) == 0x0002C8, "Member 'ABP_SitTarget_C::MovePointDistance' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, MovePointYaw) == 0x0002CC, "Member 'ABP_SitTarget_C::MovePointYaw' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, TurnSit) == 0x0002D0, "Member 'ABP_SitTarget_C::TurnSit' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, SitTurn_Yaw) == 0x0002D4, "Member 'ABP_SitTarget_C::SitTurn_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, SitTargetSoundType) == 0x0002D8, "Member 'ABP_SitTarget_C::SitTargetSoundType' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, EnableTurn) == 0x0002D9, "Member 'ABP_SitTarget_C::EnableTurn' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, EnableTurn8Dir) == 0x0002DA, "Member 'ABP_SitTarget_C::EnableTurn8Dir' has a wrong offset!");
static_assert(offsetof(ABP_SitTarget_C, EnableSideTurn) == 0x0002DB, "Member 'ABP_SitTarget_C::EnableSideTurn' has a wrong offset!");

}

