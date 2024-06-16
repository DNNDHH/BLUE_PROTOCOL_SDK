#pragma once

 

// Package: BP_MannequinForCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CharaParts_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MannequinForCapture.BP_MannequinForCapture_C
// 0x0080 (0x1550 - 0x14D0)
class ABP_MannequinForCapture_C final : public ASBCharaCreateCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class FName, ECharaPartsLocation>        MannequinBodyPartsNameAndLocationList;             // 0x14D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	ECharaPartsLocation                           TempCharaPartsLocation;                            // 0x1528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91CA[0x3];                                     // 0x1529(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempCharaPartsLocationValuesId;                    // 0x152C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TempPartsName;                                     // 0x1530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempPartsColorId;                                  // 0x1538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempPartsColorSaturation;                          // 0x153C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempPartsColorValue;                               // 0x1540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempPartsMaterialId;                               // 0x1544(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            TempCharaCreateParamGender;                        // 0x1548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAnimChange;                                      // 0x1549(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_MannequinForCapture(int32 EntryPoint);
	void SetMannequinType(bool IsMale);
	void SetCostumeToMannequin(int32 InCostumeItemId, bool IsOwnItem, int32 InOwnCostumeColorIndex, const int32 InOwnCostumeColorS, int32 InOwnCostumeColorV, int32 InOwnCostumeMaterialId);
	void ReceiveBeginPlay();
	void UpdateMannequin();
	void ResetMannequin();
	void UpdateAnimChange(int32 InCostumeItemId, bool* OutAnimChange);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MannequinForCapture_C">();
	}
	static class ABP_MannequinForCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MannequinForCapture_C>();
	}
};
static_assert(alignof(ABP_MannequinForCapture_C) == 0x000010, "Wrong alignment on ABP_MannequinForCapture_C");
static_assert(sizeof(ABP_MannequinForCapture_C) == 0x001550, "Wrong size on ABP_MannequinForCapture_C");
static_assert(offsetof(ABP_MannequinForCapture_C, UberGraphFrame) == 0x0014D0, "Member 'ABP_MannequinForCapture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, MannequinBodyPartsNameAndLocationList) == 0x0014D8, "Member 'ABP_MannequinForCapture_C::MannequinBodyPartsNameAndLocationList' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, TempCharaPartsLocation) == 0x001528, "Member 'ABP_MannequinForCapture_C::TempCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, TempCharaPartsLocationValuesId) == 0x00152C, "Member 'ABP_MannequinForCapture_C::TempCharaPartsLocationValuesId' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, TempPartsName) == 0x001530, "Member 'ABP_MannequinForCapture_C::TempPartsName' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, TempPartsColorId) == 0x001538, "Member 'ABP_MannequinForCapture_C::TempPartsColorId' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, TempPartsColorSaturation) == 0x00153C, "Member 'ABP_MannequinForCapture_C::TempPartsColorSaturation' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, TempPartsColorValue) == 0x001540, "Member 'ABP_MannequinForCapture_C::TempPartsColorValue' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, TempPartsMaterialId) == 0x001544, "Member 'ABP_MannequinForCapture_C::TempPartsMaterialId' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, TempCharaCreateParamGender) == 0x001548, "Member 'ABP_MannequinForCapture_C::TempCharaCreateParamGender' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_C, IsAnimChange) == 0x001549, "Member 'ABP_MannequinForCapture_C::IsAnimChange' has a wrong offset!");

}

