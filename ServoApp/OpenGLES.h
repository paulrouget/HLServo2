/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once

class OpenGLES {
public:
  OpenGLES();
  ~OpenGLES();

  EGLSurface
  CreateSurface(winrt::Windows::UI::Xaml::Controls::SwapChainPanel const &);
  EGLSurface CreateSurface(winrt::Windows::UI::Core::CoreWindow const &);

  void GetSurfaceDimensions(const EGLSurface surface, EGLint *width,
                            EGLint *height);
  void DestroySurface(const EGLSurface surface);
  void MakeCurrent(const EGLSurface surface);
  EGLBoolean SwapBuffers(const EGLSurface surface);
  void Reset();

private:
  void Initialize();
  void Cleanup();

private:
  EGLDisplay mEglDisplay;
  EGLContext mEglContext;
  EGLConfig mEglConfig;
};
