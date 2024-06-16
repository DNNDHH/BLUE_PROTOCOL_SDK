#pragma once

 

// Package: BP_CharacterSelectCaptureBustUp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C
// 0x00B0 (0x02D8 - 0x0228)
class ABP_CharacterSelectCaptureBustUp_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   PlayerAvatar;                                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSelectCaptureCharacter_C*     MyPlayerAvatar;                                    // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLoad;                                             // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD2[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FacialNum;                                         // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD3[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectIndex;                                       // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SaveSlotName;                                      // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_CharaSelectSaveGameObject_C*        SaveObj;                                           // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Gender;                                            // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BD4[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CharacterId;                                       // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<ESBFacialType>                         FacialTypeListF;                                   // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<ESBFacialType>                         FacialTypeListM;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                LockAtOffSetB;                                     // 0x02B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationOffSetB;                                   // 0x02BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TargetRotationB;                                   // 0x02C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         FovB;                                              // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CharacterSelectCaptureBustUp(int32 EntryPoint);
	void Update(float DeltaTime);
	void SetFacial(int32 Param_FacialNum);
	void DebugLocationCheckUpdeta();
	void CustomEvent_1(bool Result);
	void ReceiveBeginPlay();
	void BustUpInitialize(const struct FSBCharaCreateParameter& CharaCreateParameter, const class FString& CharacterShortId);
	void SetRender(bool Hidden);
	void ChangeFacial();
	void UpdetaCameraLocation();
	void IsLoad(bool* Param_bLoad);
	void Load_Facial_Num();
	void Save_Facial_Num(int32 Param_FacialNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterSelectCaptureBustUp_C">();
	}
	static class ABP_CharacterSelectCaptureBustUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharacterSelectCaptureBustUp_C>();
	}
};
static_assert(alignof(ABP_CharacterSelectCaptureBustUp_C) == 0x000008, "Wrong alignment on ABP_CharacterSelectCaptureBustUp_C");
static_assert(sizeof(ABP_CharacterSelectCaptureBustUp_C) == 0x0002D8, "Wrong size on ABP_CharacterSelectCaptureBustUp_C");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, UberGraphFrame) == 0x000228, "Member 'ABP_CharacterSelectCaptureBustUp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, SceneCaptureComponent2D) == 0x000230, "Member 'ABP_CharacterSelectCaptureBustUp_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, PlayerAvatar) == 0x000238, "Member 'ABP_CharacterSelectCaptureBustUp_C::PlayerAvatar' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_CharacterSelectCaptureBustUp_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, MyPlayerAvatar) == 0x000248, "Member 'ABP_CharacterSelectCaptureBustUp_C::MyPlayerAvatar' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, bLoad) == 0x000250, "Member 'ABP_CharacterSelectCaptureBustUp_C::bLoad' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, FacialNum) == 0x000254, "Member 'ABP_CharacterSelectCaptureBustUp_C::FacialNum' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, NewVar_0) == 0x000258, "Member 'ABP_CharacterSelectCaptureBustUp_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, SelectIndex) == 0x00025C, "Member 'ABP_CharacterSelectCaptureBustUp_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, SaveSlotName) == 0x000260, "Member 'ABP_CharacterSelectCaptureBustUp_C::SaveSlotName' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, SaveObj) == 0x000270, "Member 'ABP_CharacterSelectCaptureBustUp_C::SaveObj' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, Gender) == 0x000278, "Member 'ABP_CharacterSelectCaptureBustUp_C::Gender' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, CharacterId) == 0x000280, "Member 'ABP_CharacterSelectCaptureBustUp_C::CharacterId' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, FacialTypeListF) == 0x000290, "Member 'ABP_CharacterSelectCaptureBustUp_C::FacialTypeListF' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, FacialTypeListM) == 0x0002A0, "Member 'ABP_CharacterSelectCaptureBustUp_C::FacialTypeListM' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, LockAtOffSetB) == 0x0002B0, "Member 'ABP_CharacterSelectCaptureBustUp_C::LockAtOffSetB' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, LocationOffSetB) == 0x0002BC, "Member 'ABP_CharacterSelectCaptureBustUp_C::LocationOffSetB' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, TargetRotationB) == 0x0002C8, "Member 'ABP_CharacterSelectCaptureBustUp_C::TargetRotationB' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelectCaptureBustUp_C, FovB) == 0x0002D4, "Member 'ABP_CharacterSelectCaptureBustUp_C::FovB' has a wrong offset!");

}

