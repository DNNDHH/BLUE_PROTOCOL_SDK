#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass SkillTree_SkillIconBase.SkillTree_SkillIconBase_C
	 * Size -> 0x0110 (FullSize[0x0388] - InheritedSize[0x0278])
	 */
	class USkillTree_SkillIconBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SkillId;                                                 // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9JK7[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SkillLevel;                                              // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_62H5[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              IconRef;                                                 // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UWidget*                                             EquipmentIconRef;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UImage*                                              IconBgRef1;                                              // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UImage*                                              ElementIconRef;                                          // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TMap<ESBSkillIconBgType, class UTexture2D*>                IconBgImageList;                                         // 0x02E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<ESBSkillElementIconType, class UTexture2D*>           ElementIconImageList;                                    // 0x0330(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetEquipmentIconVisible(bool Visible);
		void UpdateSimple();
		void Update();
		void Init(bool IsPassive, int32_t SkillId, int32_t SkillLevel);
		void Destruct();
		void ExecuteUbergraph_SkillTree_SkillIconBase(int32_t EntryPoint);
		void OnUnhovered__DelegateSignature(int32_t SkillId);
		void OnHovered__DelegateSignature(int32_t SkillId);
		void OnClicked__DelegateSignature(int32_t SkillId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
