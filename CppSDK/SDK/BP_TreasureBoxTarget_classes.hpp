#pragma once

 

// Package: BP_TreasureBoxTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TreasureBoxTarget.BP_TreasureBoxTarget_C
// 0x0170 (0x0438 - 0x02C8)
class ABP_TreasureBoxTarget_C : public ASBFieldActorTreasureBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBFieldStatusComponent*                FieldStatus;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Lower;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Upper;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         OpenBoxTimeline___Track_0_4E2FCB944B0049D115073E85D5AC9C05; // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            OpenBoxTimeline__Direction_4E2FCB944B0049D115073E85D5AC9C05; // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A68[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     OpenBoxTimeline;                                   // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CullentEffect;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_Tbox_Silver;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_Tbox_Red;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_Tbox_Gorgeous;                                  // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_Tbox_Event;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxLid_Silver;                                 // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxLid_Red;                                    // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxLid_Gorgeous;                               // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxLid_Event;                                  // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxOpen_Silver;                                // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxOpen_Red;                                   // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxOpen_Gorgeous;                              // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxOpen_Event;                                 // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_TboxLid;                                        // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_TboxOpen;                                       // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_Tbox_Vanish_Silver;                             // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_Tbox_Vanish_Red;                                // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_Tbox_Vanish_Gorgeous;                           // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_Tbox_Vanish_Event;                              // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxLid_Vanish_Silver;                          // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxLid_Vanish_Red;                             // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxLid_Vanish_Gorgeous;                        // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS_TboxLid_Vanish_Event;                           // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_TboxOpen_Silver;                                // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_TboxOpen_Gold;                                  // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_TboxOpen_Gorgeous;                              // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_TboxOpen_Event;                                 // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM_TboxLower_Silver;                               // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM_TboxLower_Red;                                  // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM_TboxLower_Gorgeous;                             // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM_TboxLower_Event;                                // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM_TboxUpper_Silver;                               // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM_TboxUpper_Red;                                  // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM_TboxUpper_Gergeous;                             // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM_TboxUpper_Event;                                // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_TboxDisappear;                                  // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_TboxDrop_Silver;                                // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_TboxDrop_Gold;                                  // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_TboxDrop_Gorgeous;                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBDestructible*                        LandingDestructibleObject;                         // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TreasureBoxTarget(int32 EntryPoint);
	void ReceiveBeginPlay();
	void DestructAfterSetLocation(class ASBDestructible* Myself);
	void Disappear();
	void Appear(bool IsDropPlaySE);
	void PostOpenBox(ESBTreasureBoxLotResult Result, const TArray<struct FSBTreasureBoxLotResult>& LotResults, class FName TextId);
	void PreOpenBox(class AActor* InOtherActor, const struct FRotator& ViewRotation);
	void ResetFuta();
	void OpenBoxTimeline__UpdateFunc();
	void OpenBoxTimeline__FinishedFunc();
	void BoxOpenEffectFunc(bool IsAutoAllOpenTreasureBox);
	void GetStaticMeshLower(class UStaticMesh** StaticMesh);
	void GetStaticMeshUpper(class UStaticMesh** StaticMesh);
	void GetSpawnParticle(class UAkAudioEvent* DropSE1, class UParticleSystem** Particle, class UAkAudioEvent** DropSE);
	void GetSpawnLidParticle(class UParticleSystem** Particle);
	void GetOpenParticle(class UParticleSystem** Particle);
	void GetOpenSound(class UAkAudioEvent** AkAudioEvent);
	void GetDisappearParticle(class UParticleSystem** Particle);
	void GetDisappearSound(class UAkAudioEvent** AkAudioEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TreasureBoxTarget_C">();
	}
	static class ABP_TreasureBoxTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TreasureBoxTarget_C>();
	}
};
static_assert(alignof(ABP_TreasureBoxTarget_C) == 0x000008, "Wrong alignment on ABP_TreasureBoxTarget_C");
static_assert(sizeof(ABP_TreasureBoxTarget_C) == 0x000438, "Wrong size on ABP_TreasureBoxTarget_C");
static_assert(offsetof(ABP_TreasureBoxTarget_C, UberGraphFrame) == 0x0002C8, "Member 'ABP_TreasureBoxTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, FieldStatus) == 0x0002D0, "Member 'ABP_TreasureBoxTarget_C::FieldStatus' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, StaticMesh_Lower) == 0x0002D8, "Member 'ABP_TreasureBoxTarget_C::StaticMesh_Lower' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, StaticMesh_Upper) == 0x0002E0, "Member 'ABP_TreasureBoxTarget_C::StaticMesh_Upper' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, OpenBoxTimeline___Track_0_4E2FCB944B0049D115073E85D5AC9C05) == 0x0002E8, "Member 'ABP_TreasureBoxTarget_C::OpenBoxTimeline___Track_0_4E2FCB944B0049D115073E85D5AC9C05' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, OpenBoxTimeline__Direction_4E2FCB944B0049D115073E85D5AC9C05) == 0x0002EC, "Member 'ABP_TreasureBoxTarget_C::OpenBoxTimeline__Direction_4E2FCB944B0049D115073E85D5AC9C05' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, OpenBoxTimeline) == 0x0002F0, "Member 'ABP_TreasureBoxTarget_C::OpenBoxTimeline' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, CullentEffect) == 0x0002F8, "Member 'ABP_TreasureBoxTarget_C::CullentEffect' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_Tbox_Silver) == 0x000300, "Member 'ABP_TreasureBoxTarget_C::PS_Tbox_Silver' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_Tbox_Red) == 0x000308, "Member 'ABP_TreasureBoxTarget_C::PS_Tbox_Red' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_Tbox_Gorgeous) == 0x000310, "Member 'ABP_TreasureBoxTarget_C::PS_Tbox_Gorgeous' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_Tbox_Event) == 0x000318, "Member 'ABP_TreasureBoxTarget_C::PS_Tbox_Event' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxLid_Silver) == 0x000320, "Member 'ABP_TreasureBoxTarget_C::PS_TboxLid_Silver' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxLid_Red) == 0x000328, "Member 'ABP_TreasureBoxTarget_C::PS_TboxLid_Red' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxLid_Gorgeous) == 0x000330, "Member 'ABP_TreasureBoxTarget_C::PS_TboxLid_Gorgeous' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxLid_Event) == 0x000338, "Member 'ABP_TreasureBoxTarget_C::PS_TboxLid_Event' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxOpen_Silver) == 0x000340, "Member 'ABP_TreasureBoxTarget_C::PS_TboxOpen_Silver' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxOpen_Red) == 0x000348, "Member 'ABP_TreasureBoxTarget_C::PS_TboxOpen_Red' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxOpen_Gorgeous) == 0x000350, "Member 'ABP_TreasureBoxTarget_C::PS_TboxOpen_Gorgeous' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxOpen_Event) == 0x000358, "Member 'ABP_TreasureBoxTarget_C::PS_TboxOpen_Event' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxLid) == 0x000360, "Member 'ABP_TreasureBoxTarget_C::PS_TboxLid' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxOpen) == 0x000368, "Member 'ABP_TreasureBoxTarget_C::PS_TboxOpen' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_Tbox_Vanish_Silver) == 0x000370, "Member 'ABP_TreasureBoxTarget_C::PS_Tbox_Vanish_Silver' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_Tbox_Vanish_Red) == 0x000378, "Member 'ABP_TreasureBoxTarget_C::PS_Tbox_Vanish_Red' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_Tbox_Vanish_Gorgeous) == 0x000380, "Member 'ABP_TreasureBoxTarget_C::PS_Tbox_Vanish_Gorgeous' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_Tbox_Vanish_Event) == 0x000388, "Member 'ABP_TreasureBoxTarget_C::PS_Tbox_Vanish_Event' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxLid_Vanish_Silver) == 0x000390, "Member 'ABP_TreasureBoxTarget_C::PS_TboxLid_Vanish_Silver' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxLid_Vanish_Red) == 0x000398, "Member 'ABP_TreasureBoxTarget_C::PS_TboxLid_Vanish_Red' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxLid_Vanish_Gorgeous) == 0x0003A0, "Member 'ABP_TreasureBoxTarget_C::PS_TboxLid_Vanish_Gorgeous' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, PS_TboxLid_Vanish_Event) == 0x0003A8, "Member 'ABP_TreasureBoxTarget_C::PS_TboxLid_Vanish_Event' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, Ak_TboxOpen_Silver) == 0x0003B0, "Member 'ABP_TreasureBoxTarget_C::Ak_TboxOpen_Silver' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, Ak_TboxOpen_Gold) == 0x0003B8, "Member 'ABP_TreasureBoxTarget_C::Ak_TboxOpen_Gold' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, Ak_TboxOpen_Gorgeous) == 0x0003C0, "Member 'ABP_TreasureBoxTarget_C::Ak_TboxOpen_Gorgeous' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, Ak_TboxOpen_Event) == 0x0003C8, "Member 'ABP_TreasureBoxTarget_C::Ak_TboxOpen_Event' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, SM_TboxLower_Silver) == 0x0003D0, "Member 'ABP_TreasureBoxTarget_C::SM_TboxLower_Silver' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, SM_TboxLower_Red) == 0x0003D8, "Member 'ABP_TreasureBoxTarget_C::SM_TboxLower_Red' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, SM_TboxLower_Gorgeous) == 0x0003E0, "Member 'ABP_TreasureBoxTarget_C::SM_TboxLower_Gorgeous' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, SM_TboxLower_Event) == 0x0003E8, "Member 'ABP_TreasureBoxTarget_C::SM_TboxLower_Event' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, SM_TboxUpper_Silver) == 0x0003F0, "Member 'ABP_TreasureBoxTarget_C::SM_TboxUpper_Silver' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, SM_TboxUpper_Red) == 0x0003F8, "Member 'ABP_TreasureBoxTarget_C::SM_TboxUpper_Red' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, SM_TboxUpper_Gergeous) == 0x000400, "Member 'ABP_TreasureBoxTarget_C::SM_TboxUpper_Gergeous' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, SM_TboxUpper_Event) == 0x000408, "Member 'ABP_TreasureBoxTarget_C::SM_TboxUpper_Event' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, Ak_TboxDisappear) == 0x000410, "Member 'ABP_TreasureBoxTarget_C::Ak_TboxDisappear' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, Ak_TboxDrop_Silver) == 0x000418, "Member 'ABP_TreasureBoxTarget_C::Ak_TboxDrop_Silver' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, Ak_TboxDrop_Gold) == 0x000420, "Member 'ABP_TreasureBoxTarget_C::Ak_TboxDrop_Gold' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, Ak_TboxDrop_Gorgeous) == 0x000428, "Member 'ABP_TreasureBoxTarget_C::Ak_TboxDrop_Gorgeous' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxTarget_C, LandingDestructibleObject) == 0x000430, "Member 'ABP_TreasureBoxTarget_C::LandingDestructibleObject' has a wrong offset!");

}

