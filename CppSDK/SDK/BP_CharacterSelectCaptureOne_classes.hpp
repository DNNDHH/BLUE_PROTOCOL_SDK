#pragma once

 

// Package: BP_CharacterSelectCaptureOne

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C
// 0x0090 (0x02B8 - 0x0228)
class ABP_CharacterSelectCaptureOne_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D1;                          // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   PlayerAvatar;                                      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSelectCaptureCharacter_C*     MyPlayerAvatar;                                    // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MyNumber;                                          // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E61[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MyCharacterId;                                     // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bLoad;                                             // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E62[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PoseID;                                            // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CharaIndex;                                        // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HiddenTimer;                                       // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         StateNameList;                                     // 0x0280(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           GameStartList;                                     // 0x0290(0x0010)(Edit, BlueprintVisible)
	struct FVector                                LocationOffSetA;                                   // 0x02A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FovA;                                              // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstSet;                                          // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsReUpdateAfterLoading;                            // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_CharacterSelectCaptureOne(int32 EntryPoint);
	void DefaultPause();
	void GameStartPlay(int32 SelectICharandex);
	void Update(float DeltaTime, int32 SelectICharandex);
	void UpdetaCameraLocation();
	void DebugLocationCheckUpdeta();
	void CustomEvent_1(bool Result);
	void ReceiveBeginPlay();
	void Initialize(const struct FSBCharaCreateParameter& CharaCreateParameter, int32 Number, const class FString& CharacterId, int32 Param_PoseID, int32 Param_CharaIndex);
	void GetNumber(int32* Param_MyNumber);
	void Is_Load_Now(bool* Param_bLoad);
	void CaptureVisible();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterSelectCaptureOne_C">();
	}
	static class ABP_CharacterSelectCaptureOne_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharacterSelectCaptureOne_C>();
	}
};
static_assert(alignof(ABP_CharacterSelectCaptureOne_C) == 0x000008, "Wrong alignment on ABP_CharacterSelectCaptureOne_C");
static_assert(sizeof(ABP_CharacterSelectCaptureOne_C) == 0x0002B8, "Wrong size on ABP_CharacterSelectCaptureOne_C");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, UberGraphFrame) == 0x000228, "Member 'ABP_CharacterSelectCaptureOne_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, SceneCaptureComponent2D) == 0x000230, "Member 'ABP_CharacterSelectCaptureOne_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, SceneCaptureComponent2D1) == 0x000238, "Member 'ABP_CharacterSelectCaptureOne_C::SceneCaptureComponent2D1' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, PlayerAvatar) == 0x000240, "Member 'ABP_CharacterSelectCaptureOne_C::PlayerAvatar' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_CharacterSelectCaptureOne_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, MyPlayerAvatar) == 0x000250, "Member 'ABP_CharacterSelectCaptureOne_C::MyPlayerAvatar' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, MyNumber) == 0x000258, "Member 'ABP_CharacterSelectCaptureOne_C::MyNumber' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, MyCharacterId) == 0x000260, "Member 'ABP_CharacterSelectCaptureOne_C::MyCharacterId' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, bLoad) == 0x000270, "Member 'ABP_CharacterSelectCaptureOne_C::bLoad' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, PoseID) == 0x000274, "Member 'ABP_CharacterSelectCaptureOne_C::PoseID' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, CharaIndex) == 0x000278, "Member 'ABP_CharacterSelectCaptureOne_C::CharaIndex' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, HiddenTimer) == 0x00027C, "Member 'ABP_CharacterSelectCaptureOne_C::HiddenTimer' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, StateNameList) == 0x000280, "Member 'ABP_CharacterSelectCaptureOne_C::StateNameList' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, GameStartList) == 0x000290, "Member 'ABP_CharacterSelectCaptureOne_C::GameStartList' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, LocationOffSetA) == 0x0002A0, "Member 'ABP_CharacterSelectCaptureOne_C::LocationOffSetA' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, FovA) == 0x0002AC, "Member 'ABP_CharacterSelectCaptureOne_C::FovA' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, FirstSet) == 0x0002B0, "Member 'ABP_CharacterSelectCaptureOne_C::FirstSet' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureOne_C, IsReUpdateAfterLoading) == 0x0002B1, "Member 'ABP_CharacterSelectCaptureOne_C::IsReUpdateAfterLoading' has a wrong offset!");

}

