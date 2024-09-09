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
	 * Class NiagaraUIRenderer.NiagaraSystemWidget
	 * Size -> 0x0088 (FullSize[0x01A8] - InheritedSize[0x0120])
	 */
	class UNiagaraSystemWidget : public UWidget
	{
	public:
		class UNiagaraSystem*                                      NiagaraSystemReference;                                  // 0x0120(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                       // 0x0128(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       AutoActivate;                                            // 0x0178(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TickWhenPaused;                                          // 0x0179(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FakeDepthScale;                                          // 0x017A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLB0[0x1];                                   // 0x017B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FakeDepthScaleDistance;                                  // 0x017C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowDebugSystemInWorld;                                  // 0x0180(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SCP[0x17];                                  // 0x0181(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANiagaraUIActor*                                     NiagaraActor;                                            // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraUIComponent*                                 NiagaraComponent;                                        // 0x01A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UNiagaraUIComponent* GetNiagaraComponent();
		void DeactivateSystem();
		void ActivateSystem(bool Reset);
		static UClass* StaticClass();
	};

	/**
	 * Class NiagaraUIRenderer.NiagaraUIActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class ANiagaraUIActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NiagaraUIRenderer.NiagaraUIComponent
	 * Size -> 0x0010 (FullSize[0x0640] - InheritedSize[0x0630])
	 */
	class UNiagaraUIComponent : public UNiagaraComponent
	{
	public:
		unsigned char                                              UnknownData_XOKK[0x10];                                  // 0x0630(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
