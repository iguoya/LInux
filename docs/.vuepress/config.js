module.exports = {
  title: '算法和编程语言练习',
  description: ' 编程语言和算法练习 ',
  base: '/algorithm/',
//  dest: 'public',
  plugins: [
    'autobar',
    ['vuepress-plugin-mermaidjs'],
    '@maginapp/vuepress-plugin-katex',
    {
       delimiters: 'dollars'
    }
  ],
  themeConfig: {
    nav: [
      {
        text: '算法',
        link: '/algorithm/'
      },
      {
        text: '数据结构',
        link: '/data-structure/'
      },
      {
        text: 'C++',
        link: '/c++/'
      }
    ],
    sidebar: [

    ]
  }
}
